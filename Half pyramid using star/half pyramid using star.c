#include <stdio.h>
int main()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i) //for(i=1; i<=rows; --i) to invert
    {
        for(j=1; j<=i; ++j)
        {
            printf("* "); //printf("%d ");, to print half pyramid a using numbers
        }
        printf("\n");
    }
    return 0;
}
