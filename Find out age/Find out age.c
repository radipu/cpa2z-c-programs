#include<stdio.h>
#include<conio.h>

int y1,y2,y3,m1,m2,m3,d1,d2,d3;

void year(int y1, int m1, int d1, int y2, int m2, int d2);
main()
{
    printf("Please enter the current date: \n");
    printf("Enter the current year: ");
    scanf("%d", &y1);
    printf("Enter the current month: ");
    scanf("%d", &m1);
    printf("Enter todays date: ");
    scanf("%d", &d1);
    printf("\nNow we need your birth date: \n");
    printf("\nEnter your birth year: ");
    scanf("%d", &y2);
    printf("Enter your birth month: ");
    scanf("%d", &m2);
    printf("Enter your birth day: ");
    scanf("%d", &d2);
    year(y1,m1,d1,y2,m2,d2);
    getch();
}

void year(int y1, int m1, int d1, int y2, int m2, int d2)

{
    if(d1<d2)
    {
    m1=m1-1;
    d1=d1+30;
    }
    if(m1<m2)
    {
    y1=y1-1;
    m1=m1+12;
    }
    if(y1<y2)
    {
    exit(0);
    }
    d3=d1-d2;
    m3=m1-m2;
    y3=y1-y2;
    printf("\nYour current age is: \n%d years %d months %d days ",y3,m3,d3);
    {
        if(m1==m2 && d1==d2)
            printf("\n\nMany Many Happy Returns of the Day\n Happy Birthday To You");
    }
}
