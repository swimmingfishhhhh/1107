#include <stdio.h>

int power(int base, int exponent) {
    // 終止條件：當 exponent 為 0 時，返回 1
    if (exponent == 0) {
        return 1;
    }
    // 遞迴步驟：base^exponent = base * base^(exponent - 1)
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;
    printf("請輸入基數 (base): ");
    scanf("%d", &base);
    printf("請輸入指數 (exponent): ");
    scanf("%d", &exponent);

    int result = power(base, exponent);
    printf("%d 的 %d 次方為: %d\n", base, exponent, result);

    return 0;
}
