#include <stdio.h>

int main() {
    int a[100], n, i, min, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = second = 99999;

    for(i = 0; i < n; i++) {
        if(a[i] < min) {
            second = min;
            min = a[i];
        }
        else if(a[i] < second && a[i] != min) {
            second = a[i];
        }
    }

    printf("Second Smallest = %d", second);

    return 0;
}
