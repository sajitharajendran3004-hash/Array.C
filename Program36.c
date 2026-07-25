#include <stdio.h>

int main() {
    int a[100], n, i, sum=0, total;

    printf("Enter value of N: ");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n-1);

    for(i=0;i<n-1;i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }

    total = n*(n+1)/2;

    printf("Missing Number = %d",total-sum);

    return 0;
}
