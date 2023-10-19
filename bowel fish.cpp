#include<stdio.h>

int main() {
    int i, num;

    printf("\nInput an integer:");
    scanf("%d", &num);

    for (i = 0; i <= 100; i++) {
        if (i%num == 3) {
            printf("%d\n", i);
        }
    }
    return 0;
}
