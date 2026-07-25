#include <stdio.h>

int main() {
    int a[100], n, pos, value, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter value: ");
    scanf("%d", &value);

    for(i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = value;
    n++;

    printf("Updated Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
