#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    file = fopen("sample.txt", "r");

    if (file == NULL) {
        printf("Unable to open file.");
        return 1;
    }

    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }

    fclose(file);

    return 0;
}
