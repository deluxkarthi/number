#include <stdio.h>
#include<conio.h>
void main()
{
    int m, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&m);

    i = 1;
    while ( i <=m )
    {
        sum += i;
        ++i;
    }

    printf("Sum = %d",sum);

    getch ();
}
