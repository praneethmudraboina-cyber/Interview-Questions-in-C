#include <stdio.h>
void main() 
{
    int raju,rani;
    printf("enter the rating of raju and rani\n");
    scanf("%d %d",&raju,&rani);
    if(raju<=2||rani<=2)
    {
        printf("0");
    }
    else if(raju>=8||rani>=8)
    {
        printf("2");
    }
    else
    {
        printf("1");
    }
    }
    
    