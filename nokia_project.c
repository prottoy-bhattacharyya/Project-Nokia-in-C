#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void loading()
{
    system("clear");
    printf("Loading...");
    for (int i = 0; i < 3; i++)
    {
        printf(" . ");
        fflush(stdout);
        sleep(1);
    }
}
void nameHeart()
{
    system("clear");
    printf("Name Heart\n\n");
    int i, j, n;
    char name[50];
    int len;

    printf("Enter your name: ");
    gets(name);

    printf("Enter value of n : ");
    scanf("%d", &n);
    len = strlen(name);
    for (i = n / 2; i <= n; i += 2)
    {
        for (j = 1; j < n - i; j += 2)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (i = n; i >= 1; i--)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }
        if (i == n)
        {
            for (j = 1; j <= (n * 2 - len) / 2; j++)
            {
                printf("*");
            }

            printf("%s", name);

            for (j = 1; j < (n * 2 - len) / 2; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (j = 1; j <= (i * 2) - 1; j++)
            {
                printf("*");
            }
        }

        printf("\n");
    }
}

void calculator()
{
    system("clear");
    printf("Calculator\n\n");
    char op;
    double first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    switch (op)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
    default:
        printf("operator is not correct\n");
        calculator();
    }
}
void menu()
{
    int choice;
    system("clear");
    printf("Menu\n\n");
    printf("1.calculator\n");
    printf("2.Tic Tac Toe\n");
    printf("3.Name in Heart\n");
    printf("0.Quit\n\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        calculator();
        break;
    // case 2:
    //     // ticTacToe();
    //     break;
    case 3:
        nameHeart();
        break;
    case 0:
        main();
    default:
        printf("wrong choice");
    }
}
void error()
{
    system("clear");
    printf("wrong password\n");
}
void password()
{
    system("clear");
    char name[50], pass[50];
    printf("Username: ");
    gets(name);
    printf("Password: ");
    gets(pass);
    if (strcmp(name, "pro") == 0 && strcmp(pass, "pro123") == 0)
    {
        menu();
    }
    else
    {
        error();
    }
}
int main()
{
    loading();
    password();
}
