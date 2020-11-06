#include <stdio.h>

int main() {
    int choixniveaux=0;
    int temporisation=0;
    while(temporisation!=-1)
    {
    printf("Veuillez choisir le niveau\n");
    printf("1-facile 10 secondes\n");
    printf("2-moyen 5 secondes\n");
    printf("3-difficile 2 secondes\n");
    printf("4-Exit\n");
    scanf("%d",&choixniveaux);
    switch (choixniveaux)
    {
        case 1:
            temporisation = 10;

            break;
        case 2:
            temporisation = 5;
            break;
        case 3:
            temporisation = 2;
            break;
        case 4:
            temporisation = -1;
            break;
    }
        printf("%d\n",temporisation);
    }

    return 0;
    }


