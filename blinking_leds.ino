int i = 300;




void setup() {            // initialize digital pin LED_BUILTIN as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {

kitt();
alle_blinken();

for (int y=1; y<3; y++){
anna();
}

alle_blinken();

}


void anna() {

int phase = 1;

for (int g = 1; g < 5; g++){
  
  digitalWrite(2, LOW);   
  digitalWrite(3, LOW);    
  digitalWrite(4, LOW);    
  digitalWrite(5, LOW);   
  digitalWrite(6, LOW);    

if (g == 1){digitalWrite(4, HIGH);}
if (g == 2){digitalWrite(3, HIGH); digitalWrite(5, HIGH);}
if (g == 3){digitalWrite(2, HIGH); digitalWrite(6, HIGH);}
if (g == 4){digitalWrite(3, HIGH); digitalWrite(5, HIGH);}

delay(i*1.5);  

}
  
}


void kitt() {

int ledNr = 2;

int durchgang = 1;

for(int c=1; c < 18; c++){

  digitalWrite(2, LOW);   
  digitalWrite(3, LOW);    
  digitalWrite(4, LOW);    
  digitalWrite(5, LOW);    
  digitalWrite(6, LOW);    

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

}



void alle_blinken() {

for(int x=1; x<4; x++){

  digitalWrite(2, LOW);   
  digitalWrite(3, LOW);   
  digitalWrite(4, LOW);    
  digitalWrite(5, LOW);   
  digitalWrite(6, LOW);    
  
  delay(i*2);

  digitalWrite(2, HIGH);   
  digitalWrite(3, HIGH);   
  digitalWrite(4, HIGH);   
  digitalWrite(5, HIGH);     
  digitalWrite(6, HIGH);

  delay(i*2);
    
}

}
  



