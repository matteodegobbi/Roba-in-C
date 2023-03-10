/* HelloWorld.c CONTIENE WARNING
ED ERRORI IN PRECOMPILAZIONE, IN COMPILAZIONE E IN LINKING.
Il nome del file (in questo caso, HelloWorld) deve essere evocativo.
*/

#include <stdio.h>
/* Consente al programma di leggere dati da tastiera e di stamparli su video. */

int main(void) {
    /*int resto;  Definisce la variabile intera $resto. */

    /* Qua inizia il metodo $main, che e` il punto di partenza
    dell'esecuzione del programma.
    */

    printf("Hello, world!\n");
    /* Stampa su video i caratteri contenuti tra la coppia di "";
    inoltre, la presenza di '\n' (che significa newline) sposta il cursore di
    scrittura del video nella linea successiva.
    */


    printf("Questo programma e` stato scritto da Anna Rossi.\n");
    /* Stampa su video i caratteri contenuti tra la coppia di "";
    La parola 'e`' (che compare nella scritta "Questo programma e` ..")
    deve essere scritta mediante 2 caratteri;
    se fosse scritta mediante un unico carattere (anziche' 2),
    questo carattere sarebbe stampato erroneamente.
    */

    printf("Ciao, mondo!");
    /* Stampa su video i caratteri contenuti tra la coppia di "";
    a differenza del $printf dell'istruzione successiva, non sposta il cursore
    di scrittura del video nella linea successiva (perche' non c'e` il \n).
    */

    printf("Chiudo il programma.\n");

    return 0; /* Conclude la funzione $main. */

} /* main */
/* Qua finisce la funzione $main. */
