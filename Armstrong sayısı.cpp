#include <stdio.h>
#include <conio.h>

//Armstrong say�s� bulma 
main()
{
   

   
   int i,a,b,c,N;
  
  /* printf("n sayisini girin"); 
   scanf("%d",&N);            
     e�er N say�s� girilmesi istenseydi buras� olacakt�                       */

   for(i=1;i<=999;i++) 
   {
    //Birler basama��n� al�yoruz
    a = i / 100;
    //Onlar basama��n� al�yoruz        
    b = (i%100)/10; 
    //Y�zler basama��n� al�yoruz    
    c = i % 10;         

    if(a*a*a + b*b*b + c*c*c == i)
             printf("Cevap %d\n",i); 
   }
   getche();
}
