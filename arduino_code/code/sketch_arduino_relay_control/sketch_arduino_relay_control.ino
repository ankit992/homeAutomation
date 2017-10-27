int relay1 = 2;                 
int relay2 = 3;                 
int relay3 = 4;                 
int relay4 = 5;
int relay5 = 6;
int relay6 = 7;
int relay7 = 8;
int relay8 = 9;
   
char junk;
char inputInt;              

void setup() {
    Serial.begin(9600); 
   Serial.println("Sketch arduino relay");
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
      inputInt = inChar;        //make a string of the characters coming on serial
    }
    Serial.println("dumbo moti");
    Serial.println(inputInt);
    Serial.println("dumbo moti");
    if(inputInt == '1'){ digitalWrite(relay1, HIGH);}
    else if(inputInt == '2'){ digitalWrite(relay1, LOW);}
    else if(inputInt == '3'){ digitalWrite(relay2, HIGH);}
    else if(inputInt == '4'){ digitalWrite(relay2, LOW);}
    else if(inputInt =='5'){ digitalWrite(relay3, HIGH);}
    else if(inputInt == '6'){ digitalWrite(relay3, LOW);}
    else if(inputInt == '7'){ digitalWrite(relay4, HIGH);}
    else if(inputInt == '8'){ digitalWrite(relay4, LOW);}
    else if(inputInt == '9'){ digitalWrite(relay5, HIGH);}
    else if(inputInt == 'a'){ digitalWrite(relay5, LOW);}
    else if(inputInt == 'b'){ digitalWrite(relay6, HIGH);}
    else if(inputInt == 'c'){ digitalWrite(relay6, LOW);}
    else if(inputInt == 'd'){ digitalWrite(relay7, HIGH);}
    else if(inputInt == 'e'){ digitalWrite(relay7, LOW);}
    else if(inputInt == 'f'){ digitalWrite(relay8, HIGH);}
    else if(inputInt == 'g'){ digitalWrite(relay8, LOW);}
    }
    inputInt = 0;              \
}

