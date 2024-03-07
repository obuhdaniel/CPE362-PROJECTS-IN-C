#include <stdio.h>

int main(){
    double width;
    double length;
    printf("\n\n\nProgram to calculate Perimeter\n\n");

    printf("Enter length and width\n");

    scanf("%lf", &width);
    scanf("%lf", &length);

    double perimeter = 2*(width+ length);
    printf("the perimeter of your rectangle is %lf \n\n", perimeter);
}
