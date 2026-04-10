#include <stdio.h>


int fac(int n);
int fac(int n){

    if(n==1 ||n==0){
        return 1;
    }
    return fac(n-1)*n;


}
int main(){
int n;
printf(" enter your number: ");
scanf("%d",&n);
fac(n);
printf("the factorial of %d is: %d",n, fac(n));






return 0;
}
