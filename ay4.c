#include <stdio.h>
#include<conio.h>
int main() 
{	
   int n1,n2;
   char c;

       scanf("%d %c %d",&n1,&c,&n2);
       if(c=='/')
       {
           printf("%d\n",(n1/n2));
       }
       else
       {
           printf("%d\n",(n1%n2));
       }
}
