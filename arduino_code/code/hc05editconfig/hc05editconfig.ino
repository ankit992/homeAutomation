#include <SoftwareSerial.h>
SoftwareSerial BTSerial( 10, 9 ); // RX | TX

void setup() {
  pinMode(2,OUTPUT);
//  // put your setup code here, to run once:
  digitalWrite(2,HIGH);
  Serial.begin(9600);
      Serial.println("Enter AT commands : ");
  BTSerial.begin(38400);
}

void loop() {
  // Keep reading from HC-05 and send to Arduino Serial Monitor
  if (BTSerial.available()){
    Serial.write(BTSerial.read());
//    Serial.println(BTSerial.read()+"asdasd");
    }

  // Keep reading from Arduino Serial Monitor and send to HC-05
  if (Serial.available()){
//        Serial.println(Serial.read());
        BTSerial.write(Serial.read());
    }
}

