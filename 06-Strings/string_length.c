#include <stdio.h>
#include <string.h>

int main() {
    char text[100];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    printf("Length = %lu", strlen(text));

    return 0;
}
