int i = 150;

int ledNr = 2;

int durchgang = 1;


void setup() {            // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  digitalWrite(2, LOW);   // turn the LED offby making the voltage LOW
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW

  digitalWrite(ledNr, HIGH);

  delay(i);                       // wait for i millisecons

if (ledNr == 6) { durchgang = 2;}


 if (durchgang == 1) {

    if (ledNr < 6) {
      ledNr = ledNr + 1;
    } 
 }



if (durchgang == 2) {

    if (ledNr > 1) {
      ledNr = ledNr - 1;
    }
  }

if (ledNr == 2) { durchgang = 1; }



}

