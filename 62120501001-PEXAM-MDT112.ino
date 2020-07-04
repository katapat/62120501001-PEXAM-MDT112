const int buzzer = 8; 

void setup(){
  pinMode(buzzer, OUTPUT); 
}

void loop(){
  tone(8,600,400);     
  noTone(buzzer);           
}