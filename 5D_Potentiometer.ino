int sensorValue;
int outputValue;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue=analogRead(A0);
  outputValue=map(sensorValue,0,1023,0,255);
  analogWrite(9,outputValue);
  Serial.print("Sensor Value = ");
  Serial.println(sensorValue);
  Serial.print("Output Value = ");
  Serial.println(outputValue);
  delay(2000);
}
