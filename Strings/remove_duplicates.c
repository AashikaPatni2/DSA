#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int visited[256] = {0};
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++) {

        if(visited[str[i]] == 0) {
            visited[str[i]] = 1;
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("After removing duplicates: %s", str);

    return 0;
}
