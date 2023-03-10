#include <stdbool.h>
#include <stdio.h>
/*
IP anno Anno di cui va determinato se è bisestile >= 1582
OR indicazione se $anno è bisestile
*/
bool isBisestile(int anno){
    bool isDivPer4=(anno%4==0);
    bool isDivPer100=(anno%100==0);
    bool isDivPer400=(anno%400==0);
    return isDivPer400 || (isDivPer4&&!isDivPer100);
}/*isBisestile*/

/*
IP a,b i due numeri di cui va determinato se sono concordi
OR indicazione se $a e $b sono concordi
*/
bool isConcordi(double a,double b){
    return ((a<0) == (b<0));
}/*isConcordi*/

int main(){
    /*int anno;
    bool bis;
    scanf("%d",&anno);
    bis = isBisestile(anno);
    printf("%d",bis);*/
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%s\n",isConcordi(a,b)?"concordi":"discordi");
    return 0;
}
