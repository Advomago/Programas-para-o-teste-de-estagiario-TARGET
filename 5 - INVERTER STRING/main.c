#include <stdio.h>
#include <string.h>
int main() {
    char string[81], stringReverse[81];
    int i, j=-1;
    printf ("Insira seu nome:\n");
    scanf ("%[^\n]", string);

    for (i=strlen(string); i>=0; i--){
        stringReverse[j] = string [i];
        j++;
    }
    printf ("%s", stringReverse);
}
