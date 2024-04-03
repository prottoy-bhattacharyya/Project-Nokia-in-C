#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
void stopWatch(){
    system("clear");
    while ( getchar() != '\n' );
    char input;
    int run=0;
    double start,stop;
    printf("press enter to start/stop the timer\nAnd 0 to go back\n");
    while(1){
        
        input = getchar();
        if(input == '\n' && run == 0){
            printf("timer started...");
            start = clock()/(double)CLOCKS_PER_SEC;
            run =1;
        }
        else if(input == '\n' && run == 1){
            stop = clock()/(double)CLOCKS_PER_SEC;
            printf("timer stoped\n");
            printf("%lf seconds\n",(stop-start));
            run = 0;
        }
        else if(input == '0') break;
    }
    clk();
}
void timer(){
    system("clear");
    while ( getchar() != '\n' );
    int end;
    printf("input time in seconds :");
    scanf("%d",&end);
    for(int i=end;i>=0;i--){
        printf("%d ",i);
        sleep(1);
    }
    printf("\n%d seconds has passed\n",end);
    printf("\n1.reset\n0.go back");
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1: timer();
        case 0: clk();
    }
}
void clk(){
    system("clear");
    // date and time
    time_t t;
    time(&t);
    printf("%s", ctime(&t));
    printf("\n\n");
    printf("1.stop Watch\n");
    printf("2.Timer\n");
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1: stopWatch();break;
        case 2: timer(); break;

    }
}
int main(){
    clk();
}
