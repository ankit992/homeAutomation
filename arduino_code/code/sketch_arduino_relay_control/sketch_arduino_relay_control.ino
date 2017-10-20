int relay1 = 7;                 
int relay2 = 8;                 
int relay3 = 9;                 
int relay4 = 10;   
char junk;
String inputString="";              

void setup() {
 Serial.begin(9600);         
 pinMode(relay2, OUTPUT);
}

void loop() {
   if(Serial.available()){
  while(Serial.available())
    {
      char inChar = (char)Serial.read(); //read the input
      inputString += inChar;        //make a string of the characters coming on serial
    }
    Serial.println(inputString);
    while (Serial.available() > 0)  
    { junk = Serial.read() ; }      // clear the serial buffer
    if(inputString == "a"){         //in case of 'a' turn the LED on
      digitalWrite(relay2, HIGH);  
    }else if(inputString == "b"){   //incase of 'b' turn the LED off
       digitalWrite(relay2, LOW);
    }
    inputString = "";              \
}
}
