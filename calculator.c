#include <stdio.h>

int main() {
    char operator;
    float num1, num2, answer;
    printf("Choose Operation(+, -, *, /): ");
    scanf("%c", &operator);
    if(operator != '+' || operator != '-' || operator != '*' || operator != '/') {
        printf("Invalid input, please input any of +, -, * or /\n");
        return 1;
    }
    printf("First Number: ");
    scanf("%f", &num1);
    printf("Second Number: ");
    scanf("%f", &num2);
    if (operator == '+') {
        answer = num1 + num2;
        printf("Answer: %.3f", answer);
    }
    else if (operator == '-') {
        answer = num1 - num2;
        printf("Answer: %.3f", answer);
    }
    else if (operator == '*') {
        answer = num1 * num2;
        printf("Answer: %.3f", answer);
    }
    else if (operator == '/') {
        answer = num1 / num2;
        printf("Answer: %.3f", answer);
    }

    return 0;
}