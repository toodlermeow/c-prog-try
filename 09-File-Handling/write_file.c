#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("sample.txt", "w");

    if (file == NULL) {
        printf("Unable to open file.");
        return 1;
    }

    fprintf(file, "Hello from C File Handling!");

    fclose(file);

    printf("Data written successfully.");

    return 0;
}
