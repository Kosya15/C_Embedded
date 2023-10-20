#include <stdio.h>

int main() {

    unsigned int num;
    printf("Enter a number between 0 and 127: ");
    scanf("%i", &num);

    if (num >= 0 && num <= 127) {
        printf("The result of convetration - %c\n", num);
    }
    else {
        printf("Error");
    }

    return 0;
}