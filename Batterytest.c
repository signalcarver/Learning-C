#include <stdio.h>

int main() {
    // variables
    double battery;
    double consumption;
    double runtime;

        printf("Enter your battery percentage:");
        scanf("%lf", &battery);

        printf("Enter your consumtions (Watts):");
        scanf("%lf", &consumption);

    // Calculation for result (the *500 is assuming the battery size adjust to right size)
if (consumption == 0) {
        printf("Error: Invalid Consimption\n");

        return 1;
    
runtime = (battery / 100.0) * 500 / consumption;
    
    // The Result for the use  
        printf("runtime: %.2lf Hours\n", runtime);
        
        if (battery > 75) {
        printf("Battery good\n");
    } else if (battery > 30) {
        printf("Battery OK - consider charging soon\n");
    } else if (battery > 10) {
        printf("Battery low - charge now\n");
    } else {
        printf("Critical - shutting down\n");
    }


        return 0;
}


