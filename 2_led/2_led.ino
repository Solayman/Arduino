#define led1 8
#define led2 9

void setup() {

pinMode(led1,OUTPUT);

pinMode(led2,OUTPUT);

}

void loop() {
    //FOR FIRST LED
  
  digitalWrite(led1,HIGH);
  delay(2000);
    digitalWrite(led1,LOW);
  delay(3000);


  //FOR SECOND LED
  digitalWrite(led2,HIGH);
  delay(2000);
    digitalWrite(led2,LOW);
  delay(3000);
  
  


}
