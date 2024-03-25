#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char word[50];
    char ch;
    char *filename = "/home/main/pro/somefile.txt";
    char *search = "hello";
    int count = 0;
    int pos[10];
    int pointer = 0;
    int loop;

    /*  open for writing */
    fp = fopen(filename, "r");

    do
    {
        ch = fscanf(fp, "%s", word);
        if (strcmp(word, search) == 0)
        {
            pos[count] = pointer;
            count++;
        }
        pointer++;
        // printf("%s",word);
    } while (ch != EOF);

    if (count == 0)
        printf("'%s' not found in %s\n", search, filename);
    else
    {
        printf("'%s' is found at -> ", search);
        for (loop = 0; loop < count; loop++)
        {
            printf("%d ", pos[loop]);
        }
        printf("positions.\n");
    }

    fclose(fp);

    return 0;
}
