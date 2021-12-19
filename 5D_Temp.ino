int vin=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  vin=analogRead(A0);
  float mv = (vin/1024.0)*5000;
  float c = mv/10;
  Serial.println(c);
  delay(1000);
}
