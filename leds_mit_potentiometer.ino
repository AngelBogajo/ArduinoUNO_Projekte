/* Projekt erstellt durch Angel Jesús Bogajo.
   4 LEDs, die durch ein Potentiometer gesteuert werden.
   Widerstandwert: 4x 220 Ohm in Reihe mit der Kathode.
   LEDs-Farbe: gelb, grün, rot, blau
   Board: Arduino UNO
*/

int POT = A1;     // Variabel "POT" für analog Pin A1
int wert;         // wert Potentiometer
int led_gruen = 2;
int led_gelb = 4;
int led_rot = 7;
int led_blau = 12;


void setup(){

    Serial.begin(9600);
    pinMode(POT,INPUT);

    pinMode(led_gruen, OUTPUT);
    pinMode(led_gelb, OUTPUT);
    pinMode(led_rot, OUTPUT);
    pinMode(led_blau, OUTPUT);

}


void loop(){

    wert = analogRead(POT);       // speichern die Potentiometerwerte in der Variablen "wert"

    if (wert ==0){
        Serial.println("Die LEDs sind aus. Der Wert ist: ");
        Serial.println(wert);
    }

    if (wert >0 && wert <255){
        digitalWrite(led_gruen, HIGH);
        Serial.println("Die LED leuchtet grün und der Wert ist : ");
        Serial.println(wert);
    }
    else{
        digitalWrite(led_gruen, LOW);
    }

    if (wert >255 && wert <510){
        digitalWrite(led_gelb, HIGH);
        Serial.println("Die LED leuchtet gelb und der Wert ist : ");
        Serial.println(wert);
    }
    else{
        digitalWrite(led_gelb, LOW);
    }

    if (wert >510 && wert <765){
        digitalWrite(led_rot, HIGH);
        Serial.println("Die LED leuchtet rot und der Wert ist : ");
        Serial.println(wert);
    }
    else{
        digitalWrite(led_rot, LOW);
    }

    if (wert >765 && wert <1024){
        digitalWrite(led_blau, HIGH);
        Serial.println("Die LED leuchtet blau und der Wert ist : ");
        Serial.println(wert);
    }
    else{
        digitalWrite(led_blau, LOW);
    }
  
}