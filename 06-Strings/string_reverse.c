#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int i, length;

    printf("Enter a string: ");
    scanf("%99s", text);

    length = strlen(text);

    printf("Reversed string: ");

    for (i = length - 1; i >= 0; i--) {
        printf("%c", text[i]);
    }

    return 0;
}
