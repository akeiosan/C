#include<stdio.h>
int main()
{
 int a,b,c;
 printf("kenarlarý girin");
 scanf("%d%d%d",&a,&b,&c);
 if((a==b)&&(b==c)&&(a==c))
 {
  printf("Bu ucgen eskenardir");
 }
 else if((a!=b)&&(b!=c)&&(a!=c))
 {
  printf("Bu ucgen cesitkenardir");
 }
 else
 {
  printf("Bu ucgen ikizkenardir");
 }
 return 0;
}
