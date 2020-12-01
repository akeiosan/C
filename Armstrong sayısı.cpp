#include <stdio.h>
#include <conio.h>

//Armstrong sayýsý bulma 
main()
{
   

   
   int i,a,b,c,N;
  
  /* printf("n sayisini girin"); 
   scanf("%d",&N);            
     eðer N sayýsý girilmesi istenseydi burasý olacaktý                       */

   for(i=1;i<=999;i++) 
   {
    //Birler basamaðýný alýyoruz
    a = i / 100;
    //Onlar basamaðýný alýyoruz        
    b = (i%100)/10; 
    //Yüzler basamaðýný alýyoruz    
    c = i % 10;         

    if(a*a*a + b*b*b + c*c*c == i)
             printf("Cevap %d\n",i); 
   }
   getche();
}
