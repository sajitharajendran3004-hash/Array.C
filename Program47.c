#include <stdio.h>

int main() {
    int a[100], n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        count = 0;

        for(j = 0; j < n; j++)
            if(a[i] == a[j])
                count++;

        if(count > n / 2) {
            printf("Majority Element = %d", a[i]);
            return 0;
        }
    }

    printf("No Majority Element");

    return 0;
}
