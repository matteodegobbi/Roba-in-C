#include <stdio.h>
int main(){
    int a=255;
    int* aPt=&a;
    char* aPrimoByte=(char*)aPt;
    printf("%d\n",*aPt);
    printf("%d\n",*(aPrimoByte));
    if(*aPrimoByte==-1){
        printf("little endian");
    }else{
        printf("big endian");
    }
}