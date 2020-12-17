#include <Servo.h>

int bouton = 8;
int nb = 9;
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
  Serial.begin(9600);

  // Attache le servomoteur à la broche 2
  monServomoteur.attach(7);

}

void loop()
{
  etatbouton = digitalRead (bouton);

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillisouv >= intervalouv) {

    previousMillisouv = currentMillis;

    if (etatbouton == HIGH) {
      ouverture();
      nb = nb - 1;
      Serial.println(nb);

    }
  }
  else {
    fermeture();
  }
}


void ouverture ()
{


  monServomoteur.write(90);
}

void fermeture ()
{
  monServomoteur.write(0);
}
