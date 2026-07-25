#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 1; i < n; i += 2)
        sum += a[i];

    printf("Sum = %d", sum);

    return 0;
}
