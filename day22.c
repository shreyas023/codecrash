#include <stdio.h>

int main()
{
    int w,h,r;
    printf("Enter width : ");
    scanf("%d",&w);
    printf("Enter height : ");
    scanf("%d",&h);
    printf("Enter radius : ");
    scanf("%d",&r);
    if(w==h && r==h/2)
    {
        printf("Circle is completely incribed.");
    }
    else
    {
        printf("Circle is incompletely incribed.");
    }
    return 0;
}
