 #include <stdio.h>

int main() {
    int i, j;
    int rows = 5;

    // Outer loop controls the rows
    for (i = 1; i <= rows; i++) {
        
        // Inner loop prints numbers from 1 up to the current row number
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        printf("\n");
    }

    return 0;
}