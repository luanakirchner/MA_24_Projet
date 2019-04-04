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
    printf("L'adresse de la variable numero 1: %d\n", pointeur); //aficher l'adresse où la varible est stoque sur la memoire RAM

    Calcule_avec_pointeru(pointeur, &numero2); //Deux maniere de mettre les valeurs des pointeurs dans une focntion;
    printf("Numero 2 - numero 1 = %d\n Numero 1 * Numero 2 (apres sa modification): %d \n", numero2, *pointeur); //Affiche les valeurs des pointers aprés son calcule.

    mini_calculatrice();
}

void Calcule_avec_pointeru(int *pointeurN1, int *pointeurN2){

*pointeurN2 = *pointeurN2 - *pointeurN1; //resultat 8
*pointeurN1 = *pointeurN1 * *pointeurN2; //resultat 16

}

void mini_calculatrice(){

int premierN1 = 0;
int deuxiemeN2 = 0;

int *pointeurpremiereN1 = NULL;
int *pointeurpremiereN2 = NULL;

printf("\nEntrez un numero ");
scanf("%d", &premierN1);
printf("\nEntrez un deuxieme numero ");
scanf("%d",&deuxiemeN2);

pointeurpremiereN1 = &premierN1; // Recuperer les valeurs entrer par l'utilisateur dans un pointeur
pointeurpremiereN2 = &deuxiemeN2;

printf("Vous avez entree : %d et %d \n", *pointeurpremiereN1, *pointeurpremiereN2); // Certifier que les pointeurs a les bonnes valeurs


}
