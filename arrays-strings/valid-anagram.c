#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "listen";
    char t[] = "silent";
    int count[256] = {0};

    if (strlen(s) != strlen(t)) {
        printf("Not an Anagram\n");
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        count[(unsigned char)s[i]]++;
        count[(unsigned char)t[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not an Anagram\n");
            return 0;
        }
    }

    printf("Valid Anagram\n");

    return 0;
}