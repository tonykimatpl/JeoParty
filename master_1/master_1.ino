int buzzer=A1; 
const int button1=1;   //team 1 button 
bool buttonstate=0; 
const int button2=A5;   //team 2 button 
bool buttonstate2=0; 
const int button3=10;    //team 3 button 
bool buttonstate3=0; 
const int button4=7;   //team 4 button 
bool buttonstate4=0; 
const int reset=5;   //reset button 
bool buttonstate5=0; 
int led1 = 6;
int led2 = 9;
int led3 = 8;
int led4 = A0; 
 
void setup() { 
pinMode(buzzer,OUTPUT); 
pinMode(button1,INPUT); 
pinMode(button2,INPUT); 
pinMode(button3,INPUT); 
pinMode(button4,INPUT); 
pinMode(reset,INPUT); 
} 
 
void loop() { 
buttonstate = digitalRead(button1); 
buttonstate2 = digitalRead(button2); 
buttonstate3 = digitalRead(button3); 
buttonstate4 = digitalRead(button4); 
buttonstate5 = digitalRead(reset); 
while ((buttonstate == HIGH)||(buttonstate2 == HIGH)||(buttonstate3 == HIGH)||(buttonstate4 == HIGH)){ 
if (buttonstate == HIGH){
  digitalWrite(led1,HIGH);
  tone(buzzer, 400, 1000); 
  delay(8000);
  digitalWrite(led1,LOW);
  break;
}
else if(buttonstate2 == HIGH){
  digitalWrite(led2,HIGH);
  tone(buzzer, 400, 1000); 
  delay(8000);
  digitalWrite(led2,LOW);
  break;
}
else if(buttonstate3 == HIGH){
  digitalWrite(led3,HIGH);
  tone(buzzer, 400, 1000); 
  delay(8000);
  digitalWrite(led3,LOW);
  break;
}
else if(buttonstate4 == HIGH){
  digitalWrite(led4,HIGH);
  tone(buzzer, 400, 1000); 
  delay(8000);
  digitalWrite(led4,LOW);
  break;
}
 break;
} 
}
