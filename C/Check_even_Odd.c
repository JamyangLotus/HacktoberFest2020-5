#include <stdio.h>
#include <stdlib.h>

int main()
{   int x;
    printf("Enter a number \n");
     scanf("%d",&x);
    printf((x%2 == 0)?"Number is even":"Number is odd");
    return 0;
}
