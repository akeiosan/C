#include <stdio.h>

//HESAP MAKÝNESÝ SWÝTCH ÝLE 

main()
{

  
 float sayi1,sayi2,sonuc;
 char islem;
 
 
 printf("islem yapmak istediðiniz sayilari girin,(sayi boþluk sayi)");
 scanf("%f %f",&sayi1,&sayi2);
 printf("islem yapmak istediðiniz iþareti giriniz(+,-,*,/)");
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
