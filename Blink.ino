/*
 Titre : blink+
 faire clignoter la LED branchée sur la patte 13 de la carte ARDUINO à une fréquence de 0,5Hz
 */

// Déclaration de variables globales

int led=13; // numéro de la pin ou est connectée la led 13

// déclaration des constantes

// setup

void setup() 
{
  pinMode(led,OUTPUT); // configure la pin 13 en sortie
}

// programme

void loop() 
{
  digitalWrite(led,HIGH); // allume la led
  delay(1000); // attendre 1s
  digitalWrite(led,LOW); // éteindre la led
}
