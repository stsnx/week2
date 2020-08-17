#include<stdio.h>
int main()
{
	char a[1000];
	int x,y=0;
	scanf("%[^\n]",a);
	for(int i=0;i<1000;i++)
	{
		if(a[i]==32||a[i]=='\0')
		{
			if(a[i]==32) y++;
			else 
			{ x=i;break; }
		}
		
	}
	printf("String Length = %d",x-y);
	return 0;
}
