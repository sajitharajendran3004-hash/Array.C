#include <stdio.h>

int main() {
    int a[100], n, i, maxDiff;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    maxDiff = a[1] - a[0];

    for(i = 1; i < n; i++) {
        if(a[i] - a[i - 1] > maxDiff)
            maxDiff = a[i] - a[i - 1];
    }

    printf("Maximum Difference = %d", maxDiff);

    return 0;
}
