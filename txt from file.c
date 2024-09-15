#include <stdio.h>
int main() {
    FILE *filePointer;
    char filename[100], data;
    printf("Enter the filename: ");
    scanf("%s", filename);
    filePointer = fopen(filename, "r");
    if (filePointer == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    printf("Contents of the file:\n");
    while ((data = fgetc(filePointer)) != EOF) {
        printf("%c", data);
    }
    fclose(filePointer);
    return 0;
}
