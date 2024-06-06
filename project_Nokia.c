#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

void clear(void);
void dictionary();
void loading();
void nameHeart();
void calculator();
void menu();
void error();
void password();
void clk();
void timer();
void stopWatch();
void mathGame();
void quit();
int errC = 0;
void clear(void)
{
    // while (getchar() != '\n'); // clear input buffer
    fflush(stdin);
}

void quit(){
    system("clear");
    system("cls");
    printf("========Successfully Exited========\n");
    exit(0);
}
void mathGame()
{
    system("clear");
    system("cls");
    clear();
    system("Color 0B");
    printf("Math Game: \n\n");
    int a, b, c, d, z, m, temp;
    time_t t;
    srand((unsigned)time(&t));
    while (1)
    {
        z = rand() % 5 + 1;
        a = rand() % 50 + 1;
        b = rand() % 50 + 1;
        if (a < b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (z == 1)
        {
            c = a + b;
            printf("%d + %d = ", a, b);
            if (scanf("%d", &d) == 0)
            {
                clear();
                menu();
            }
            else if (c == d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if (z == 2)
        {
            c = a - b;
            printf("%d - %d = ", a, b);
            if (scanf("%d", &d) == 0)
            {
                clear();
                menu();
            }
            else if (c == d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if (z == 3)
        {
            c = a * b;
            printf("%d * %d = ", a, b);
            if (scanf("%d", &d) == 0)
            {
                clear();
                menu();
            }
            else if (c == d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
        else if (z == 4)
        {
            if (a % b != 0)
            {
                m = a % b;
                a -= m;
            }
            c = a / b;
            printf("%d / %d = ", a, b);
            if (scanf("%d", &d) == 0)
            {
                clear();
                menu();
            }
            else if (c == d)
            {
                printf("Correct answer\n");
            }
            else
            {
                printf("Incorrect answer\nThe answer is %d\n", c);
            }
        }
    }
}

void stopWatch()
{
    system("clear");
    system("cls");
    clear();
    char input;
    int run = 0;
    double start, stop;
    printf("press enter to start/stop the timer\nAnd 0 to go back\n");
    while (1)
    {

        input = getchar();
        if (input == '\n' && run == 0)
        {
            printf("timer started...");
            start = clock() / (double)CLOCKS_PER_SEC;
            run = 1;
        }
        else if (input == '\n' && run == 1)
        {
            stop = clock() / (double)CLOCKS_PER_SEC;
            printf("timer stoped\n");
            printf("%lf seconds\n", (stop - start));
            run = 0;
        }
        else if (input == '0')
            break;
    }
    clk();
}
void timer()
{
    system("clear");
    system("cls");
    clear();
    int end;
    printf("input time in seconds :");
    scanf("%d", &end);
    for (int i = end; i >= 0; i--)
    {
        printf("%d ", i);
        sleep(1);
    }
    printf("\n%d seconds has passed\n", end);
    printf("\n1.reset\n0.go back");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        timer();
    case 0:
        clk();
    }
}
void clk()
{
    system("clear");
    system("cls");
    system("Color 0B");
    // date and time
    time_t t;
    time(&t);
    printf("%s", ctime(&t));
    printf("\n\n");
    printf("1.stop Watch\n");
    printf("2.Timer\n");
    printf("0.Menu\n\n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        stopWatch();
        break;
    case 2:
        timer();
        break;
    case 0:
        menu();
        break;
    }
}

void dictionary()
{
    clear();
    system("clear");
    system("cls");
    system("Color 0C");
    int MAX_LINE_LENGTH = 256;
    FILE *file;
    char filename[MAX_LINE_LENGTH];
    char word[MAX_LINE_LENGTH];
    char line[MAX_LINE_LENGTH];

    // Get word to search from user
    printf("Enter the word to search: ");
    if (scanf("%s", word) != 1)
    {
        printf("Error reading word.\n");
        sleep(2);
        dictionary();
    }

    // Open the file for reading
    file = fopen("C:/sdp/dictionary.txt", "r");
    // file = fopen("C:/Users/BUBT/Desktop/pro/dictionary.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file: %s\n", filename);
        sleep(2);
        dictionary();
    }

    // Read the file line by line
    while (fgets(line, MAX_LINE_LENGTH, file))
    {
        // Remove trailing newline (if present)
        line[strcspn(line, "\n")] = '\0';

        // Check if the word is present in the line
        if (strstr(line, word) != NULL)
        {
            printf("%s\n", line);
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
    switch (choice)
    {
    case 1:
        dictionary();
    case 0:
        menu();
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
    system("Color 0D");
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
    int choich;
    printf("\n\n1.again\n0.menu\n");
    scanf("%d", &choich);
    switch (choich)
    {
    case 1:
        nameHeart();
    case 0:
        menu();
    }
}

void calculator()
{
    system("clear");
    system("cls");
    clear();
    system("Color 0E");
    printf("Calculator\n\n");
    double a, c;
    char op;
    while ((scanf("%lf %c %lf", &a, &op, &c))!=0){
        switch(op){
            case '+': printf("%.2lf %c %.2lf = %.2lf\n",a,op,c, a+c); break;
            case '-': printf("%.2lf %c %.2lf = %.2lf\n",a,op,c, a-c); break;
            case '*': printf("%.2lf %c %.2lf = %.2lf\n",a,op,c, a*c); break;
            case '/': printf("%.2lf %c %.2lf = %.2lf\n",a,op,c, a/c); break;
            case '%': printf("%.2lf %c %.2lf = %d\n",a,op,c, (int)((int)a%(int)c)); break;
            case '^': printf("%.2lf %c %.2lf = %.2lf\n",a,op,c, pow(a,c)); break;
            case 'p': printf("%.2lf %c %.2lf = %.2lf\n",a,op,c, (tgamma(a+1))/(tgamma(a-c+1)*tgamma(c+1))); break;
            case 'c': printf("%.2lf %c %.2lf = %.2lf\n",a,op,c, (tgamma(a+1))/(tgamma(a-c+1))); break;
            case '!': printf("%.2lf %c = %.2lf\n",a,op, (tgamma(a+1))); break;
            default: printf("Invalid operator\n");
        }
    }
    int choich;
    printf("\n\n1.again\n0.menu\n");
    clear();
    scanf("%d", &choich);
    switch (choich)
    {
    case 1:
        calculator();
    case 0:
        menu();
    }
}
void menu()
{
    int choice;
    system("clear");
    system("cls");
    system("Color 0A");
    printf("Main Menu\n\n");
    printf("1.calculator\n");
    printf("2.Clock\n");
    printf("3.Name in Heart\n");
    printf("4.Dictionary\n");
    printf("5.Math Game\n");
    printf("0.Quit\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        calculator();
        break;
    case 2:
        clk();
        break;
    case 3:
        nameHeart();
        break;
    case 4:
        dictionary();
        break;
    case 5:
        mathGame();
        break;
    case 0:
        quit();
    default:
        printf("wrong choice");
        sleep(2);
        menu();
    } 
}
void error()
{
    errC++;
    if(errC == 3){
        system("clear");
        system("cls");
        printf("Wrong password entered 3 times");
        sleep(2);
        exit(0);
    }

    system("clear");
    system("cls");
    system("Color 0C");
    printf("wrong password\n");
    printf("Try again\n");
    for (int i = 3; i > 0; i--)
    {
        printf("%d....", i);
        fflush(stdout);
        sleep(1);
    }
    password();
}
void password()
{
    system("clear");
    system("cls");
    system("Color 0E");
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
        Beep(1000,300);
        error();
    }
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    loading();
    password();
}
