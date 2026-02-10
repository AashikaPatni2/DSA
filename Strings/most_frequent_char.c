#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline
    str[strcspn(str, "\n")] = '\0';

    // Count frequency
    for(i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    // Find maximum
    for(i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            maxChar = i;
        }
    }

    printf("Most frequent character: %c (%d times)", maxChar, max);

    return 0;
}
