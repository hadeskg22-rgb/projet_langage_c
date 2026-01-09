#include<stdio.h>

int main(){
    int x;
    printf("saisir un entier:");
    scanf("%d",&x);
    if (x%2==0){
   printf( "%d est pair\n",x);
}
 if (x%2==1){
   printf( "%d est impair\n",x);
 }
  else {
    printf("error");
 }
}
