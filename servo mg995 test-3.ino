#include <Servo.h>
#include <Stepper.h>
const int stepsPerRevolution = 200;

Servo servo1;  // create servo object to control a servo
Servo servo2;
Servo servo3;
Servo myservo;
// twelve servo objects can be created on most boards
Servo servo4;

int pos = 0;    // variable to store the servo position
int incomingByte = 0;   // for incoming serial data
int num;q
int steps=40;

Stepper myStepper(stepsPerRevolution, 2, 3, 4, 5);


void setup() {
  Serial.begin(9600);
  servo1.attach(8);  // attaches the servo on pin 9 to the servo object
  servo2.attach(9);
  servo3.attach(10);
  myservo.attach(11);
  servo4.attach(12);
   myStepper.setSpeed(20);

  num=0;
}


void loop() {
  // put your main code here, to run repeatedly:
  servo1.write(81);
  if(num%2==0) delay(520);
  else delay(200);
  servo1.write(86);
  
  // servo2.write(97);
  // // // // Move Upward
  // delay(1000);
  // servo2.write(98);
  // delay(1000);
  // servo2.write(99);
  // delay(1000);
  // servo2.write(86);

  // servo2.write(99);


  for (pos = 5; pos <= 90; pos += 5) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(100);  
                         // waits 15 ms for the servo to reach the position


                         
    // servo1.write(98);
    // delay(10);
  }


  for (int i=90;i>=45;i-=5){
    servo4.write(i);
    delay(100);
  }


    for (pos = 30; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }

  for (pos = 90; pos >= 30; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    
    if (pos>=55) delay(15);
    else delay(500);                      // waits 15 ms for the servo to reach the position
  }



  
  for (int i=45;i<=90;i+=5){
    servo4.write(i);
    delay(100);
  }

  
 
  for (pos = 90; pos >= 5; pos -= 5) { // goes from 180 degrees to 0 degrees
    servo2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(100);
    // if (pos>=55) delay(15);
    // else delay(500);                      // waits 15 ms for the servo to reach the position

    
    // servo1.write(98);
    // delay(10);
  }

 myStepper.step(steps);


  delay(500);



 for (int i=90;i>=0;i-=5){
    servo3.write(i);
    delay(1000);

    
    servo1.write(98);
    delay(10);
    servo1.write(86);
      // servo2.write(80);
      // delay(5);
      // servo2.write(86);

  }

  
  
 for (int i=0;i<=90;i+=5){
    servo3.write(i);
    delay(1000);

    servo1.write(98);
    delay(10);
    servo1.write(86);
      // servo2.write(80);
      // delay(5);
      // servo2.write(86);



    

  }

 

 
  for (pos = 0; pos <= 90; pos += 5) { // goes from 180 degrees to 0 degrees
    servo2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(100);
    // if (pos>=55) delay(15);
    // else delay(500);                      // waits 15 ms for the servo to reach the position

    
    // servo1.write(98);
    // delay(10);
  }



  

     for (pos = 30; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }

  delay(500);

  
  for (pos = 90; pos >= 5; pos -= 5) { // goes from 180 degrees to 0 degrees
    servo2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(100);
    // if (pos>=55) delay(15);
    // else delay(500);                      // waits 15 ms for the servo to reach the position

    
    // servo1.write(98);
    // delay(10);
  }
  
  myStepper.step(-steps);
  delay(500);


  
  for (int i=90;i>=45;i-=5){
    servo4.write(i);
    delay(100);
  }

  servo1.write(86);
  
  servo2.write(80);
  delay(3000);
  servo2.write(84);
  delay(400);
  servo2.write(85);
  delay(300);

  // // Move Downward

  servo2.write(86);

  delay(500);


  
  servo1.write(103);
  if(num%2==0) delay(1500);
  else delay(1000);
  servo1.write(86);
  

  //   for (pos = 5; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
  //   // in steps of 1 degree
  //   myservo.write(pos);              // tell servo to go to position in variable 'pos'
  //   delay(15);                       // waits 15 ms for the servo to reach the position
  // }
  // for (pos = 90; pos >= 5; pos -= 1) { // goes from 180 degrees to 0 degrees
  //   myservo.write(pos);              // tell servo to go to position in variable 'pos'
    
  //   if (pos>=55) delay(15);
  //   else delay(500);                      // waits 15 ms for the servo to reach the position
  // }

  


  // delay(1000);
  num++;






}
