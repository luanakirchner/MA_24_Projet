#include <stdio.h>
#include <stdlib.h>

void calcul(int *Choix, float *N1, float *N2, float *resultad, float *resultad_inverse);


int main(){

int vrai = 1;

    while(vrai){

        //Probleme avec les doubles et pointeur.
        float premierN1 = 0;
        float deuxiemeN2 = 0;
        int choix=0;
        float *pointeurpremierN1 = NULL;
        float *pointeurpremierN2 = NULL;
        float resultad = 0;
        float resultad_inverse = 0;
        int contineur = 0;



        printf("\nEntrez un numero ");
        scanf("%f", &premierN1);
        printf("\nEntrez un deuxieme numero ");
        scanf("%f",&deuxiemeN2);

        printf("\nQuelle option de calcul voulez vous?\n");
        printf("1 - Multiplication\n");
        printf("2 - Addition\n");
        printf("3 - Soustration\n");
        printf("4 - Division\n");
        scanf("%d" ,&choix);


        pointeurpremierN1 = &premierN1; // Recuperer les valeurs entree par l'utilisateur dans un pointeur
        pointeurpremierN2 = &deuxiemeN2;


        printf("Vous avez entree : %.2f et %.2f \n", *pointeurpremierN1, *pointeurpremierN2); // Certifier que les pointeurs a les bonnes valeurs

        calcul(&choix, &premierN1, &deuxiemeN2, &resultad ,&resultad_inverse);
        printf("\nLe resultat de l'operation est :%.2f\n", resultad);
        printf("Le resultat de l'operation a l'inverse est :%.2f\n", resultad_inverse);

        printf("\nVoulez vous continuer?\n");
        printf("1 - OUI\n");
        printf("2 - NON\n");
        scanf("%d", &contineur);

        if (contineur==1){
            vrai=1;
        }
        else{
            vrai = 0;
        }
    }
}

void calcul(int *Choix, float *N1, float *N2, float *resultad, float *resultad_inverse){

//printf("\n%d %f %f %f\n", *Choix, *N1, *N2, *resultad); // Certifier que les pointeurs a les bonnes valeurs

    switch(*Choix){

        case 1: *resultad = *N1 * *N2;
                *resultad_inverse = *N2 * *N1;
                break;

        case 2: *resultad = *N1 + *N2;
                *resultad_inverse = *N2 + *N1;
                break;

        case 3: *resultad = *N1 - *N2;
                *resultad_inverse = *N2 - *N1;
                break;
        case 4: *resultad = *N1 / *N2;
                *resultad_inverse = *N2 / *N1;
                break;
        }

}
