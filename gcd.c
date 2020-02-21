#include<stdio.h>
#include<stdlib.h>

void main ()
{
 //---------------------declaration section------------------------
  int a,b,result,choice;
  int gcd(int,int);
  
 //---------------------declaration section end--------------------         
  while(1)
  {
    printf("choice one of these :\n--------------------------------\n\tpress 1 for GCD\n\tpress 2 for exit\n\tEnter your choice:");
    scanf("%d",&choice);
   switch(choice)
   {
    case 1:printf("\n\tenter two values to find GCD :\n\t");  
           scanf("%d%d",&a,&b);
           result=gcd(a,b);
           printf("GCD of given values is %d\n-----------------------------------\n",result);
           break;
  
    case 2:exit(0);
    
    default :printf("error enter correct values");
             break;
   }//switch end
  }//while end
  
}//end main

//*******************************************sub-section*************************************

 int gcd(int a,int b)
 {
   if (a==b)
   {
     return a; 
   }//if end
   
   if (a==0)
   {
     return b; 
   }//if end
   
   if (b==0)
   {
     return a; 
   }//if end
   
   if (a>b)
   {
     gcd(a%b,b);
   }//if end
   
   else 
   {
     gcd(a,b%a); //b>a
   }//if end
 }
 //******************************************sub-section end*********************************
