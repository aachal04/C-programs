#include <stdio.h>
#include <string.h>

const char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
const char *tens[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
const char *teens[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

void print_number(int n) {
    if (n >= 1000) {
        printf("%s thousand ", ones[n / 1000]);
        n %= 1000;
    }
    if (n >= 100) {
        printf("%s hundred", ones[n / 100]);
        if (n % 100 != 0) {
            printf(" and ");
        }
        n %= 100;
    }
    if (n >= 20) {
        printf("%s ", tens[n / 10]);
        n %= 10;
    }
    if (n >= 11 && n <= 19) {
        printf("%s ", teens[n - 10]);
    } else {
        printf("%s", ones[n]);
    }
}

int main(int argc, char *argv[]) {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    print_number(num);
    return 0;
}
