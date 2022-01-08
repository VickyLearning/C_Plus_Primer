#include <iostream>
/**
 * 功能：计算从1到10的累加结果
*/

int main()
{
    int sum = 0, val = 1;
    while (val <= 10) { //只要val的值小于等于10， while循环就会持续执行
        sum += val;   // 将sum + val赋值给sum
        ++val;  // 将val加1
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}
