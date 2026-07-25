#include <stdio.h>

int main() {
    int a[100], temp[100];
    int n, i, k = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
        if(a[i] < 0)
            temp[k++] = a[i];

    for(i = 0; i < n; i++)
        if(a[i] >= 0)
            temp[k++] = a[i];

    printf("Result: ");
    for(i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}
