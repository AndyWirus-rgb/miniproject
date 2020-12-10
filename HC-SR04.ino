#include <HCSR04.h>

#define trigPin 4 //définition des broches du capteur
#define echoPin 3 //définition des broches du capteur

UltraSonicDistanceSensor distanceSensor(trigPin, echoPin); //initialisation du capteur avec les broches utilisées.

void setup() 
{
  Serial.begin(9600); //initialisation du port série à 9600 band pour afficher les valeurs mesurées par le capteur.
}

void loop() 
{

  Serial.println(distanceSensor.measureDistanceCm()); //toutes les 500 millisecondes nous faisons une mesure et nous affichons la distance en centimètre sur le port série.
  delay(500);
  

}
