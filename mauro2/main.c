#include <stdio.h>

void double_mauro(int height);

int main() {
    int height = 0;
    printf("Height --> ");
    // receive stair height and store it into height variable.
    scanf("%d", &height);
    double_mauro(height);
}

void double_mauro(int height) {
    // The figure will be drawn from top to bottom.
    // current width of the stair.
    int width = 1;
    // amount of spaces before each character.
    int spaces = height - 1;
    for (int i = 0; i < height; ++i) {
        for (int space = 0; space < spaces; ++space) {
            printf(" ");
        }

        for (int base = 0; base < width; ++base) {
            printf("#");
            if (base == width-1) {
                printf(" ");
                for (int right_base = 0; right_base < width; ++right_base) {
                    printf("#");
                }
            }
        }

        --spaces;
        ++width;
        printf("\n");
    }
}
