#include <stdio.h>

int main() {
    int a[100], n, i, temp[100], k=0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
        if(a[i]!=0)
            temp[k++]=a[i];

    while(k<n)
        temp[k++]=0;

    printf("Result: ");

    for(i=0;i<n;i++)
        printf("%d ",temp[i]);

    return 0;
}
