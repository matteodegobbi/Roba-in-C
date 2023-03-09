int isLittleEndian(){
    int a=255;
    int* aPt=&a;
    char* aPrimoBytePt=(char*)aPt;
    if(*aPrimoBytePt==-1){
        return 1;
    }else{
        return 0;
    }
}
/*CONVERTE UNO SHORT IN RAPPRESENTAZIONE BIG ENDIAN SE NON LO E' GIA'*/
short htons(short n){
    if (!isLittleEndian){
        return n;
    }
    char* pt=(char*)&n;
    char temp=*pt;
    *(pt)=*(pt+1);
    *(pt+1)=temp;
    return n;
}
long htonl(long n){
    if (!isLittleEndian){
        return n;
    }
    char* pt=(char*)&n;
    for (int i = 0; i < 4; i++){
        char temp=*pt;
        *(pt+i)=*(pt+7-i);
        *(pt+7-i)=temp;
    }
    return n;
}
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]){
    /*unsigned short n=pow(2,16)-1;
    printf("%d \n",n);
    printf("%d \n",htons(n));

    return 0;*/
    //00000001 00000001 00000001 00000001 
    unsigned long n=128;
    printf("%lu \n",n);
    printf("%lu \n",htonl(n));
}
