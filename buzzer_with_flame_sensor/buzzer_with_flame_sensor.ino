int buzzer = 8;

int flame_sensor = 4;
int flame_detected;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);

  pinMode(flame_sensor, INPUT);
}

void loop()
{
  flame_detected = digitalRead(flame_sensor);
  if (flame_detected == 0)
  {
    Serial.println("Flame detected...!stay away");
    digitalWrite(buzzer, HIGH);
 
    delay(1000);
digitalWrite(buzzer, LOW);

  }
  else
  {
    Serial.println("No flame detected. stay cool");
    digitalWrite(buzzer, LOW);
   
  }
  delay(1000);
}
