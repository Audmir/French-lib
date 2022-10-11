#ifndef Francais_h
#define Francais_h
#define si if
#define sinon else
#define cas case
#define changer switch
#define Syntaxe_francaise Francais Moniteur
#define vrai true
#define faux false
#define pour for
#define entier int
#define decimale float
#define DECIMALE DEC
#define OCTALE OCT
#define HEXADECIMALE HEX
#define BINAIRE BIN
#define booleen boolean
#define Caractere String
#define NumCaract char
#define PARITE 2
#define numeriqueEcrire digitalWrite
#define numeriqueLire digitalRead
#define ALLUMEE HIGH
#define ETEINTE LOW
#define SORTANT OUTPUT
#define ENTRANT INPUT
#define delais delay
#define analogiqueEcrire analogWrite
#define analogiqueLire analogRead
#define bitLire bitRead
#define taille_de sizeof
#define taille size
#define structre struct
#define enumeration enum
#define type_de_definition typedef
#define bite byte
#define reunitial setup
#define boucle loop
#define stop break


//fonctions mathematique
float racineCarre(float nombre);
float logarithme(float nombre);
float exeponentiel(float n);
int exposant(int Exp, int s);
float cosinus(float n);
float sinus(float n);
float tangente(float n);
int factoriel(int n);
float sommes(float n, float nn);
float produit(float n, float nn);
float difference(float n, float nn);
float reste(float n, float nn);
int modulo(int n, int nn);



class Francais {
  public:
    Francais(void);

    //fonction String
    char affiche(char *message);
    char afficheln(char *message);

    //fonction float
    float affiche(float message);
    float afficheln(float message);

    //fonction int
    int affiche(int message);
    int afficheln(int message);

    int affiche(int message, int n);
    int afficheln(int message, int n);
    //autres fonction necessaire
    void reunitialise(uint16_t baud = NULL);
    void arrose(void);
    char lire(void);
    int disponible(void);



  private:
    uint8_t nothing;

};


#endif
