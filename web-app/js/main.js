const takeTime = async () => {
  await new Promise((resolve) => {
    setTimeout(resolve, 2000);
  });
};

var interval = "";

function readBirdDetectCmd() {
  $.post(
    "http://192.168.150.22/ESP32_Cam_Object_Detection/web-app/read.php",
    {},
    async (res) => {
      console.log(res);
      if (res == 1 || res == "1") {
        $("#birdimg").html(`
            <img src="res/img/bird.png">
            <div class="detect" style="color:red">Bird detected</div>
            `);
        $("#iotimg").html(`
            <img src="res/img/iot.png">
            <div class="detect" style="color:red">ScareCrow is active</div>
            `);
        clearInterval(interval);
        setTimeout(() => {
          interval = setInterval(() => readBirdDetectCmd(), 100);
        }, 2000);
        // await takeTime();
        // setTimeout(() => {
        //   readBirdDetectCmd();
        // }, 1500);
      } else {
        $("#birdimg").html(`
            <img src="res/img/bird.png">
            <div class="detect" style="color:green">No bird detected</div>
            `);
        $("#iotimg").html(`
            <img src="res/img/iot.png">
            <div class="detect" style="color:green">ScareCrow not active</div>
            `);
      }
      // readBirdDetectCmd();
      // setTimeout(() => {
      // }, 500);
    }
  );
}
interval = setInterval(() => readBirdDetectCmd(), 100);
