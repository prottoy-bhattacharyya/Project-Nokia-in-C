#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char word[50];
    char ch;
    char *filename = "C:/Users/User/Desktop/pro/dictionary.txt";
    char *search = "you";
    int count = 1;
    int pos[10];
    int pointer = 0;
    int loop;
    char line[256];
    int lineNum=0;
    /*  open for writing */
    fp = fopen(filename, "r");

    do
    {
        ch = fscanf(fp, "%s", word);
        if (strcmp(word, search) == 0)
        {
            // pos[count] = pointer;
            // count++;
            break;
        }
        // pointer++;
        lineNum++;
    } while (ch != EOF);
printf("line number %d", lineNum);
    if (lineNum > 4 )
        printf("'%s' not found in %s\n", search, filename);
    else
    {
       /* or other suitable maximum line size */
        while (fgets(line, sizeof line, fp) != NULL) /* read a line */
        {
            if (count == lineNum)
            {
                // use line or in a function return it
                //             //in case of a return first close the file with "fclose(file);"
                printf("\n str %s ", line);
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
