#include <stdio.h>

int main()
{
    int a;
    printf("Enter your scholarship rank :");
    scanf("%d",&a);
    if(a>0 && a<=50)
    {
        printf("\nCongrats. You get 100 percent scholarship.");
    }
    else if(a>=51 && a<=100)
    {
        printf("\nYou get 50 percent scholarship.");
    }
    else
    {
        printf("\nYou don't get any scholarship.");
    }
    return 0;
}
