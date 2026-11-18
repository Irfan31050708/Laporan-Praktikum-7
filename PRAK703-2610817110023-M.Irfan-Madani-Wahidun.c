#include <stdio.h>

int main() {
    char sentence[200];
    int i, vocal = 0, consonant = 0;
    char c;

    printf("Kalimat : ");
    fgets(sentence, 200, stdin);

    for (i = 0; sentence[i] != '\0'; i++) {
        c = sentence[i];

        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            vocal++;
        } else if (c >= 'a' && c <= 'z') {
            consonant++;
        }
    }

    printf("Jumlah Vokal : %d\n", vocal);
    printf("Jumlah Konsonan : %d\n", consonant);

    return 0;
}
