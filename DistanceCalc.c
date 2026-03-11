#include <stdio.h>

int main() {
    double speed;
    double time;
    double distance;

    printf("Enter speed: ");
    scanf("%lf", &speed);

    printf("Enter time: ");
    scanf("%lf", &time);

    distance = speed * time;

    printf("Distance: %.2lf Km\n", distance);

    return 0;
}