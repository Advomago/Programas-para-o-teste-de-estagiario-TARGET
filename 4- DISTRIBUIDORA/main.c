#include <stdio.h>

int main() {

   float SP = 67836.43,
   RJ = 36678.66,
   MG = 29229.88,
   ES = 27165.48,
   Outros = 19849.53;

    float total = SP + RJ + MG + ES + Outros;
    float pSP, pRJ, pMG, pES, pOutros;

    pSP = (SP * 100)/total;
    pRJ = (RJ * 100)/total;
    pMG = (MG * 100)/total;
    pES = (ES * 100)/total;
    pOutros = (Outros * 100)/total;

    printf ("Media de SP: %.2f%\n", pSP);
    printf ("Media de RJ: %.2f%\n", pRJ);
    printf ("Media de MG: %.2f%\n", pMG);
    printf ("Media de ES: %.2f%\n", pES);
    printf ("Media de outros: %.2f%\n", pOutros);

}
