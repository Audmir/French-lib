#include<Francais.h>

entier n = 10;

Syntaxe_francaise;
void setup() {
  // put your setup code here, to run once:
  Moniteur.reunitialise(9600);

  pour(entier i = 0; i < 12; i++) {
    entier n = i;
    changer(n) {
cas 0:
      Moniteur.affiche(n);
      Moniteur.afficheln(": zero");
      stop;
cas 1:
      Moniteur.affiche(n);
      Moniteur.afficheln(": un");
      stop;
cas 2:
      Moniteur.affiche(n);
      Moniteur.afficheln(": deux");
      stop;
cas 3:
      Moniteur.affiche(n);
      Moniteur.afficheln(": trois");
      stop;
cas 4:
      Moniteur.affiche(n);
      Moniteur.afficheln(": quatre");
      stop;
cas 5:
      Moniteur.affiche(n);
      Moniteur.afficheln(": cinq");
      stop;
cas 6:
      Moniteur.affiche(n);
      Moniteur.afficheln(": six");
      stop;
cas 7:
      Moniteur.affiche(n);
      Moniteur.afficheln(": sept");
      stop;
cas 8:
      Moniteur.affiche(n);
      Moniteur.afficheln(": huite");
      stop;
cas 9:
      Moniteur.affiche(n);
      Moniteur.afficheln(": neuf");
      stop;
cas 10:
      Moniteur.affiche(n);
      Moniteur.afficheln(": dix");
      stop;
    }
    si(n == 12) {
      stop;
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
