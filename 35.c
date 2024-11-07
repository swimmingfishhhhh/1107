#include <stdio.h>

unsigned long long int fibonacci(unsigned int n) {
    // 若 n 為 0 或 1，直接返回 n
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int a = 0, b = 1, fib;
    for (unsigned int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int main() {
    unsigned int n;
    printf("請輸入 n 值 (第 n 個 Fibonacci 數字): ");
    scanf("%u", &n);

    unsigned long long int result = fibonacci(n);
    printf("第 %u 個 Fibonacci 數字為: %llu\n", n, result);

    return 0;
}
