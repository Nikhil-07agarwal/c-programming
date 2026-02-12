#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the a,b,c values:\n");
    scanf("%d %d %d", &a,&b,&c);
    int big,medium,small;
    if(a>b&&a>c)
    {
        big=a;
        if(b>c)
        {
            medium=b;
            small=c;
        }
        else
        {
            medium=c;
            small=b;
        }
    }
    else if(b>a&&b>c)
    {
        big=b;
        if(a>c)
        {
            medium=a;
            small=b;
        }
        else
        {
        	medium=b;
        	small=a;
		}
    }
    if(big-medium==medium-small)
    {
    	printf("true");
	}
	else
	{
	 printf("false");	
	}
	return 0;
}
