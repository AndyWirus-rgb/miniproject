#include<OneWire.h>


OneWire ibutton(10);//numéro de la broche arduino

byte SerialNumber[]={0x7E,0xBA,0x14,0x01,0x00,0x00,0x00,0x0};//adresse du ibuttonbyte 
byte SerialNumber1[]={0x01,0x60,0xB2,0x74,0x01,0x00,0x00,0x3F};//adresse ibtutton
byte addr[8];


//byte tableau1[]=
//{
//0x7E,0xBA,0x14,0x01,0x00,0x00,0x00,0x0,
//0x01,0x60,0xB2,0x74,0x01,0x00,0x00,0x3F,
  
//};

void setup ()
{
  Serial.begin(300);
  Serial.println("lecture ibutton DS1990A:");
  Serial.print('lecture ibutton');
}

void loop(void)
{
  if (!ibutton.search(addr))
  {
 
   Serial.println("inserez votre clef");//recherche un ibutton
     return;
  }
  byte SN =true ;
  for (byte i=1;i<7;i++)
   {
    if (addr[i]!=SerialNumber[i-1]) SN= false;
    
   }
   if (SN) Serial.println("iButton OK");//l'adresse du ibutton est bonne
   else Serial.println("iButton PAS OK");//le ibutton n'est pas le bon
   delay(1000);

   
   
 
}
