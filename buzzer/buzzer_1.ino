#define buzzer 10


void setup() {
pinMode(buzzer,OUTPUT);

}

void loop() {
  
digitalWrite(buzzer,HIGH);
delay(1000);
digitalWrite(buzzer,LOW);
delay(1000);



tone(buzzer, 1000);
delay(2000);

noTone(buzzer) ;
delay(1000);


tone(buzzer, 500);
delay(2000);

noTone(buzzer) ;
delay(1000);

tone(buzzer, 100);
delay(2000);

noTone(buzzer) ;
delay(1000);



}
