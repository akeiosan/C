#include <stdio.h>

//HESAP MAK�NES� SW�TCH �LE 

main()
{

  
 float sayi1,sayi2,sonuc;
 char islem;
 
 
 printf("islem yapmak istedi�iniz sayilari girin,(sayi bo�luk sayi)");
 scanf("%f %f",&sayi1,&sayi2);
 printf("islem yapmak istedi�iniz i�areti giriniz(+,-,*,/)");
 scanf("%c", &islem);
 
 islem=getchar();
 
 
 switch(islem)
  {
   
   case ('+'):
   	printf("%f - %f=%f",sayi1,sayi2,sayi1+sayi2);
   	
	   
    break;
   
   case('-'):
   printf("%f - %f= %f",sayi1,sayi2,sayi1 - sayi2);
	break;
	
   case('*'):
   printf("%f * %f=%f",sayi1,sayi2,sayi1*sayi2);
	 break;
	
   case('/'):
    printf("%f / %f=%f",sayi1,sayi2,sayi1/sayi2);
	
    default:
    	
    printf("bi sikinti var galiba(HATA)");
	break;	  	 
 
 
  }
 
  

}
