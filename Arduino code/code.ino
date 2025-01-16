
#include <WiFi.h>
#include <HTTPClient.h>
#include <ESP32Servo.h>

const char WIFI_SSID[] = "Bitta";
const char WIFI_PASSWORD[] = "12345678";

String HOST_NAME = "http://192.168.150.22";
String PATH_NAME = "/ESP32_Cam_Object_Detection/data.txt";

HTTPClient http;
int exec = 0;
int saNum = 0;

int ledPin = 13;

Servo myservo;
int servoPin = 14;

void setup() {
    Serial.begin(115200);
    pinMode(ledPin, OUTPUT);
    myservo.attach(servoPin);

    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    Serial.println("Connecting");
    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
  }

  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());

  http.begin(HOST_NAME + PATH_NAME);
  int httpCode = http.GET();

  if (httpCode > 0)  // httpCode will be negative on error
  {
    if (httpCode == HTTP_CODE_OK)  // file found at server
    {
      exec = 1;
    } else Serial.printf("[HTTP] GET... code: %d\n", httpCode);
  } else Serial.printf("[HTTP] GET... failed, error: %s\n", http.errorToString(httpCode).c_str());

  http.end();
}

void loop() {
  Serial.println("");
  if (exec == 1) {
    http.begin(HOST_NAME + PATH_NAME);
    int httpCode = http.GET();
    String payload = http.getString();
    Serial.println(payload);
    if(payload=="1") {
      digitalWrite(ledPin, HIGH);
      myservo.write(servoAngle(saNum));
      delay(1000);
      myservo.write(servoAngle(saNum));
      delay(1000);
      myservo.write(servoAngle(saNum));
      delay(1000);
    } else {
      digitalWrite(ledPin, LOW);
    }
  }
  delay(50);
}

int servoAngle(int num){
  if(num == 0) {
    saNum=180;
    return 180;
  } else {
    saNum=0;
    return 0;
  }
}