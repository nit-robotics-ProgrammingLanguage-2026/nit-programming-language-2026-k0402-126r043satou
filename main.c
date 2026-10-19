
#include <stdio.h>

int main(void) {
    /* 課題0402: 入力されたdoubleのデータを1.08倍した結果を，小数点以下2桁として表示するプログラムを書け． */
    double d;
    double result;

    scanf("%lf", &d);
    result = d * 1.08;
    printf("%.2f\n", result);

    return 0;
}
