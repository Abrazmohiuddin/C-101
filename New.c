#include <stdio.h>
int main()

{
    float rad, area;
    printf("Enter Radius: ");
    scanf("%f", &rad);

    area = (3.14 * rad * rad);
    printf("The Area of the circle is %.2f", area);

    return 0;

}
