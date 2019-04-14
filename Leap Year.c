#include <stdio.h>
int main()
    //I added a comment for my tutorial purpose
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(year%4==0 && year%400==0)
        printf("%d is a leap year.", year);
    else if(year%4 == 0 && year%100 != 0)
            printf("%d is a leap year.", year);
        else
            printf("%d is NOT a leap year.", year);
    return 0;
}
/*Edited version_0.2*/
