#define MQ2_PIN A0 
#define BUZZER_PIN 7
#define RELAY_PIN 8
int smokeLevel = 0;
const int threshold = 100; // Adjust based on environment
void setup() { 
Serial.begin(9600); 
pinMode(MQ2_PIN, INPUT);
pinMode(BUZZER_PIN, OUTPUT);
pinMode(RELAY_PIN, OUTPUT);
//digitalWrite(BUZZER_PIN, LOW);
//digitalWrite(RELAY_PIN, LOW);
}
void loop() {
smokeLevel = analogRead(MQ2_PIN); \
Serial.print("Smoke Level: "); 
Serial.println(smokeLevel);
if (smokeLevel > threshold) { 
  digitalWrite(BUZZER_PIN, HIGH); // Activate buzzer digitalWrite(RELAY_PIN, HIGH); // Activate relay
  digitalWrite(RELAY_PIN, HIGH);
} else {
digitalWrite(BUZZER_PIN, LOW); 
digitalWrite(RELAY_PIN, LOW);// Deactivate buzzer digitalWrite(RELAY_PIN, LOW); // Deactivate relay
}
delay(500);
}