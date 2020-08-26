/* Projekt erstellt durch Angel Jesús Bogajo.
   Eine LED, die jede Sekunde blinkt.
   Widerstandwert: 220 Ohm in Reihe mit der Kathode.
   LED-Farbe: Gelb
   Board: Arduino UNO
*/

int LED = 8;     // Variabel "LED" für digitalen Pin 8

void setup(){
  pinMode(LED,OUTPUT);    // Led ist ein Ausgang
  digitalWrite(LED,LOW);  // Led startet aus
}


void loop(){
  digitalWrite(LED,HIGH);  // Led an
  delay(1000);             // bleibt 1 Sekunde an
  digitalWrite(LED,LOW);   // Led aus
  delay(1000);             // bleibt 1 Sekunde aus
}