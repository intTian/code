#include <iostream>
using namespace std;
/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int addition(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int a = 10;
    int b = 20;
    int c = addition(a, b);
    cout << c << endl;
    return 0;
}
// F5 启动调试ss
//  在 Visual Studio Code (VS Code) 中，你可以通过以下几种方式来放大代码视图：
//  1. 使用快捷键放大/缩小
//  放大：按 Ctrl + + （按住 Ctrl 键并按下加号键）。
//  缩小：按 Ctrl + - （按住 Ctrl 键并按下减号键）。
//  恢复默认缩放：按 Ctrl + 0 （按住 Ctrl 键并按下数字0键）
