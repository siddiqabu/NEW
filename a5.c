#include <stdio.h>
#include<string.h>
#include<conio.h>
int main() 
{
	int i,j,temp=0;
	char s1[100];
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		for(j=i+1;s1[j]!='\0';j++)
		{
			if(s1[i]>s1[j])
			{
				temp=s1[i];
				s1[i]=s1[j];
				s1[j]=temp;
			}
		}
	}
	puts(s1);
  return 0;
}
