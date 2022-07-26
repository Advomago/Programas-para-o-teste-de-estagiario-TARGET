#include <stdio.h>


int main() {
    long long int number, aux = 3, ult = 1, penultimo = 0, temp = 0;
    int fibonacci = 0;

    printf ("Insira um numero qualquer e veja se pertence a sequencia de fiboonacci\n");
    scanf ("%lld", &number);

    if (number == 0 || number == 1){
        fibonacci = 1;
    }else {
        for (int i = 0; i<=number+1; i++){
                temp = penultimo;
                penultimo = ult;
                ult += temp;

            if (number == temp){
                fibonacci = 1;
            }
        }
    }
    if (fibonacci != 1){
        printf("Esse numero nao pertence a sequencia de fibonacci\n");
    }else{
        printf ("Esse numero pertence a sequencia de fibonacci\n");
    }


}
