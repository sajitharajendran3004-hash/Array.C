#include <stdio.h>

int main() {
    int a[100], n, i, j;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("First Repeated = %d",a[i]);
                return 0;
            }
        }
    }

    printf("No Repeated Element");

    return 0;
}
