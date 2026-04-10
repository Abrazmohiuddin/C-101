#include <stdio.h>
int main(){

float a, b;
char c;
printf("enter ist number\n");
scanf("%f", &a);
printf("enter 2nd number\n");
scanf("%f", &b);
printf("enter the operation\n");
scanf(" %c", &c);

if( c == '+'){
    printf("the value is %.2f",a+ b);
}
else if (c== '-'){
    printf("the vale is %.2f", a-b);
}
else if (c== '*'){
    printf("the vale is %.2f", a*b);
}
else if (c== '/'){
    printf("the vale is %.2 f", a/b);
}
else{
    printf("wrong input");
}




return 0;




}
