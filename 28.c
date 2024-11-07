#include <stdio.h>
#include <ctype.h> // 引入 ctype.h 使用 isalpha 函數

char toggle_case(char character) {
    // 檢查是否為英文字母
    if (isalpha(character)) {
        // 若為大寫字母，轉小寫；若為小寫字母，轉大寫
        if (character >= 'A' && character <= 'Z') {
            return character + ('a' - 'A');
        } else if (character >= 'a' && character <= 'z') {
            return character - ('a' - 'A');
        }
    }
    return character; // 若非英文字母，返回原始字元
}

int main() {
    char input_char;

    while (1) {
        printf("請輸入一個英文字母 (輸入 -1 結束): ");
        scanf(" %c", &input_char);

        // 檢查是否輸入了 -1 來結束程式
        if (input_char == '-' || input_char == '1') {
            int next_char = getchar();
            if (input_char == '-' && next_char == '1') {
                printf("程式結束\n");
                break;
            }
            ungetc(next_char, stdin); // 將 next_char 放回輸入緩衝區
        }

        char output_char = toggle_case(input_char);
        printf("轉換後的字母為: %c\n", output_char);
    }

    return 0;
}
