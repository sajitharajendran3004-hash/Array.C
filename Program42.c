#include <stdio.h>

int main() {
    int a[100], b[100], n, i, flag = 1;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter first array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter second array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Arrays are Equal");
    else
        printf("Arrays are Not Equal");

    return 0;
}
