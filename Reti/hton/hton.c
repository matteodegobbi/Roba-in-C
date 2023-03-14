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
/*CONVERTE UN LONG IN RAPPRESENTAZIONE BIG ENDIAN SE NON LO E' GIA', FUNZIONA SUA SU LINUX CHE SU WINDOWS*/
long htonl(long n){
    int nByteLong=sizeof(long);
    if (!isLittleEndian){
        return n;
    }
    char* pt=(char*)&n;
    for (int i = 0; i < nByteLong/2; i++){
        char temp=*pt;
        *(pt+i)=*(pt+nByteLong-1-i);
        *(pt+nByteLong-1-i)=temp;
    }
    return n;
}

#include <stdio.h>
#include <math.h>
/*main di test per htons e htonl*/
int main(int argc, char const *argv[]){
    /*00000000 00000001 -> 00000001 00000000 short e' 2 byte sia su Windows che su Linux*/
    unsigned short n=1;
    printf("short little endian:%lu \n",n);
    printf("short big endian:%lu \n",htons(n));

    return 0;

    /*00000000 00000000 00000000 00000001 -> 00000001 00000000 00000000 00000000 su Windows long e' 4 byte*/
    /*00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001 -> 
    -> 00000000 00000000 00000000 00000000 00000001 00000000 00000000 00000000 su Linux long e' 8 byte*/
    unsigned long n=1;
    printf("long little endian:%lu \n",n);
    printf("long big endian:%lu \n",htonl(n));
}
