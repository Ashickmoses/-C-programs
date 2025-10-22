#include <stdio.h>
int main() {
    int n, i, key, lastIndex = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            lastIndex = i;
        }
    }
    if(lastIndex != -1)
        printf("Last occurrence at index: %d\n", lastIndex);
    else
        printf("-1\n");

    return 0;
}
