#include <stdio.h>

#define PI 3.14

int main(){
    double area = 0.0, radius = 0.0;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("The area of the circle is: %lf", area);
    return 0;
}