

int Gas_analog = A0;    // used for ESP8266
int Gas_digital = D1;   // used for ESP8266



void setup() {
  Serial.begin(115200);
  delay(10000);
  Serial.print("warmed up");    
  pinMode(Gas_digital, INPUT);
}

void loop() {
  int gassensorAnalog = analogRead(Gas_analog);
  int gassensorDigital = digitalRead(Gas_digital);

  Serial.print("Gas Sensor: ");
  Serial.print(gassensorAnalog);
  Serial.print("\t");
  Serial.print("Gas Class: ");
  Serial.print(gassensorDigital);
  Serial.print("\t");
  Serial.print("\t");
  if (gassensorAnalog > 180) {
    Serial.println("Alcohol");
  }
  else {
    Serial.println("No Gas");
  }
  delay(100);
}