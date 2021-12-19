#include<Servo.h>
Servo myservo;
int pos=0;
int sensorPin=A5;
int sensorvalue=0;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  pinMode(sensorPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  sensorvalue=analogRead(sensorPin);
  Serial.println(sensorvalue);
 if(sensorvalue>700)
 {
  // put your main code here, to run repeatedly:
  for(pos=0;pos<=180;pos++)
  {
    myservo.write(pos);
    delay(15);
  }
   for(pos=180;pos>=0;pos--)
  {
    myservo.write(pos);
    delay(15);
  }
 }
  delay(1000);
}
