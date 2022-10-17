int sensorValue = 0;
int light = 5;
int sensorState = 0;
int buzzer = 8;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
   pinMode(2, INPUT);
  Serial.begin(9600);
}
void loop()
{
   sensorState = digitalRead(2);
  // read the value from the sensor
  sensorValue = analogRead(A0);
  // print the sensor reading so you know its range
  Serial.println(sensorValue);
  delay(100); // Wait for 100 millisecond(s)
  if(sensorState == HIGH)
  {
   
  if(sensorValue<24)
  {
    digitalWrite(5,HIGH);
    digitalWrite(8,HIGH);
    delay(1000);
    digitalWrite(8,LOW);
    
  }
  else
  {
    digitalWrite(5,LOW);
    digitalWrite(8,HIGH);
    delay(1000);
    digitalWrite(8,LOW);
    
  }
  }
  else
  {
    ;
  }
    
}