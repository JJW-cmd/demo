#include <iostream>
using namespace std;

// 汉诺塔递归实现
void hanoi(int n, char source, char target, char auxiliary) {
    if (n == 1) {
        // 当只剩一个盘子时直接移动
        cout << "步骤 " << ++step << ": 将盘子从 " << source << " 移动到 " << target << endl;
        return;
    }
    
    // 先把n-1个盘子从源柱移动到辅助柱
    hanoi(n - 1, source, auxiliary, target);
    
    // 移动最底下的盘子到目标柱
    cout << "步骤 " << ++step << ": 将盘子从 " << source << " 移动到 " << target << endl;
    
    // 把n-1个盘子从辅助柱移动到目标柱
    hanoi(n - 1, auxiliary, target, source);
}

// 全局步数计数器
int step = 0;

int main() {
    int num;
    cout << "请输入盘子的数量：";
    cin >> num;
    hanoi(num, 'A', 'C', 'B');
    return 0;
}
