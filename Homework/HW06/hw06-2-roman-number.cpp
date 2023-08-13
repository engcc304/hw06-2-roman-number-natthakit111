/*
    ผู้ใช้กรอกตัวเลขเข้ามาในระบบ และให้คุณแปลงตัวเลขดังกล่าวให้เป็นตัวเลขโรมัน
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)

    Test case:
        8
    Output:
        8 = VIII

    Test case:
        4
    Output:
        4 = IV

    Test case:
        514
    Output:
        514 = DXIV

    Test case:
        929
    Output:
        929 = CMXXIX

*/
#include <stdio.h>

// Arrays to store the Roman numerals and their corresponding values
char *romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int romanValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

void convertToRoman(int num) {
    printf("%d = ", num);

    for (int i = 0; i < sizeof(romanValues) / sizeof(romanValues[0]); i++) {
        while (num >= romanValues[i]) {
            printf("%s", romanNumerals[i]);
            num -= romanValues[i];
        }
    }

    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    convertToRoman(num);

    return 0;
}//end function
