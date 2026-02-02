#include <stdio.h>
void main() 
{
    int cigars;
    int weekend;
    printf("enter the cigars\n");
    scanf("%d",&cigars);
    printf("enter the 1for weekend\t 0 for not weekend\n");
    scanf("%d",&weekend);
    if(weekend==1)
{
    if(cigars>=40)
{
    printf("true");
}
else
{
    printf("flase");
}
}
else
{
    if(cigars>=40&& cigars<=60)
    {
        printf("true");
    }
    else
    {
        printf("flase");
    }
}
}