#include <stdio.h>

int main() {
    int size = 5;

    // Outer loop for rows
    for (int i = 0; i < size; i++) {
        
        // Inner loop for columns
        for (int j = 0; j < size; j++) {
            
            // Print '*' for the top row, bottom row, and the diagonal line
            if (i == 0 || i == size - 1 || j == size - i - 1) {
                printf("* ");
            } else {
                printf("  "); // Spaces for empty areas
            }
        }
        printf("\n"); // New line after each row
    }

    return 0;
}