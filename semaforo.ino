 int ledVERMELHO= 4;
 int ledAMARELO = 5;
 int ledVERDE = 6;

void setup() {

pinMode(ledVERMELHO, OUTPUT);
pinMode(ledAMARELO, OUTPUT);
pinMode(ledVERDE, OUTPUT);
 
}

void loop() {

digitalWrite(ledVERMELHO, HIGH);
delay(1000);
digitalWrite(ledVERMELHO, LOW);
ledVERMELHO++;

if(ledVERMELHO > 6) {
while(ledVERMELHO > 3) {
digitalWrite(ledVERMELHO, HIGH);
delay(1000);
digitalWrite(ledVERMELHO, LOW);
ledVERMELHO--;

}
}
}
