#include <stdio.h>

void changeValue(int *number) {
    *number = 50;
}

int main() {
    int number = 10;

    printf("Before = %d\n", number);

    changeValue(&number);

    printf("After = %d", number);

    return 0;
}
