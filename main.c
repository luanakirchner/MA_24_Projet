#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 10;
    int *pointeur = &age;

    printf("%d\n", *pointeur);
    printf("%d\n", pointeur);
    tripleAge(pointeur);
    printf("%d\n", *pointeur);
}

void tripleAge(int *pointeurSurAge){

*pointeurSurAge *=3;

}
