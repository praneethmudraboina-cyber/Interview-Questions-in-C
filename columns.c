#include<stdio.h>
void main()
{
    int row;
    int col;
    printf("enter no of rows and col:\n");
    scanf("%d",&row,&col);
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
    if(i==1||i==row||j==1||j==col)
    {
        printf("* ");
    }
    else
    {
        printf("  ");
    }
}
printf("\n");
}
}