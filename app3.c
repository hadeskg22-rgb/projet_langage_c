#include<stdio.h>
int main(){
int a,b,somme,dif,div;
printf("entrer deux valeurs :");
scanf("%d %d",&a,&b);
somme=a+b;
dif=(a-b);
div=a/b;
if (a%2==0&& b%2==0 && a>=0 && b>=0){
    printf("la somme est:%d\n",somme);
} else {
    printf("la diference est %d",dif);
}
printf("la division de %d par %d donne : %d ",a,b,div);






return 0;
}
