#include<Francais.h>

Syntaxe_francaise;
void reunitial() {
  // put your setup code here, to run once:
  pinMode(13, SORTANT);
}

void boucle() {
  // put your main code here, to run repeatedly:
  numeriqueEcrire(13, ALLUMEE);
  delais(100);
  numeriqueEcrire(13, ETEINTE);
  delais(100);
}
