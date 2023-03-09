#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "InOut.h"
#include "InOutArray2.h"

/* Legge le due grandezze di un array2 di int.
IP isQuadrato Indicazione se l'array e` quadrato.
IK+OP *n1 Grandezza1.
IK+OP *n2 Grandezza2.
*/
void scanSize2(bool isQuadrato, int* n1, int* n2) {
    *n1 = scanInt("Grandezza della dimensione 1 dell'array: ");
    if (isQuadrato)
        *n2 = *n1;
    else
        *n2 = scanInt("Grandezza della dimensione 2 dell'array: ");
} /* scanSize2 */

/* Legge un array2 di int da tastiera.
IP etiche Etichetta per l'input da inserire mediante tastiera.
IK+OP a Array2 di int da leggere.
IP n1 Grandezza1 di $a.
IP n2 Grandezza2 di $a.
*/
void scanArray2RettaInt(const char etiche[], int a[][N2], int n1, int n2) {
    int i, j;
    for (i = 0; i < n1; i++)
        for (j = 0; j < n2; j++) {
            printf("Valore di a[%d][%d]: ", i, j);
            a[i][j] = scanInt("");
        } /* for j */
} /* scanArray2Int */

/* Legge un array di int da tastiera.
IP etiche Etichetta per l'input da inserire mediante tastiera.
IP isQuadrato Indicazione se l'array e` quadrato.
IK+OP a Array2 di int da leggere.
IK+OP *n1 Grandezza1 di $a.
IK+OP *n2 Grandezza2 di $a.
*/
void scanSizeArray2RettaInt(const char etiche[], bool isQuadrato, int a[][N2], int* n1, int* n2) {
    printf("%s", etiche);
    scanSize2(isQuadrato, n1, n2);
    scanArray2RettaInt(etiche, a, *n1, *n2);
} /* scanSizeArray2RettaInt */

/* Alloca e legge un array2 dinamico di int da tastiera.
IP etiche Etichetta per l'input da inserire mediante tastiera.
IP isQuadrato Indicazione se l'array e` quadrato.
IK+OP a Array da allocare e da leggere.
*/
int** allocateScanArray2DinaRettaInt(const char etiche[], bool isQuadrato, int* n1, int* n2) {
    int i, j;
    int** a;
    printf("%s", etiche);
    scanSize2(isQuadrato, n1, n2);
    a = malloc(*n1 * sizeof(int*));
    assert(a != NULL);
    for (i = 0; i < *n1; i++) {
        a[i] = malloc(*n2 * sizeof(int));
        assert(a[i] != NULL);
        for (j = 0; j < *n2; j++) {
            printf("Valore di a[%d][%d]: ", i, j);
            a[i][j] = scanInt("");
        } /* for j */
    } /* for i */
    return a;
} /* allocateScanArray2DinaRettaInt */

/* Stampa un array di int su video.
IP etiche etichetta per l'output da stampare su video.
IP a Array da stampare.
IP n1 Grandezza1 di $a.
IP n2 Grandezza2 di $a.
OV Stampa $a su video.
*/
void printArray2RettaInt(const char etiche[], const int a[][N2], int n1, int n2) {
    int i, j;
    printf("%s", etiche);
    for (i = 0; i < n1; i++) {
        printf("Riga %3d:", i);
        for (j = 0; j < n2; j++)
            printf("%5d ", a[i][j]);
        printf("\n");
    } /* for i */
} /* printArray2RettaInt */

/* Stampa un array rettangolare dinamico di int su video.
IP etiche Etichetta per l'output da stampare su video.
IP a Array da stampare.
IP n1 Grandezza1 di $a.
IP n2 Grandezza2 di $a.
OV Stampa $a su video.
*/
void printArray2DinaRettaInt(const char etiche[], const int** a, int n1, int n2) {
    int i, j;
    printf("%s", etiche);
    for (i = 0; i < n1; i++) {
        printf("Riga %3d:", i);
        for (j = 0; j < n2; j++)
            printf("%5d ", a[i][j]);
        printf("\n");
    } /* for i */
} /* printArray2DinaRettaInt */

/*
Stampa un array2 dinamico triangolare inferiore di int su video.
IP etiche Etichetta per l'output da stampare su video.
IP a Array2 da stampare.
IP n1 Grandezza1 di $a.
*/
void printArray2DinaTriaInfeInt(const char etiche[], const int** a, int n1) {
    int i, j;
    printf("%s", etiche);
    for (i = 0; i < n1; i++){
        for (j = 0; j < i + 1; j++)
           printf("%d ", a[i][j]);
        printf("\n");
    } /* for */
}/* printArray2DinaTriaInfeInt */

/* Libera la memoria allocata da un array2 dinamico di int.
IOP a Array da liberare.
IP n1 Grandezza1 di $a.
*/
void freeArray2DinaInt(int*** a, int n1) {
    int i;
    for (i = 0; i < n1; i++)
        free((*a)[i]);
    free(*a);
} /* freeArray2DinaInt */
