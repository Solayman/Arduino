#include <LiquidCrystal.h>;

LiquidCrystal lcd(3,4,5,6,7,8);

const int trigPin=9;
const int echoPin=10;



long duration;
int distance; 


void setup() {
  lcd.begin (16,2);
 
  pinMode (trigPin, OUTPUT);
  pinMode (echoPin, INPUT);
  Serial.begin (9600);

}

void loop() {

  
  digitalWrite (trigPin,LOW);
  delayMicroseconds (2);

  digitalWrite (trigPin, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin, LOW);

  duration = pulseIn (echoPin, HIGH);
  distance = duration/58   ;

  Serial.print ("Distance: ");
  Serial.print (distance);
  Serial.println (" cm");
  delay (120);

  lcd.setCursor(0,0); 
  lcd.print("Distance: "); 
  lcd.print(distance); 
  lcd.print("  cm");
  
 


 
  

}
