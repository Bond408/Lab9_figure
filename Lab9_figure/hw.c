#include <stdio.h>

int main() {
    int r;
    char symbol;
    printf("������� ������ ���������� R: ");
    scanf("%d", &r);

    printf("������� ������ ��� ���������: ");
    scanf(" %c", &symbol);

    int height = r; // ������
    int width = 2 * r; // ��������� �����.

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