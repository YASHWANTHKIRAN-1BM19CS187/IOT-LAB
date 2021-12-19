int n ;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  n=analogRead(A0);
  Serial.println(n);
  delay(1000);
  if(n>150)
  {
    digitalWrite(9,LOW);
    delay(1000);
  }
  else 
  {
    digitalWrite(9,HIGH);
    Serial.println("Light Switched on");
    delay(2000);
  }
}
