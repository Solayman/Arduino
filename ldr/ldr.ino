int sensorPin = A0; 
int light=8;


int sensorValue = 0; // 
void setup() {
Serial.begin(9600); 
pinMode(light,OUTPUT);
}
void loop() {
sensorValue = analogRead(sensorPin); 
Serial.println(sensorValue);

if(sensorValue<300){
  
  digitalWrite(light,HIGH);
  delay(5000);
//  digitalWrite(light,LOW);
//  delay(1000);
  
  }
  else{
    digitalWrite(light,LOW);
    
    
    }

delay(1000);

}
