#include <stdio.h>
#include <stdlib.h>

#define color(param) printf("\033[%sm",param)

void clearConsole(char*);   //Affichage en tete (char* le titre a afficher)
void accueil();

int main() {
    accueil();
    return 0;
}

void clearConsole(char* dico) {
    system("cls");
    color("35");
    printf("Dictionnaire : %s\n", dico);
    printf("---------------");

    int size = my_strlen(dico);
    int i;
    for ( i = 0; i < size; i ++ ) {
        printf("-");
    }
    printf("\n\n");
    color("37");
}

void accueil() {
    clearConsole("Expression reguliere ");

    char input[25];

    printf("Saisir une recherche : ");
    fgets(&input, sizeof(input), stdin);

    printf("\nvous avez saisie : %s\n", input);

}
