#include <stdio.h>

int main() {
    
    char names[5][100];
    int i;

    for ( i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%99s", names[i]);  
    }

    printf("You entered the following names:\n");
    for ( i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}


