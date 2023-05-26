#include <stdio.h>
#include <ctype.h>

int countVowels(char *line) {
    int vowels = 0;

    while (*line != '\0') {
        char c = tolower(*line);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            vowels++;
        }

        line++;
    }

    return vowels;
}

int main() {
    int numTestCases;

    scanf("%d", &numTestCases);

    // Clear the input buffer
    while (getchar() != '\n');

    for (int i = 0; i < numTestCases; i++) {
        char line[100];
        fgets(line, sizeof(line), stdin);

        int vowels = countVowels(line);

        printf("%d ", vowels);
    }

    printf("\n");

    return 0;
}
