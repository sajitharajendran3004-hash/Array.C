#include <stdio.h>

int main() {
    int a[100], n, i;
    int total = 0, left = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }

    for(i = 0; i < n; i++) {
        total -= a[i];

        if(left == total) {
            printf("Equilibrium Index = %d", i);
            return 0;
        }

        left += a[i];
    }

    printf("No Equilibrium Index");

    return 0;
}
