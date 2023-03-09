REM NON E` UTILE ALL'ATTO PRATICO.
REM DA USARE PER OTTENERE UN FILE ASSEMBLY .s PARTENDO DA UN UNICO SORGENTE .c.
REM Precompila un sorgente, Compila il risultato mediante il C Ansi.
gcc -ansi -pedantic -Wall -Werror -S %1.c
