#include <stdio.h>

int main() {
    int n;
    double temp, total = 0;

    printf("How many readings: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter temperature: ");
        scanf("%lf", &temp);
        total += temp;

        if (temp > 80)
            printf("WARNING: Overheating\n");
        else if (temp >= 50)
            printf("Normal\n");
        else
            printf("Optimal\n");
    }

    printf("Average temperature: %.2lf°C\n", total / (double)n);
    return 0;
}