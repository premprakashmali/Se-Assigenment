#include<stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n],i; 
    
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
    printf("Sum of the elements is: %d\n", sum);
    
    return 0;
}


