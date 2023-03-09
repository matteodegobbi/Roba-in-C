/** Autore: Antonio Giunta */

#include <stdbool.h>

/*
IP nVia Numero di viaggiatori. > 0.
IP kmP Segnalazione del contachilometri al momento della partenza. > 0.
IP kmA Segnalazione del contachilometri al momento dell'arrivo. > kmP.
IP kmLitro Numero di km percorsi mediamente consumando un litro di carburante. > 0.
IP costoCarbu Costo di un litro di carburante. > 0.
OR Spesa di ogni viaggiatore per coprire la spesa totale del carburante.
*/
double spesaViaggiaCarbu(int nVia, int kmP, int kmA, double kmLitro, double costoCarbu) {
    return (((kmA - kmP) / kmLitro) * costoCarbu) / nVia;
} /* spesaViaggiaCarbu */

/*
IP m Numero da valutare se e` multiplo. >= 0.
IP s Numero da valutare se e` sottomultiplo. >= 1.
OR Indicazione se $m e` multiplo di $s.
*/
bool isMultiplo(int m, int s) {
    return (m % s) == 0;
} /* isMultiplo */

/*
IP n1 Primo numero della serie.
IP n2 Secondo numero della serie.
IP n3 Terzo numero della serie.
OR Indicazione se i tre numeri sono ordinati in senso crescente.
*/
bool isOrder(int n1, int n2, int n3) {
    return (n1 <= n2) && (n2 <= n3);
} /* isOrder */

/*
IP c Carattere da valutare.
OR Indicazione se $c e` una cifra decimale.
*/
bool isDigit(char c) {
    return '0' <= c && c<= '9';
} /* isDigit */

/*
IP c Carattere da convertire in intero. {'0', .., '9'}.
OR Valore intero corrispondente a $c. {0, .., 9}.
*/
int digitToInt(char c) {
    return c - '0';
} /* digitToInt */
