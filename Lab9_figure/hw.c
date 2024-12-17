#include <stdio.h>

int main() {
    int r;
    char symbol;
    printf("Введите радиус окружности R: ");
    scanf("%d", &r);

    printf("Введите символ для рисования: ");
    scanf(" %c", &symbol);

    int height = r; // высота
    int width = 2 * r; // основание треуг.

    for (int i = 0; i <= height - 1; i++) {
        for (int j = 0; j <= width; j++) {
            if (j == 0 || i == height || j == (width * i) / height) {
                printf("%c", symbol);
            }
            else if (i < height && j < (width * i) / height) {
                printf("%c", symbol);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}