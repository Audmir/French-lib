#include<arduino.h>
#include"Francais.h"



Francais::Francais() {
  this->nothing;
}
// reunitialiser le moniteur serie
void Francais::reunitialise(uint16_t baud) {
  Serial.begin(baud);
}
//---------------------Fonction d'affichage----------------------------------------
//afficher les strings
char Francais::affiche(char *message) {
  Serial.print(message);
}

char Francais::afficheln(char *message) {
  Serial.println(message);
}
//afficher les floats
float Francais::affiche(float message) {
  Serial.print(message);
}

float Francais::afficheln(float message) {
  Serial.println(message);
}
//afficher les ints
int Francais::affiche(int message) {
  Serial.print(message);
}

int Francais::afficheln(int message) {
  Serial.println(message);
}
int Francais::affiche(int message, int n) {
  Serial.print(message, n);
}

int Francais::afficheln(int message, int n) {
  Serial.println(message, n);
}
//------------------------------Fin du fonction d'affichage--------------------------
//------------------------------autres fonctions-------------------------------------
void Francais::arrose(void) {
  Serial.flush();
}

char Francais::lire(void) {
  char n = Serial.read();
  return n;
}

int Francais::disponible(void) {
  return Serial.available();
}


//------------------------------Fonctions mathematique---------------------------------
float racineCarre(float nombre) {
  float valeur = sqrt(nombre);
  return valeur;
}

float logarithme(float nombre) {
  float nn = (log(nombre) / 2);
  return nn;
}

float exeponentiel(float n) {
  float s = exp(n);
  return n;
}

int exposant(int Exp, int s) {
  int n = pow(Exp, s);
  return n;
}

float cosinus(float n) {
  float s = cos(n);
  return s;
}

float sinus(float n) {
  float s = sin(n);
  return s;
}

float tangente(float n) {
  float s = tan(n);
  return s;
}

int factoriel(int n) {
  for (int i = n; i >= 1; i--) {
    Serial.print(i);
    Serial.print('\t');
  }
  Serial.print('\n');
  Serial.println("Tu dois multiplier ces nombre fournis...");
}

float sommes(float n, float nn) {
  float s = n + nn;
  return s;
}

float produit(float n, float nn) {
  float s = n * nn;
  return s;
}

float difference(float n, float nn) {
  float s = n - nn;
  return s;
}

float reste(float n, float nn) {
  float s = n / nn;
  return s;
}

int modulo(int n, int nn) {
  char* s = (((n % nn) == 0) ? "paire" : "impaire");
  Serial.println(s);
}
