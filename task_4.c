// TASK - 4

#include <stdio.h>
#include <stdlib.h>

void compressFile(const char *inputFile, const char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *out = fopen(outputFile, "w");

    if (!in || !out) {
        printf("Error: Could not open files.\n");
        return;
    }

    char current, prev;
    int count = 1;

    prev = fgetc(in);
    if (prev == EOF) {
        printf("Input file is empty.\n");
        fclose(in);
        fclose(out);
        return;
    }

    while ((current = fgetc(in)) != EOF) {
        if (current == prev) {
            count++;
        } else {
            fprintf(out, "%d%c", count, prev);
            count = 1;
            prev = current;
        }
    }
    fprintf(out, "%d%c", count, prev); // Write last sequence

    fclose(in);
    fclose(out);

    printf("File compressed and saved as '%s'\n", outputFile);
}

void decompressFile(const char *inputFile, const char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *out = fopen(outputFile, "w");

    if (!in || !out) {
        printf("Error: Could not open files.\n");
        return;
    }

    int count;
    char ch;

    while (fscanf(in, "%d%c", &count, &ch) == 2) {
        for (int i = 0; i < count; i++) {
            fputc(ch, out);
        }
    }

    fclose(in);
    fclose(out);

    printf("File decompressed and saved as '%s'\n", outputFile);
}

int main() {
    int choice;
    char inputFile[100], outputFile[100];

    printf("Run-Length Encoding (RLE) Tool\n");
    printf("1. Compress File\n");
    printf("2. Decompress File\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter input file name: ");
    scanf("%s", inputFile);

    printf("Enter output file name: ");
    scanf("%s", outputFile);

    if (choice == 1) {
        compressFile(inputFile, outputFile);
    } else if (choice == 2) {
        decompressFile(inputFile, outputFile);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
