#include <stdio.h>

int main() {
    int a[100], n, i, j, leader;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Leaders: ");

    for(i = 0; i < n; i++) {
        leader = 1;

        for(j = i + 1; j < n; j++) {
            if(a[i] < a[j]) {
                leader = 0;
                break;
            }
        }

        if(leader)
            printf("%d ", a[i]);
    }

    return 0;
}
