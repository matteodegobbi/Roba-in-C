#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "InOut.h"

/* Legge un array di int da tastiera.
IP etiche Etichetta per l'input da inserire mediante tastiera.
IK+OP a Array di int, precedentemente allocato, da leggere.
IP Grandezza di $a.
*/
void scanArrayInt(const char etiche[], int a[], int n) {
    int i;
    printf("%s", etiche);
    for (i = 0; i < n; i++) {
        printf("Valore[%d]: ", i);
        a[i] = scanInt("");
    } /* for */
} /* scanArrayInt */

/* Legge un array di int da tastiera.
IP etiche Etichetta per l'input da inserire mediante tastiera.
IK+OP a Array di int, precedentemente allocato, da leggere.
IK+OR Grandezza di $a.
*/
int scanSizeArrayInt(const char etiche[], int a[]) {
    int n = scanInt("Grandezza dell'array: ");
    scanArrayInt(etiche, a, n);
    return n;
} /* scanSizeArrayInt */

/* Alloca e legge un array pieno di int da tastiera.
IP etiche Etichetta per l'input da inserire mediante tastiera.
IK+OP Grandezza di $a.
IK+OR a Array di int, da allocare e da leggere.
*/
int* allocateScanArrayInt(const char etiche[], int* n) {
    int* a;
    *n = scanInt("Grandezza dell'array pieno: ");
    a = malloc(*n * sizeof(int));
    assert(a != NULL);
    scanArrayInt(etiche, a, *n);
    return a;
} /* allocateScanArrayInt */

/* Stampa un array di int su video.
IP etiche etichetta per l'output da stampare su video.
IP a Array da stampare.
IP n Grandezza di $a.
OV Stampa $a su video.
*/
void printArrayInt(const char etiche[], const int a[], int n) {
    int i;
    printf("%s", etiche);
    for (i = 0; i< n; i++)
        printf("a[%d]: %d\n", i, a[i]);
} /* printArrInt */

/* Legge un array di double da tastiera.
IP etiche Etichetta per l'input da inserire mediante tastiera.
IK+OP a Array di double, precedentemente allocato, da leggere.
IP Grandezza di $a.
*/
void scanArrayDouble(const char etiche[], double a[], int n) {
    int i;
    printf("%s", etiche);
    for (i = 0; i < n; i++) {
        printf("Valore[%d]: ", i);
        a[i] = scanDouble("");
    } /* for */
} /* scanArrayDouble */

/* Legge un array di double da tastiera.
IP etich Etichetta per l'input da inserire mediante tastiera.
IK+OP a Array di double, precedentemente allocato, da leggere.
IK+OR Grandezza di $a.
*/
int scanSizeArrayDouble(const char etiche[], double a[]) {
    int n = scanInt("Grandezza dell'array: ");
    scanArrayDouble(etiche, a, n);
    return n;
} /* scanSizeArrayDouble */

/* Alloca e legge un array pieno di double da tastiera.
IP etiche Etichetta per l'input da inserire mediante tastiera.
IK+OP Grandezza di $a.
IK+OR a Array di double, da allocare e da leggere.
*/
double* allocateScanArrayDouble(const char etiche[], int* n) {
    double* a;
    *n = scanInt("Grandezza dell'array pieno: ");
    a = malloc(*n * sizeof(double));
    assert(a != NULL);
    scanArrayDouble(etiche, a, *n);
    return a;
} /* allocateScanArrayDouble */

/* Stampa un array di double su video.
IP etiche etichetta per l'output da stampare su video.
IP a Array da stampare.
IP n Grandezza di $a.
OV Stampa $a su video.
*/
void printArrayDouble(const char etiche[], const double a[], int n) {
    int i;
    printf("%s", etiche);
    for (i = 0; i< n; i++)
        printf("a[%d]: %f\n", i, a[i]);
} /* printArrDouble */
