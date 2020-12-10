#include <Servo.h>
Servo servo;
#define BP 8
unsigned long previousMillis1 = 0;
const long interval1 = 1000;
int bouton = 8;
int etatbouton = 0;

void setup() {
  pinMode (bouton, INPUT);
  servo.attach(7);  // utilise la broche 7 pour le contrôle du servomoteur
  servo.write(0); // positionne le servomoteur à 0°
}

void loop() {
  etatbouton = digitalRead (bouton);

  if (etatbouton == HIGH) {

    unsigned long currentMillis = millis();

    if (currentMillis - previousMillis1 >= interval1) {

      previousMillis1 = currentMillis;

      servo.write(90);
    }


    if (currentMillis - previousMillis1 >= interval1) {

      previousMillis1 = currentMillis;

      servo.write(0);



    }



  }

}
