#include <stdio.h>

int check_battery(double battery) {
    if (battery > 75) {
        printf("Battery: Optimal\n");
        return 0;
    } else if (battery > 30) {
        printf("Battery: Normal\n");
        return 0;
    } else {
        printf("Battery: Warning\n");
        return 1;
    }
}

int check_temperature(double temp) {
    if (temp > 80) {
        printf("Temperature: WARNING: Overheating\n");
        return 1;
    } else if (temp >= 50) {
        printf("Temperature: Normal\n");
        return 0;
    } else {
        printf("Temperature: Optimal\n");
        return 0;
    }
}

int check_motor(double speed) {
    if (speed > 3000) {
        printf("Motor Speed: Normal\n");
        return 0;
    } else {
        printf("Motor Speed: Warning\n");
        return 1;
    }
}

int main() {
    double battery, temperature, speed;

    printf("=== Robot Diagnostic System ===\n");
    printf("Enter battery %%: ");
    scanf("%lf", &battery);

    printf("Enter temperature (C): ");
    scanf("%lf", &temperature);

    printf("Enter motor speed (RPM): ");
    scanf("%lf", &speed);

    printf("\n=== Diagnostic Report ===\n");

    int warning = 0;
    warning += check_battery(battery);
    warning += check_temperature(temperature);
    warning += check_motor(speed);

    if (warning > 0)
        printf("Overall: FAIL\n");
    else
        printf("Overall: PASS\n");

    return 0;
}
