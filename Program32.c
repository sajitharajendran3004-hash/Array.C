#include <stdio.h>

int main() {
    int a[100], n, i, minDiff;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    minDiff = a[1] - a[0];

    for(i=1;i<n;i++){
        if(a[i]-a[i-1] < minDiff)
            minDiff = a[i]-a[i-1];
    }

    printf("Minimum Difference = %d",minDiff);

    return 0;
}
