/* #include <stdio.h>
int main(){

for(int i = 1; i<= 10; i++){
    printf("%d\n", i);
}


return 0;


}
*/













/* #include <stdio.h>
int main(){

int i=0;
while(i<=10){
    printf("%d\n", i);
    i++;
}


return 0;


}

*/












/*#include <stdio.h>
int main(){

int i=1;
do{
    printf("%d\n",i);
    i++;
}while(i<=10);

return 0;


}*/










// for numbers 10-1

/* #include <stdio.h>
int main(){

for(int i = 10; i>=1; i--){
    printf("%d\n", i);
}


return 0;


}

*/


















/*#include <stdio.h>
int main(){

int i=10;
while(i>=1){
    printf("%d\n", i);
    i--;
}


return 0;


}
*/

/*#include <stdio.h>
int main(){

int i=10;
do{
    printf("%d\n",i);
    i--;
}while(i>=1);

return 0;


}

*/


/* #include <stdio.h>
int main(){

for(int i= 0; i<=25; i++){
    printf("%d\n", 2*i);
}

return 0;


}

*/




//sum of all n mumbers for



/*#include <stdio.h>
int main(){


int n ,sum=0;
printf("enter your number;\n");
scanf("%d", &n);
for(int i= 1; i<=n; i++ ){
    sum= sum+i;
}
printf("%d", sum);

return 0;


}
*/

/* #include <stdio.h>
int main(){


int i= 1 , n ,sum=0;
printf("enter your number\n");
scanf("%d", &n);
while(i<=n){
    sum = sum + i;
    i++;
}
printf("%d",sum);

return 0;


}
*/


/*#include <stdio.h>
int main(){


int i= 1 , n ,sum=0;
printf("enter your number\n");
scanf("%d", &n);
do{
    sum = sum + i;
    i++;
}while(i<=n);
printf("%d",sum);

return 0;


}
*/

#include <stdio.h>
int main(){
int n;
printf(" enter \n");
scanf("%d", &n);
for(int i= 1; i<=n; i++ ){
    for(int j= 1; j<=i; j++){
        printf(" *");
    }
    printf(" \n");
}


return 0;


}


