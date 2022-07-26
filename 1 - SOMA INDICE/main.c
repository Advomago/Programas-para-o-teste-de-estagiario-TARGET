#include <stdio.h>

int main() {
   int k = 0, INDICE = 13, soma = 0;

   while (k<INDICE){
       k+= 1;
       soma += k;
   }

   printf ("SOMA: %d", soma);
}
