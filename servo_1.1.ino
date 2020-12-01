#include <Servo.h>


Servo servo;  // crée l’objet pour contrôler le servomoteur
 
void setup()
{
  servo.attach(7);  // utilise la broche 9 pour le contrôle du servomoteur
  servo.write(0); // positionne le servomoteur à 0°
}
 
 
void loop()
{
  servo.write(0);
  delay(500);
  servo.write(180);
  delay(500);
 
}
