#include <Servo.h>

int bouton = 8;

int etatbouton = 0;

unsigned long previousMillisouv = 0;

const long intervalouv = 2000;

unsigned long previousMillisferm = 0;

const long intervalferm = 100;

Servo monServomoteur;

void setup()
{
  // Bouton poussoir 1
  pinMode(bouton, INPUT);


  // Attache le servomoteur à la broche 2
  monServomoteur.attach(7);

}

void loop()
{
  etatbouton = digitalRead (bouton);


  if (etatbouton == HIGH) {
    ouverture();
  }
  else {
    fermeture();
  }
}


void ouverture ()
{
      unsigned long currentMillis = millis();

    if (currentMillis - previousMillisouv >= intervalouv) {

      previousMillisouv = currentMillis;
      
  monServomoteur.write(90);
  }
}

void fermeture ()
{
    unsigned long currentMillis = millis();

    if (currentMillis - previousMillisferm >= intervalferm) {

      previousMillisferm = currentMillis;
      
  monServomoteur.write(0);
  }

}
