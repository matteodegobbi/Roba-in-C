/** Autore: Antonio Giunta */

#include <stdio.h>
#include <math.h>
#include "InOut.h"
#include "Sequenze.h"

int main(void) {
    double x, erroTollerato;

    int nV, kPa, kA;
    double kPLi, costoCa;
    nV = scanInt("\nNumero di viaggiatori: ");
    kPa = scanInt("Km alla partenza: ");
    kA = scanInt("Km all'arrivo: ");
    kPLi = scanDouble("Km percorsi mediante un litro di carburante: ");
    costoCa = scanDouble("Costo di un litro: ");
    printf("Spesa di ogni viaggiatore: %.2f\n", spesaViaggiaCarbu(nV, kPa, kA, kPLi, costoCa));

    /*
    int m, s;
    m = scanInt("\nNumero da valutare se e` un multiplo: ");
    s = scanIntAmmissibile("Numero da valutare se e` un sottomultiplo, compreso tra 2 e 100: ",
      2, 100);
    printBool("Il primo numero e` multiplo dell'altro? ", isMultiplo(m, s));
    */

    /* printBool("3 6 5 sono ordinati? ", isOrder(3, 6, 5)); */

    x = pow(sqrt(1.21), 2) - 1.21;
    printf("\nx: %1.5G\n", x); /* Stampa 2.22E-16 per un errore di arrotondamento. */
    erroTollerato = 1E-17;
    printf("abs(x) < %1.5G", erroTollerato);
    printBool("? ", fabs(x) < erroTollerato); /* Stampa false */
    erroTollerato = 1E-3;
    printf("abs(x) < %1.5G", erroTollerato);
    printBool("? ", fabs(x) < erroTollerato); /* Stampa true */

    printf("\nCarattere prima di B: %c\n", 'B' - 1); /* Stampa A */
    printf("Distanza da B a F: %d\n", 'B' - 'F'); /* Stampa -4 */

    return 0;
} /* main */
