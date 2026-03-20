#include <stdio.h>
int main(){
     int n,digit=0, dsum=0;
     printf ("Enter No.");
     scanf ("%d",&n);
     while(n>0){
       digit=n%10;
       dsum = dsum+digit;
       n=n/10;
     }
     printf ("Sum of digits are:%d",dsum);
    return 0;
}