int relay1 = 2;                 
int relay2 = 3;                 
int relay3 = 4;                 
int relay4 = 5;
int relay5 = 6;
int relay6 = 7;
int relay7 = 8;
int relay8 = 9;
   
char junk;
String inputString="";              

void setup() {
   Serial.begin(9600); 
   pinMode(relay1, OUTPUT);
   pinMode(relay2, OUTPUT);
   pinMode(relay3, OUTPUT);
   pinMode(relay4, OUTPUT);
   pinMode(relay5, OUTPUT);
   pinMode(relay6, OUTPUT);
   pinMode(relay7, OUTPUT);
   pinMode(relay8, OUTPUT);
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
    if(inputString == "1o"){ digitalWrite(relay1, HIGH);}
    else if(inputString == "1f"){ digitalWrite(relay1, LOW);}
    else if(inputString == "2o"){ digitalWrite(relay2, HIGH);}
    else if(inputString == "2f"){ digitalWrite(relay2, LOW);}
    else if(inputString == "3o"){ digitalWrite(relay3, HIGH);}
    else if(inputString == "3f"){ digitalWrite(relay3, LOW);}
    else if(inputString == "4o"){ digitalWrite(relay4, HIGH);}
    else if(inputString == "4f"){ digitalWrite(relay4, LOW);}
    else if(inputString == "5o"){ digitalWrite(relay5, HIGH);}
    else if(inputString == "5f"){ digitalWrite(relay5, LOW);}
    else if(inputString == "6o"){ digitalWrite(relay6, HIGH);}
    else if(inputString == "6f"){ digitalWrite(relay6, LOW);}
    else if(inputString == "7o"){ digitalWrite(relay7, HIGH);}
    else if(inputString == "7f"){ digitalWrite(relay7, LOW);}
    else if(inputString == "8o"){ digitalWrite(relay8, HIGH);}
    else if(inputString == "8f"){ digitalWrite(relay8, LOW);}
    }
    inputString = "";              \
}

