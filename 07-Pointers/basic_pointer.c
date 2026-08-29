#include <stdio.h>

int main() {
    int number = 10;
    int *ptr = &number;

    printf("Value of number = %d\n", number);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}
