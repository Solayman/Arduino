#include<Servo.h>
Servo servo_test;        
                

 
void setup() 
{ 
  servo_test.attach(7);      
} 
  
void loop() 
{ 
                           
    servo_test.write(90);                
               
  
 
  delay(1000);

  servo_test.write(0);                
               
  
 
  delay(1000);
  
  
}

                  
