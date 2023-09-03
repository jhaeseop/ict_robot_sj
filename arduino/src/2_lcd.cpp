
int GREEN = 11;
int RED = 10;
int BLUE = 9;

void setup() {
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);

}

void loop() {
    for(int i=0;i<256;i++) {
        analogWrite(GREEN, i);
        analogWrite(RED, 0);
        analogWrite(BLUE, 0);
        delay(5);
    }
    for(int i=0;i<256;i++) {
        analogWrite(GREEN, 0);
        analogWrite(RED, i);
        analogWrite(BLUE, 0);
        delay(5);
    }
    for(int i=0;i<256;i++) {
        analogWrite(GREEN, 0);
        analogWrite(RED, 0);
        analogWrite(BLUE, i);
        delay(5);
    }
}