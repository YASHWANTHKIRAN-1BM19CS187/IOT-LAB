int rpin =12;
int ypin =11;
int gpin =10;
void setup() {
  // put your setup code here, to run once:
  pinMode(rpin,OUTPUT);
  pinMode(ypin,OUTPUT);
  pinMode(gpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(rpin,HIGH);
digitalWrite(ypin,LOW);
digitalWrite(gpin,LOW);
delay(5000);
digitalWrite(rpin,LOW);
digitalWrite(ypin,HIGH);
digitalWrite(gpin,LOW);
delay(1000);
digitalWrite(rpin,LOW);
digitalWrite(ypin,LOW);
digitalWrite(gpin,HIGH);
delay(5000);
}
