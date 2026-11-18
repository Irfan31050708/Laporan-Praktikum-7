#include <stdio.h>

int main() {
    char word[100];
    int i, length = 0, palindrom = 1;

    scanf("%s", word);

    while (word[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            palindrom = 0;
        }
    }

    if (palindrom == 1) {
        printf("Kata '%s' adalah palindrom\n", word);
    } else {
        printf("Kata '%s' bukan palindrom\n", word);
    }

    return 0;
}