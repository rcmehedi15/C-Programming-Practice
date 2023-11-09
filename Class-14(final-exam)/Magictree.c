#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Calculate the number of lines for the triangle
    int line = (N + 1) / 2 + 5;
    
    // Initialize star and space variables
    int star = 1;
    int space = line - 1;

    // Print the top part of the tree (triangle)
    for (int i = 0; i < line; i++) {
        // Print spaces
        for (int j = 0; j < space; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j < star; j++) {
            printf("*");
        }
        printf("\n");
        // Increase stars and decrease spaces for the next line
        star += 2;
        space--;
    }

    // Calculate the number of spaces for the base of the tree
    space = ((line * 2) - 1 - N) / 2;

    // Print the base of the tree
    for (int i = 0; i < 5; i++) {
        // Print spaces before stars
        for (int j = 0; j < space; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j < N; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
