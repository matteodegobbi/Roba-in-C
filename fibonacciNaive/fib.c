#include <stdio.h>
int fibNaive(int n){
    if(n==0||n==1){
        return 1;
    }
    return fibNaive(n-1)+fibNaive(n-2);
}
int main(){
    int risultato=fibNaive(30);
    printf("%d",risultato);
}