int x=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0 )
  {
    x = Serial.read();
    if(x == 'A')
    {
      digitalWrite(13,HIGH);
      delay(1000);
      Serial.print("Correct");
      Serial.print(x,DEC);
    }
    digitalWrite(13,LOW);
 }
}
