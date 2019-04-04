#include <stdio.h>
#include <stdlib.h>

void Calcule_avec_pointeru(int *pointeurN1, int *pointeurN2);

int main()
{
    int numero1 = 2;
    int numero2=10;

    int *pointeur = &numero1; //Declarer un pointeur avec la valeurs d'une variable

    printf("valeur du numero 2: %d\n", numero2);
    printf("Valeur du numero 1: %d\n", *pointeur);
    printf("L'adresse de la variable numero 1: %d\n", pointeur); //aficher l'adresse o� la varible est stoque sur la memoire RAM

    Calcule_avec_pointeru(pointeur, &numero2); //Deux maniere de mettre les valeurs des pointeurs dans une focntion;
    printf("Numero 2 - numero 1 = %d\n Numero 1 * Numero 2 (apres sa modification): %d \n", numero2, *pointeur); //Affiche les valeurs des pointers apr�s son calcule.

    mini_calculatrice();
}

void Calcule_avec_pointeru(int *pointeurN1, int *pointeurN2){

*pointeurN2 = *pointeurN2 - *pointeurN1; //resultat 8
*pointeurN1 = *pointeurN1 * *pointeurN2; //resultat 16

}

void mini_calculatrice(){

int premierN1 = 0;
int deuxiemeN2 = 0;
int choix=0;

int *pointeurpremiereN1 = NULL;
int *pointeurpremiereN2 = NULL;
int resultad = 0;


printf("\nEntrez un numero ");
scanf("%d", &premierN1);
printf("\nEntrez un deuxieme numero ");
scanf("%d",&deuxiemeN2);

printf("\nQuelle option de calcul voulez vous?\n");
printf("1 - Multiplication\n");
printf("2 - Addition\n");
printf("3 - Soustration\n");
scanf("%d" ,&choix);


pointeurpremierN1 = &premierN1; // Recuperer les valeurs entree par l'utilisateur dans un pointeur
pointeurpremierN2 = &deuxiemeN2;


printf("Vous avez entree : %d et %d \n", *pointeurpremiereN1, *pointeurpremiereN2); // Certifier que les pointeurs a les bonnes valeurs

calcul(&choix, &premierN1, &deuxiemeN2, &resultad);
printf("\n%d", resultad);


}

void calcul(int *Choix, int *N1, int *N2, int *resultad){

printf("\n%d %d %d %d\n", *Choix, *N1, *N2, *resultad); // Certifier que les pointeurs a les bonnes valeurs

switch(*Choix){
case 1: *resultad = *N1 * *N2;
        break;

case 2: *resultad = *N1 + *N2;
        break;

case 3: *resultad = *N1 - *N2;
        break;

}

}
