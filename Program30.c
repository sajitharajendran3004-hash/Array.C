#include <stdio.h>

int main() {
    int a[100], n, r, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter rotations: ");
    scanf("%d", &r);

    for(j = 1; j <= r; j++) {
        temp = a[n - 1];

        for(i = n - 1; i > 0; i--)
            a[i] = a[i - 1];

        a[0] = temp;
    }

    printf("Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
