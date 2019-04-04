#include <stdio.h>
#include <stdlib.h>

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
}

void Calcule_avec_pointeru(int *pointeurN1, int *pointeurN2){

*pointeurN2 = *pointeurN2 - *pointeurN1; //resultat 8
*pointeurN1 = *pointeurN1 * *pointeurN2; //resultat 16

}
