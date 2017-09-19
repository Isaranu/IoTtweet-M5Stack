#include <M5Stack.h>

// the setup routine runs once when M5Stack starts up
void setup(){

  // initialize the M5Stack object
  M5.begin();

  // Lcd display
  M5.Lcd.printf("button test\r\n");

  // Set beep sound
  M5.Speaker.setBeep(500, 100); // freq:500Hz, duration 100ms.
}

// the loop routine runs over and over again forever
void loop() {

  if(M5.BtnA.wasPressed()) {
    M5.Lcd.printf("wasPressed A \r\n");
    Serial.printf("wasPressed A \r\n");
    M5.Speaker.tone(1000);
  }

  if(M5.BtnA.wasReleased()) {
    M5.Lcd.printf("wasReleased A \r\n");
    Serial.printf("wasReleased A \r\n");
    M5.Speaker.mute();
  }

  if(M5.BtnB.wasPressed()) {
    M5.Lcd.printf("wasPressed B \r\n");
    Serial.printf("wasPressed B \r\n");
    M5.Speaker.tone(1500);
  }

  if(M5.BtnB.wasReleased()) {
    M5.Lcd.printf("wasReleased B \r\n");
    Serial.printf("wasReleased B \r\n");
    M5.Speaker.mute();
  }

  if(M5.BtnC.wasPressed()) {
    M5.Lcd.printf("wasPressed C \r\n");
    Serial.printf("wasPressed C \r\n");
    M5.Speaker.beep();
  }

  if(M5.BtnC.wasReleased()) {
    M5.Lcd.printf("wasReleased C \r\n");
    Serial.printf("wasReleased C \r\n");
  }

  M5.update();
}
