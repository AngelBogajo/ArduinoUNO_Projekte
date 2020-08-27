/* Projekt erstellt durch Angel Jesús Bogajo.
   LED lauflicht - Knight Ryder.
   Widerstandwert: 7x 220 Ohm in Reihe mit der Kathode.
   LED-Farbe: 7x rote Leds
   Board: Arduino UNO
*/

int i;                          // Variable zur Iteration der Schleife for


void setup() {

    delay(3000);                // Warten 3 Sekunden, bevor das Programm starten
    for (i=2; i<=8; i++){       // Arduino Pins von 2 bis 7
    pinMode (i,OUTPUT);         // LEDs wie Output
    digitalWrite (i, LOW);      // LEDs aus

}
}
void loop(){
    
for (i = 2; i <=8; i++){          // Strartsequenz von Anfang bis Ende (2 - 8)
    digitalWrite(i,HIGH);         // LED an
    delay(40);                    // warten
    digitalWrite(i,LOW);          // LED aus
    delay(40);                    // warten
}

for (i = 8; i >=2; i--){          // Startsequenz von Ende bis Anfang (8 - 2)
    digitalWrite(i,HIGH);
    delay(40);
    digitalWrite(i,LOW);
    delay(20);
}
}