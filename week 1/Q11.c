#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[256] = {0};
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for(i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;

        if(freq[(unsigned char)str[i]] > 1) {
            printf("First repeating character: %c\n", str[i]);
            break;
        }
    }
    if(str[i] == '\0') {
        printf("No repeating characters\n");
    }
    return 0;
}
