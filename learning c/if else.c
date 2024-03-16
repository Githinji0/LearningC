#include <stdio.h>

int main() {
    int num = 15;

    if (num > 20) {
        printf("The number is greater than 20.\n");
    } else if (num > 10) {
        printf("The number is greater than 10 but not more than 20.\n");
    } else if (num > 5) {
        printf("The number is greater than 5 but not more than 10.\n");
    } else {
        printf("The number is not greater than 5.\n");
    }

    return 0;
}
