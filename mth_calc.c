#include <stdio.h>
#include <math.h>

int main() {
    float m;

    printf("Enter m: ");
    scanf("%f", &m);
    
    // Calculating Z1 function
    if (m > 0) {
        float z1 = sqrt(pow((3 * m + 2), 2) - 24 * m) / (3 * sqrt(m) - 2 / sqrt(m));
        printf("Result of calculating z1: %f\n", z1);
    }
    else {
        printf("m value for Z1 is incorrect!\n");
    }

    // Calculating Z2 function
    if (m >= 0) {
        float z2 = -sqrt(m);
        printf("Result of calculating z2: %f\n", z2);
    }
    else {
        printf("m value for Z2 is incorrect!\n");
    }

    return 0;
}