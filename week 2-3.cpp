#include<stdio.h>
int StrLen(char a[])
{
	int x;
	for(int i=0;i<1000;i++)
	{
		if(a[i]=='\0')
		{ x=i;break; }
		
	}
	return x;
}
int main()
{
	char a[1000],b[1000];
	scanf("%[^\n]",a);
	for(int i=0;i<StrLen(a);i++)
	{
		b[i]=a[i];
	}
	printf("Original String is = %s\n",a);
	printf("String Copied is = %s",b);
	return 0;
}
