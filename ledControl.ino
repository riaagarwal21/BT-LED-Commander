char incomingValue = 0; 
int led= 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  //put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    incomingValue = Serial.read();
    Serial.print(incomingValue);
    Serial.print("\n");
    if (incomingValue == '1')
      digitalWrite(led,HIGH);
    else if (incomingValue == '0')
      digitalWrite(led,LOW);
  }
}
