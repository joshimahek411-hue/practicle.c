#include <stdio.h>

int main()
{
    char op;
    int a, b;

    printf("Enter first value: ");
    scanf("%d", &a);

    printf("Enter second value: ");
    scanf("%d", &b);

    printf("Enter operator (+,-,*,/): ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            printf("a+b = %d", a + b);
            break;

        case '-':
            printf("a-b = %d", a - b);
            break;

        case '*':
            printf("a*b = %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Error: Division by zero!\n");
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}