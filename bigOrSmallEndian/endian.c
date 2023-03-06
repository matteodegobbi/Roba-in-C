#include <stdio.h>
int main(){
    int a=255;
    int* aPt=&a;
    char* aPrimoByte=(char*)aPt;
    printf("%d\n",*aPt);
    printf("%d\n",*(aPrimoByte));
    
}