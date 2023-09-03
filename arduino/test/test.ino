void setup() {
    Serial.begin(115200);
    pinMode(A0, INPUT);
}

void loop() {
    int cdsdata = analogRead(A0);
    Serial.print("CDS: ");
    Serial.println(cdsdata);
    delay(500);
}