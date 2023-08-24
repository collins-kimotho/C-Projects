#include <stdio.h>

int main(){
    const double PI = 3.14159;
    double radius;
    double circumfrence;

    printf("\nEnter radius of a circle: ");
    scanf("%lf", &radius);

    circumfrence = 2 * PI * radius;

    printf("circumfrence: %lf", circumfrence);

    return 0;
}
    