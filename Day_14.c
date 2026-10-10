Day_14
#include <stdio.h>

int main() {
    int i, j;
    int height = 7; // Height of the letter T
    int width = 9;  // Width of the top bar of the letter T

    // Outer loop controls the rows (height)
    for (i = 1; i <= height; i++) {
        
        // Inner loop controls the columns (width)
        for (j = 1; j <= width; j++) {
            
            // Condition 1: Print the top horizontal bar on the first row
            // Condition 2: Print the vertical stem down the middle
            if (i == 1 || j == (width / 2) + 1) {
                printf("🌟 ");
            } else {
                printf("   "); // Empty space
            }
        }
        
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}