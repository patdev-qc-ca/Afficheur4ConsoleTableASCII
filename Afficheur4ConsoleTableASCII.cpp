// Afficheur4ConsoleTableASCII.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>


int main()
{
    printf("Listeur de table ASCII!\nSimple et brutal\n%c Patrice Waechter-Ebling 1992-2022",184);

    for (int x = 0; x < 655535; x++) {
        printf("\n| %.5d | %c | 0x%.8x |", x, x, x);
    }

}
