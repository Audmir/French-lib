#include<Francais.h>
entier n = 1;

Syntaxe_francaise;
void reunitial() {
  // put your setup code here, to run once:
  pinMode(13, SORTANT);
  Moniteur.reunitialise(9600);
  Moniteur.afficheln("Bonjour");
  Moniteur.lire();   //lire le signal ou le message du moniteur present sur bronches tx et rx exemple cas d'utilisation module bluetooth


  si(n == 1) {
    Moniteur.afficheln(racineCarre(2));
    Moniteur.afficheln(logarithme(200));
    Moniteur.afficheln(exeponentiel(100));
    Moniteur.afficheln(exposant(10, 2));
    Moniteur.afficheln(sinus(45));
    Moniteur.afficheln(cosinus(45));
    Moniteur.afficheln(tangente(45));
    // Moniteur.affiche(factoriel(10));
    Moniteur.afficheln(modulo(7, PARITE));
    Moniteur.afficheln(sommes(10, 2));

    Moniteur.afficheln(1023, HEXADECIMALE);
    Moniteur.afficheln(entier(taille_de(entier)));

  }
}

void boucle() {
  // put your main code here, to run repeatedly:
  si (Moniteur.disponible() > 0) {
    Moniteur.affiche("Bien");
  }
}
