#include <stdio.h>

void mauro(int height);

int main() {
    int height = 0;
    printf("Height --> ");
    scanf("%d", &height);
    mauro(height);
    
    return 0;
}

void mauro(int height) {
    int width = 1;
    int spaces = height-1;
    for (int i = 0; i < height; ++i) {
        for (int space = 0; space < spaces; ++space) {
            printf(" ");
        }
        for (int x = 0; x < width; ++x) {
            printf("#");
        }
        ++width;
        --spaces;
        printf("\n");
    }
}
