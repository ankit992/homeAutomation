int relay1 = 7;                 
int relay2 = 8;                 
int relay3 = 9;                 
int relay4 = 10;                 

void setup() {
  // put your setup code here, to run once:
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
  pinMode(relay4,OUTPUT);
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relay2, HIGH);   // sets the LED on
  delay(1000);                  // waits for a second
  digitalWrite(relay2, LOW);    // sets the LED off
  delay(1000);                  // waits for a second
}
