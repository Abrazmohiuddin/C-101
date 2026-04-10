#include <stdio.h>
void  right_triangle(int n){
for(int i=1; i<=n; i++){
    for(int j= 1; j<=i; j++){
    printf("*");
    }
        printf("\n");

}

}

void triangle(int n){
for(int i= 1; i<= n; i++){

    for(int j=1;j<=n-i; j++){
        printf(" ");
    }

    for(int k =1; k<= 2*i -1; k++){
        printf("*");
    }

    printf("\n");

}

}

void diamond(int n){

for(int i= 1; i<= n; i++){

    for(int j=1;j<=n-i; j++){
        printf(" ");
    }

    for(int k =1; k<= 2*i -1; k++){
        printf("*");
    }

    printf("\n");

}
//lower triangle

for(int i= n-1; i>=1; i--){

    for(int j=1;j<=n-i; j++){
        printf(" ");
    }

    for(int k =1; k<= 2*i -1; k++){
        printf("*");
    }

    printf("\n");

}



}





void square(int n){

for(int i=1; i<=n; i++){
    for(int j= 1; j<=n; j++){
    printf("*");
    }
        printf("\n");

}

}





int main()
{

   int n, ch;
   printf("enter your ' n' size of the figures: \n");
   scanf(" %d", &n);
   printf("1: right triangle \n");
   printf("2: triangle \n");
   printf("3: diamond \n");
   printf("4: square\n");
   printf(" please enter your choice : ");
   scanf("%d", &ch);

   switch(ch){

   case 1: right_triangle(n);
       break;

    case 2: triangle(n);
    break;


    case 3: diamond(n);
    break;


    case 4: square(n);
    break;

    default: printf("invalid  choice");


   }



   return 0;


}






