
#include <stdio.h>

int main(void) {
    int i;
    double d;
    double result;

    scanf("%d", &i);       // 整数を入力
    scanf("%lf", &d);      // double型の数値を入力

    result = d * 1.08;     // 1.08倍する
    printf("%.2f\n", result);

    return 0;
}
