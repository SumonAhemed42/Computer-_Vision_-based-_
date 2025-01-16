# Computer Vision-Based Smart Scarecrow

## Overview
The **Smart Scarecrow** is an innovative, cost-effective solution for protecting crops from hazardous animals like birds. It integrates **ESP32 microcontroller** with the **YOLOv3 pretrained model** for real-time animal detection and deterrence using movement, lights, and sound. A web interface provides users with real-time monitoring capabilities.

---

## Key Features
- **Real-Time Detection**: Uses YOLOv3 for identifying harmful animals in agricultural fields.
- **Automated Deterrence**: Activates dynamic scarecrow movement, lights, and buzzer to repel threats.
- **Web Interface**: User-friendly platform for monitoring detection and system status.
- **Cost-Effective Design**: Practical and accessible for farmers.

---

## System Components
- **ESP32 Cam**: Captures real-time video.
- **YOLOv3 Pretrained Model**: Processes video frames for object detection.
- **Servo Motor**: Triggers scarecrow movement.
- **Buzzer**: Emits sound alerts.
- **LED Lights**: Enhances visibility and deters animals at night.
- **Web Interface**: Built with HTML, CSS, and PHP for status updates.

---

## System Workflow
1. The **ESP32 Cam** captures video from the field.
2. Video frames are analyzed by the **YOLOv3 model** for object detection.
3. Upon detecting birds:
   - The **servo motor** moves the scarecrow.
   - **Lights** and a **buzzer** are activated.
4. The system updates the **web interface** for user notification.

---

## Results
- Reduced crop damage from hazardous animals.
- Automated crop protection requiring minimal human intervention.
- Improved agricultural productivity and efficiency.

---

## Limitations
- Latency in real-time detection and response.
- Limited vision range of the ESP32 Cam.
- Environmental factors (e.g., rain, fog) affecting detection accuracy.

---

## Future Enhancements
- Optimize processing for faster response times.
- Use additional or higher-resolution cameras to extend vision range.
- Customize detection for specific animal species.
- Incorporate multi-object detection to identify various animal threats.

---

## Getting Started
### Prerequisites
- **ESP32 Cam**
- **YOLOv3 model files** (e.g., `.pb` and `.pbtxt`)
- **FTDI USB to TTL Serial Converter Adapter**
- Servo motor, buzzer, and LED lights
- External power supply

### Installation
1. Flash the ESP32 Cam with the provided firmware.
2. Set up the YOLOv3 model on a server or PC.
3. Deploy the web interface files to a server supporting PHP.
4. Connect the ESP32 Cam, servo motor, buzzer, and LEDs as per the circuit diagram.

### Usage
1. Power on the system and ensure the ESP32 Cam is streaming video.
2. Monitor the web interface for real-time updates on detections.
3. The system will automatically deter animals upon detection.

---

## Acknowledgments
This project is a collaborative effort by:
- **Jul Jalal Al-Mamur Sayor**
- **Nishat Tasnim Shishir**
- **Bitta Boibhov Barmon**
- **Sumon Ahemed**

Department of IoT and Robotics Engineering, Bangabandhu Sheikh Mujibur Rahman Digital University, Bangladesh.

---

## License
This project is licensed under the MIT License. See the `LICENSE` file for details.
