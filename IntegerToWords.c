#include <stdio.h>

int main() {
    char ones[][10]   = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    char teens[][10]  = {"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen",
                          "Sixteen","Seventeen","Eighteen","Nineteen"};
    char tens[][10]   = {"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0 || num > 9000) {
        printf("Number out of range (0-9000).\n");
        return 0;
    }

    if (num == 0) {
        printf("Equivalent in words: Zero\n");
        return 0;
    }

    int thousands = (num / 1000) % 10;
    int hundreds  = (num / 100) % 10;
    int tensDigit = (num / 10) % 10;
    int onesDigit = num % 10;

    printf("Equivalent in words: ");

    if (thousands > 0) {
        printf("%s Thousand ", ones[thousands]);
    }

    if (hundreds > 0) {
        printf("%s Hundred ", ones[hundreds]);
    }

    if (tensDigit == 1) {
        printf("%s", teens[onesDigit]);
    } else {
        if (tensDigit > 1) {
            printf("%s", tens[tensDigit]);
            if (onesDigit > 0) printf(" ");
        }
        if (onesDigit > 0 || tensDigit == 0) {
            if (!(tensDigit == 0 && (hundreds > 0 || thousands > 0) && onesDigit == 0)) {
                printf("%s", ones[onesDigit]);
            }
        }
    }

    printf("\n");
    return 0;
}