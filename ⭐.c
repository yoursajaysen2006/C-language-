#include <stdio.h>
int main() {
    int i, j, rows = 5;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int i, j, rows = 5;

    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int i, j, rows = 5;

    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int i, j, space, rows = 5;

    // Upper half
    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower half
    for (i = rows - 1; i >= 1; i--) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int i, j, rows = 5;

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
  