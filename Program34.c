#include <stdio.h>

int main() {
    int a[100], n, sum, i, j;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter required sum: ");
    scanf("%d",&sum);

    printf("Pairs:\n");

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[i]+a[j]==sum)
                printf("%d %d\n",a[i],a[j]);

    return 0;
}
