
#define relais 2 // affection du relais a la broche 2

void setup() 
{
 pinMode(relais,OUTPUT);//On définit le relais en sortie 

}

void loop() 
{
 digitalWrite(relais,LOW);//on met les relais à l'état 0
 delay(1000);

 digitalWrite(relais,HIGH);//on met le relais a l'état 1
 delay(1000);

}
