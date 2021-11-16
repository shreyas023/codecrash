#include <stdio.h>

int main()
{
    int x,y,z;
    printf("Enter 3 sides of triangle : \n");
    scanf("%d %d %d",&x,&y,&z);
    if((z*z)==(x*x)+(y*y))
    {
        printf("Given values are sides of right angled triangle.");
    }
    else
    {
        printf("Given values are not sides of right angled triangle.");
    }

    return 0;
}
