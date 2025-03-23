#include <stdio.h>

void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("将盘子从 %c 移动到 %c\n", from, to);
        return;
    }
    hanoi(n - 1, from, aux, to);
    printf("将盘子从 %c 移动到 %c\n", from, to);
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    printf("请输入盘子的数量: ");
    scanf("%d", &n);
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
