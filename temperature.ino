int ASignal = A6;
int val=0;
int ledPins[] = {11,9,7,5,3,4,6,8,10};  
 
void setup() {
    Serial.begin(9600);
    pinMode(ASignal, INPUT);     
pinMode(ledPins[11,9,7,5,3,4,6,8,10], OUTPUT);   
digitalWrite(ledPins[11,9,7,5,3,4,6,8,10],LOW); 
}
 
void loop() {
 
int sensorValue = analogRead(ASignal);   
   
if(analogRead(ASignal) >=900)
{ 
   digitalWrite(11, HIGH);  
   delay(10);
   digitalWrite(11, LOW);  
   delay(10);
  }
 
   if(analogRead(ASignal) <900  && analogRead(ASignal) >=807 )
{ 
   digitalWrite(9, HIGH);
  delay(10);
   digitalWrite(9, LOW);  
   delay(10);  
  }
 
   if(analogRead(ASignal) <807  && analogRead(ASignal) >=714 )
{ 
   digitalWrite(7, HIGH);  
    delay(10);
   digitalWrite(7, LOW);  
   delay(10);
  }
 
   if(analogRead(ASignal) <714  && analogRead(ASignal) >=621 )
{ 
   digitalWrite(5, HIGH);  
    delay(10);
   digitalWrite(5, LOW);  
   delay(10);
  }
 
   if(analogRead(ASignal) <621  && analogRead(ASignal) >=528 )
{ 
   digitalWrite(3, HIGH);  
    delay(10);
   digitalWrite(3, LOW);  
   delay(10);
  }
 
   if(analogRead(ASignal) <528  && analogRead(ASignal) >=435 )
{ 
   digitalWrite(4, HIGH);  
    delay(10);
   digitalWrite(4, LOW);  
   delay(10);
  }
 
   if(analogRead(ASignal) <435  && analogRead(ASignal) >=342 )
{ 
   digitalWrite(6, HIGH);  
    delay(10);
   digitalWrite(6, LOW);  
   delay(10);
  }
 
   if(analogRead(ASignal) <342  && analogRead(ASignal) >=249 )
{ 
   digitalWrite(8, HIGH);  
    delay(10);
   digitalWrite(8, LOW);  
   delay(10);
  }
 
   if(analogRead(ASignal) <249 )
{ 
   digitalWrite(10, HIGH);  
    delay(10);
   digitalWrite(10, LOW);  
   delay(10);
  }
 
}

