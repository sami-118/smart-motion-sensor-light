int relay = 8;
int pir = 7;

void setup() {
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
  pinMode(pir, INPUT);
}

void loop() {
  if (digitalRead(pir) == LOW) { // Reversed logic
    Serial.println("Motion detected - Turning ON light");
    digitalWrite(relay, LOW);  // If relay is active-low
  } 
  else {
    Serial.println("No motion - Turning OFF light");
    digitalWrite(relay, HIGH); // If relay is active-low
  }

  delay(500); // Small delay for stability
}
