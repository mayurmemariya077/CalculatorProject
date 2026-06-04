



#include <stdio.h>

void addition();
void subtraction();
void multiplication();
void division();
void modulus();

int main()
{
    int choice;

    do
    {
        printf("\n===== CALCULATOR MENU =====\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addition();
            break;

        case 2:
            subtraction();
            break;

        case 3:
            multiplication();
            break;

        case 4:
            division();
            break;

        case 5:
            modulus();
            break;

        case 0:
            printf("\nProgram Ended Successfully...\n");
            break;

        default:
            printf("\nInvalid Choice!\n");
        }

    } while (choice != 0);

    return 0;
}

void addition()
{
    int a, b;
    printf("\nEnter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Addition of %d and %d is %d\n", a, b, a + b);
}

void subtraction()
{
    int a, b;
    printf("\nEnter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Subtraction of %d and %d is %d\n", a, b, a - b);
}

void multiplication()
{
    int a, b;
    printf("\nEnter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Multiplication of %d and %d is %d\n", a, b, a * b);
}

void division()
{
    int a, b;
    printf("\nEnter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (b == 0)
    {
        printf("Division by zero is not possible.\n");
    }
    else
    {
        printf("Division of %d and %d is %.2f\n", a, b, (float)a / b);
    }
}

void modulus()
{
    int a, b;
    printf("\nEnter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (b == 0)
    {
        printf("Modulus by zero is not possible.\n");
    }
    else
    {
        printf("Modulus of %d and %d is %d\n", a, b, a % b);
    }
}