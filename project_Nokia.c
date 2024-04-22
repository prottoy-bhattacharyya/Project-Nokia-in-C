/*Project Nokia
Created by Prottoy Vhattacharyya, Sanjid Hossain joy and Sanjita */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void clear (void);
void dictionary();
void loading();
void nameHeart();
void calculator();
void menu();
void error();
void password();

void clear (void)
{
    while ( getchar() != '\n' ); //clear input buffer
}
void dictionary(){
    clear();
    system("clear");
    system("cls");
    int MAX_LINE_LENGTH = 256;
    FILE *file;
    char filename[MAX_LINE_LENGTH];
    char word[MAX_LINE_LENGTH];
    char line[MAX_LINE_LENGTH];

    // Get word to search from user
    printf("Enter the word to search: ");
    if (scanf("%s", word) != 1) {
        printf("Error reading word.\n");
        return 1;
    }

    // Open the file for reading
    file = fopen("/home/main/pro/dictionary.txt", "r");
    if (file == NULL) {
        printf("Error opening file: %s\n", filename);
        return 1;
    }

    // Read the file line by line
    while (fgets(line, MAX_LINE_LENGTH, file)) {
        // Remove trailing newline (if present)
        line[strcspn(line, "\n")] = '\0';

        // Check if the word is present in the line
        if (strstr(line, word) != NULL) {
            printf("%s\n",line);
            // break;  
            // Print only the first occurrence (optional)
        }
    }
    // Close the file
    fclose(file);
    int choice;
    printf("\n\n1.search again: ");
    printf("\n0.menu\n");
    scanf("%d", &choice);
    switch (choice) {
    case 1: dictionary();
    case 0: menu();
    }
}

void loading()
{
    system("clear");
    system("cls");
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
    system("cls");
    clear();
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
    system("cls");
    clear();
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
    system("cls");
    printf("Menu\n\n");
    printf("1.calculator\n");
    printf("2.Tic Tac Toe\n");
    printf("3.Name in Heart\n");
    printf("4.Dictionary\n");
    printf("0.Quit\n\n");
    printf("Enter your choice: ");
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
    case 4:
        dictionary();
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
    system("cls");
    printf("wrong password\n");
    printf("Try again\n");
    for(int i=3;i>0;i--){
        printf("%d....",i);
        fflush(stdout);
        sleep(1);
    }
    password();
}
void password()
{
    system("clear");
    system("cls");
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
