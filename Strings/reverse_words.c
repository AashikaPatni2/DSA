#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, start, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    for(i = len - 1; i >= 0; i--) {

        if(str[i] == ' ' || i == 0) {

            if(i == 0)
                start = 0;
            else
                start = i + 1;

            end = start;

            while(str[end] != ' ' && str[end] != '\0') {
                printf("%c", str[end]);
                end++;
            }

            printf(" ");
        }
    }

    return 0;
}