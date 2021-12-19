int value ,count=1;
int pina=13;
int pinb=2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   pinMode(pina,OUTPUT);
   pinMode(pinb,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = digitalRead(pinb);
  if(value == HIGH)
  {
    digitalWrite(pina,HIGH);
    delay(1000);
    Serial.print("Count = ");
    Serial.print(count++);
  }
  else
  digitalWrite(pina,LOW);
  
}

