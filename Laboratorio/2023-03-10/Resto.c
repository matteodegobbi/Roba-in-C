/* Resto.c  CONTIENE ERRORI DI LOGICA. */

#include <stdio.h>
  /* Consente l'uso di printf */

#include "InOut.h"
  /* Consente l'uso di printf */

/* OV L'autore del programma. */
void autore(void) { /* Qua inizia la funzione $autore. */

    printf("Questo programma e` stato scritto da Anna Rossi.\n");
} /* autore */
/* Qua finisce la funzione $autore. */

/*
IP dividendo Dividendo della divisione. >= 0.
IP divisore Divisore della divisione. > 0.
OR Resto della divisione.
*/
int resto(dividendo, divisore) {
  int quoziente = dividendo/divisore;
  return dividendo-quoziente*divisore;;
    /* I caratteri + - * / (quando compaiono tra due numeri) indicano le
    quattro operazioni aritmetiche fondamentali.
    Il / applicato su due interi calcola il quoziente arrotondato per difetto.
    */
} /* resto */
/* Qua finisce la funzione $resto. */

/* Qua inizia la funzione $main, che e` il punto di partenza
dell'esecuzione del programma.
*/
int main(void) {
    int nCara, nBambini;
    /* Definisce le variabili intere $nCara, $nBambini. */

    /*autore();  Invoca (cioe` esegue) la funzione $autore. */

    nCara = scanInt("N. di caramelle: ");
    /* Invoca la funzione $scanInt.
    $scanInt stampa "N. di caramelle: ", legge un intero da tastiera
    e lo inserisce nella variabile $nCara.
    */

    nBambini = scanInt("N. di bambini: ");
    /* Analogamente all'istruzione precedente, invoca $scanInt per leggere
    un intero da tastiera.
    */

    printf("Resto: %d\n", resto(nCara, nBambini));
    /* $printf  stampa i caratteri "Resto: " e il valore ritornato dalla funzione $resto;
    %d significa "stampa in formato decimale".
    */

    /*autore();  Invoca la funzione $autore una seconda volta. */
    return 0;
} /* main */
/* Qua finisce la funzione $main. */
