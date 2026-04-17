// factors of a number
/*#include <stdio.h>
int main(){
    int n;
printf("enter a number");
scanf("%d", &n);
printf("the factors of %d are:\n", n);
for(int i=1; i<=n; i++){
    if (n%i==0){
        printf("%d\n", i);
    }
}








return 0;
}
*/

// square series
/*// factors of a number
/*#include <stdio.h>
int main(){
    int n;
printf("enter a number");
scanf("%d", &n);
printf("the factors of %d are:\n", n);
for(int i=1; i<=n; i++){
    if (n%i==0){
        printf("%d\n", i);
    }
}








return 0;
}
*/
//armsstrong number
#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;


    for (int temp = num; temp != 0; temp /= 10) {
        n++;
    }


    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, n);
    }

    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}


