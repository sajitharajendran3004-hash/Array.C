#include <stdio.h>

int main() {
    int a[100], n, i, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            printf("Index = %d", i);
            return 0;
        }
    }

    printf("Element not found");

    return 0;
}
