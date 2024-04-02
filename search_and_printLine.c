#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char word[50];
    char ch;
    char *filename = "/home/main/pro/dictionary.txt";
    char *search = "you";
    int count = 1;
    int pos[10];
    int pointer = 0;
    int loop;
    char line[256];
    int lineNum = 1;
    /*  open for writing */
    fp = fopen(filename, "r");

    do
    {
        ch = fscanf(fp, "%s", word);
        if (strcmp(word, search) == 0)
        {
            break;
        }
        else lineNum++;
    } while (ch != EOF);
    printf("%d\n",lineNum);
    if (lineNum > 4 )
        printf("'%s' not found in Dictionary\n", search, filename);
    else
    {
        while (fgets(line, sizeof line, fp) != NULL) /* read a line */
        {
            if (count == lineNum-2)
            {
                printf("\n %s means %s \n", search,line);
                fclose(fp);
                return 0;
            }
            else
            {
                count++;
            }
        }
    }
    fclose(fp);

    return 0;
}
