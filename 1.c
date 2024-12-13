#include<stdio.h>
#define MAX_DAY 10
#define MAX_DES 100
struct Day{
    char name[MAX_DAY];
    int date;
    char des[MAX_DES];
};
struct Day wc[7];
void read()
{
    for(int i=0;i<7;i++)
    {
        printf("enter the name of the day %d: ",i+1);
        scanf("%s",wc[i].name);
        
        printf("enter the date of the day %d: ",i+1);
        scanf("%d",&wc[i].date);

        printf("enter the activity details of the day %d: ",i+1);
        scanf("%s",wc[i].des);
    }
}
void display()
{
    printf("\n------CALENDAR-------\n");
    for(int i=0;i<7;i++)
    {
        printf("Day %d:%s,Date:%d,activity details:%s\n",i+1,wc[i].name,wc[i].date,wc[i].des);
    }
}
int main()
{
    printf("enter the details for each day\n");
    read();
    display();

    return 0;
}
