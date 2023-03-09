#include <stdbool.h>

#define N2 100

void scanArray2RettaInt(const char [], int [][N2], int, int);

void scanSizeArray2RettaInt(const char [], bool, int [][N2], int*, int*);

int** allocateScanArray2DinaRettaInt(const char [], bool, int*, int*);

void printArray2RettaInt(const char [], const int [][N2], int, int);

void printArray2DinaRettaInt(const char [], const int**, int, int);

void printArray2DinaTriaInfeInt(const char [], const int**, int);

void freeArray2DinaInt(int***, int);
