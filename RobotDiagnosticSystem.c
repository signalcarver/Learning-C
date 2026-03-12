#include <stdio.h>

void check_battery(double battery) {
     
    if (battery > 75)
        printf("Battery: Optimal\n");
    else if (battery > 30)
        printf("Battery: Normal\n");
    else
        printf("Battery: Warning\n");
}

void check_temperature(double temp) {
     if (temp > 80)
        printf("Temperature: WARNING!!OVERHEATING\n");
    else if (temp <= 80)
        printf("Temperature: Normal\n");
    else
        printf("Temperature: Optimal\n");
}

void check_motor(double speed) {
     if (speed > 3000)
        printf("Motor Speed: Normal\n");
    else
        printf("Motor Speed: Warning\n");
}

int main() {
    double battery, temperature, speed;
// ask for input with printf and scanf for each variable
    printf("What is the current battery percent?\n");
    scanf("%lf", &battery);

    printf("What is the current temperature?\n");
    scanf("%lf", &temperature);

    printf("What is the current motor speed?\n");
    scanf("%lf", &speed);
    
    
    
    printf("\n=== Diagnostic Report ===\n");
    printf("\nThe current motor speed is: %.2lf/RPM.\n", speed);
    printf("\nThe current battery health is currently: %lf\n", battery);
    printf("\nThe current temperature is:%.2lf°C\n", temperature);
    // call three functions here
    check_battery(battery);
    check_temperature(temperature);
    check_motor(speed);
    // print Overall PASS or FAIL

    return 0;
}



