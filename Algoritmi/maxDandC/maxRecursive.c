#include <stdio.h>
#include <math.h>
/*CONQUER DELLA MAX RICORSIVA*/
int max2numeri(int a,int b){
    return (a>=b)?a:b;
}

int maxRicorsiva(int* arr,int inizio,int fine){
    /*[B]*/
    if (inizio==fine){
        return arr[inizio];
    }
    /*[D] e [R] con il divide implicito nella chiamata ricorsiva*/
    int maxSx=maxRicorsiva(arr,inizio,floor((inizio+fine))/2.0);
    int maxDx=maxRicorsiva(arr,floor((inizio+fine)/2.0)+1,fine);

    /*[C] tramite la funzione max2numeri*/
    return max2numeri(maxSx,maxDx);
}
int main(int argc, char const *argv[]){
    /*printf("%d \n",max2numeri(atoi(argv[1]),atoi(argv[2])));*/
    
    int arr[4];
    arr[0]=1;
    arr[1]=4;
    arr[2]=9;
    arr[3]=7;
    int result=maxRicorsiva(arr,0,3);
    printf("%d \n",result);
    return 0;

}
