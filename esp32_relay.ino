const int relay = 25;
const int relay_led = 26;
 void setup() {
  Serial.begin(115200);
    pinMode(relay_led, OUTPUT);
 }

 void loop() {
  digitalWrite(relay_led, HIGH);
  Serial.println("Current Flowing");
  delay(5000);
  digitalWrite(relay_led, LOW);
  Serial.println("Current not Flowing");
  delay(5000);
 }
