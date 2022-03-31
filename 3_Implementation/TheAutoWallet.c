#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>
#include<time.h>
 



struct library
{
char car_name[30];
char owner[30];
int KM,n,Z;
 float price,p, R, r,d,X, emi;
};

int main()
{

char nam;
 printf("ENTER USER  NAME ");
 scanf("%s",&nam);
 srand(time(0));
 for(int i = 0; i<1; i++)
 printf("YOUR REFERENCE  NUMBER ");
 printf(" %d ", rand());

struct library l[100];
char ow_nm[30],cr_nm[30];
int i,j, keepcount;
i=j=keepcount = 0;

int K,g, keepccount;
K=g=keepccount = 0;
char ml_nm[30],kl_nm[30];
int f,e, keepcccount;
f=e=keepcccount = 0;

int s,h,Z, keep_count;
s=h=keep_count = 0;
while(g!=6)   
 while(j!=6)
 while(e!=6)   
while(h!=6) 

{
    
printf("\n\n1. Add CAR information\n2. Display CAR information\n");
printf("3. List all CAR of given owner\n");
printf("4. List the information of specified car\n");
printf("5. List the count of cars in the garage\n");
printf("6. See car information");
printf("\n7. Exit");

printf ("\n\nEnter one of the above : ");
scanf("%d",&j);

switch (j)
{

case 1:  

printf ("Enter car name = ");
scanf ("%s",l[i].car_name);

printf ("Enter owner name = ");
scanf ("%s",l[i].owner);

printf ("Enter km done = ");
scanf ("%d",&l[i].KM);

printf ("Enter price = ");
scanf ("%f",&l[i].price);
float p, R, r, d,X,emi;
 int n,Y;


 printf("Enter principal amount: ");
 scanf("%f", &p);
 printf("Enter annual interest rate: ");
 scanf("%f", &R);
 printf("Enter number of months: ");
 scanf("%d", &n);


 r = R/(12*100);

 
 emi = p * r * pow(1+r,n)/(pow(1+r,n)-1);

 printf("Monthly EMI: %f", emi);


keepcount++;

break;
case 2:
printf("you have entered the following information\n");
for(i=0; i<keepcount; i++)
{
printf ("car name = %s",l[i].car_name);

printf ("\t owner name = %s",l[i].owner);

printf ("\t  km done = %d",l[i].KM);

printf ("\t  price = %f",l[i].price);
}
break;

case 3:
printf ("Enter owner name : ");
scanf ("%s",ow_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(ow_nm, l[i].owner) == 0)
printf ("%s %s %d %f",l[i].car_name,l[i].owner,l[i].KM,l[i].price);
}
break;

case 4:
printf ("Enter car name : ");
scanf ("%s",cr_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(cr_nm, l[i].car_name) == 0)
printf ("%s \t %s \t %d \t %f",l[i].car_name,l[i].owner,l[i].KM,l[i].price);
}
break;

case 5:
printf("\n No of cars in garage : %d", keepcount);
break;
case 6:

printf("\n\nSELECT CAR OR MOTORSPORT");
printf("\n\n01. BMW \n22. MOTORSPORT\n");
printf("\n3. Exit");
printf ("\n\nEnter one of the above : ");
scanf("%d",&g);

     switch(g)
     {
         case 01:
          printf("\n\nBMW. SELECT MODEL");
          printf("\n\n11. X3 \n12. X4\n");
          printf("13. X6\n");
          printf("14. M5\n");
          printf("15. M4\n");
          printf("16. M8");
          printf("\n17. Exit");
         printf ("\n\nEnter one of the above : ");
          scanf("%d",&h);
    switch(h)
    {
        case 11:
             
             printf("\nMODEL       X3 ");
             printf("\nPOWER       250 HP ");
             printf("\nFUEL        PETROL ");
             printf("\nMANU        2022 ");
             printf("\nTOPSPEED    245 KMP");
             X =5000000;
             printf("\n PRICE      %0.2f",X);
             printf("\n DOWNPAYMENT :%d",Y);
             scanf("%d",&Y);
              d = X-Y;
              printf("\n  Enter price [principal amount]: %0.2f",d);
              getch();
             
              printf("\nEnter annual interest rate: ");
              scanf("%f", &R);
              printf("\nEnter number of months: ");
             scanf("%d", &n);


 r = R/(12*100);

 
 emi = d * r * pow(1+r,n)/(pow(1+r,n)-1);

 printf("Monthly EMI: %f", emi);
 
             
             break;
             case 12:
             printf("\nMODEL       X4 ");
             printf("\nPOWER       250 HP ");
             printf("\nFUEL        PETROL ");
             printf("\nMANU        2022 ");
             printf("\nTOPSPEED    245 KMP");
             
             X =5000000;
             printf("\n PRICE      %0.2f",X);
             printf("\n DOWNPAYMENT :%d",Y);
             scanf("%d",&Y);
              d = X-Y;
              printf("\n  Enter price [principal amount]: %0.2f",d);
              getch();
             
              printf("\nEnter annual interest rate: ");
              scanf("%f", &R);
              printf("\nEnter number of months: ");
             scanf("%d", &n);


 r = R/(12*100);

 
 emi = d * r * pow(1+r,n)/(pow(1+r,n)-1);

 printf("Monthly EMI: %f", emi);
             break;
             case 13:
             printf("\nMODEL       X6 ");
             printf("\nPOWER       250 HP ");
             printf("\nFUEL        PETROL ");
             printf("\nMANU        2022 ");
             printf("\nTOPSPEED    245 KMP");
             
             X =10000000;
             printf("\n PRICE      %0.2f",X);
             printf("\n DOWNPAYMENT :%d",Y);
             scanf("%d",&Y);
              d = X-Y;
              printf("\n  Enter price [principal amount]: %0.2f",d);
              getch();
             
              printf("\nEnter annual interest rate: ");
              scanf("%f", &R);
              printf("\nEnter number of months: ");
             scanf("%d", &n);


 r = R/(12*100);

 
 emi = d * r * pow(1+r,n)/(pow(1+r,n)-1);

 printf("Monthly EMI: %f", emi);
             break;
             case 14:
             printf("\nMODEL       M5 ");
             printf("\nPOWER       750 HP ");
             printf("\nFUEL        PETROL ");
             printf("\nMANU        2022 ");
             printf("\nTOPSPEED    245 KMP");
             
             X =13000000;
             printf("\n PRICE      %0.2f",X);
             printf("\n DOWNPAYMENT :%d",Y);
             scanf("%d",&Y);
              d = X-Y;
              printf("\n  Enter price [principal amount]: %0.2f",d);
              getch();
             
              printf("\nEnter annual interest rate: ");
              scanf("%f", &R);
              printf("\nEnter number of months: ");
             scanf("%d", &n);


 r = R/(12*100);

 
 emi = d * r * pow(1+r,n)/(pow(1+r,n)-1);

 printf("Monthly EMI: %f", emi);
             break;
             case 15:
             printf("\nMODEL       M4");
             printf("\nPOWER       450 HP ");
             printf("\nFUEL        PETROL ");
             printf("\nMANU        2022 ");
             printf("\nTOPSPEED    245 KMP");
          
             
             X =15000000;
             printf("\n PRICE      %0.2f",X);
             printf("\n DOWNPAYMENT :%d",Y);
             scanf("%d",&Y);
              d = X-Y;
              printf("\n  Enter price [principal amount]: %0.2f",d);
              getch();
             
              printf("\nEnter annual interest rate: ");
              scanf("%f", &R);
              printf("\nEnter number of months: ");
             scanf("%d", &n);


 r = R/(12*100);

 
 emi = d * r * pow(1+r,n)/(pow(1+r,n)-1);

 printf("Monthly EMI: %f", emi);
             break;
             case 16:
             printf("\nMODEL       M8");
             printf("\nPOWER       650 HP ");
             printf("\nFUEL        PETROL ");
             printf("\nMANU        2022 ");
             printf("\nTOPSPEED    295 KMP");
          
             
             X =25000000;
             printf("\n PRICE      %0.2f",X);
             printf("\n DOWNPAYMENT :%d",Y);
             scanf("%d",&Y);
              d = X-Y;
              printf("\n  Enter price [principal amount]: %0.2f",d);
              getch();
             
              printf("\nEnter annual interest rate: ");
              scanf("%f", &R);
              printf("\nEnter number of months: ");
             scanf("%d", &n);


 r = R/(12*100);

 
 emi = d * r * pow(1+r,n)/(pow(1+r,n)-1);

 printf("Monthly EMI: %f", emi);
             break;
         
          }
         
          
    }
          case 22:
          printf("\n\nBMW MOTORSPORT SELECT MODEL");
          printf("\n\n11. G310\n12. G310 GS\n");
          printf("13. S1000R\n");
          printf("14. S1000RR\n");
          printf("15. S1000RR M SPORT\n");
          printf("16. GS1250");
          printf("\n7. Exit");
         printf ("\n\nEnter one of the above : ");
          scanf("%d",&e);
          switch(e)
     {
         case 11:
          printf("\n\nBMW MOTORSPORT. SELECT MODEL");
          printf("\n\n33. G310 \n12. G310 GS\n");
          printf("13. S1000R\n");
          printf("14. S1000RR\n");
          printf("15. S1000RR M SPORT\n");
          printf("16. GS1250");
          printf("\n17. Exit");
         printf ("\n\nEnter one of the above : ");
          scanf("%d",&Z);
    switch(Z)
    {
        case 33:
             printf("\nMODEL       GS310 ");
             printf("\nPOWER       34 HP ");
             printf("\nFUEL        PETROL ");
             printf("\nMANU        2022 ");
             printf("\nTOPSPEED    145 KMP");
             X =250000;
             printf("\n PRICE      %0.2f",X);
             printf("\n DOWNPAYMENT :%d",Y);
             scanf("%d",&Y);
              d = X-Y;
              printf("\n  Enter price [principal amount]: %0.2f",d);
              getch();
             
              printf("\nEnter annual interest rate: ");
              scanf("%f", &R);
              printf("\nEnter number of months: ");
             scanf("%d", &n);


 r = R/(12*100);

 
 emi = d * r * pow(1+r,n)/(pow(1+r,n)-1);

 printf("Monthly EMI: %f", emi);
             
             break;
             case 34:
             printf("\nMODEL       S1000RR ");
             printf("\nPOWER       200 HP ");
             printf("\nFUEL        PETROL ");
             printf("\nMANU        2022 ");
             printf("\nTOPSPEED    310 KMP");
             
             X =1800000;
             printf("\n PRICE      %0.2f",X);
             printf("\n DOWNPAYMENT :%d",Y);
             scanf("%d",&Y);
              d = X-Y;
              printf("\n  Enter price [principal amount]: %0.2f",d);
              getch();
             
              printf("\nEnter annual interest rate: ");
              scanf("%f", &R);
              printf("\nEnter number of months: ");
             scanf("%d", &n);


 r = R/(12*100);

 
 emi = d * r * pow(1+r,n)/(pow(1+r,n)-1);

 printf("Monthly EMI: %f", emi);
             break;
             case 35:
             printf("\nMODEL       S1000RR ");
             printf("\nPOWER       210 HP ");
             printf("\nFUEL        PETROL ");
             printf("\nMANU        2022 ");
             printf("\nTOPSPEED    340 KMP");
             
             X =2500000;
             printf("\n PRICE      %0.2f",X);
             printf("\n DOWNPAYMENT :%d",Y);
             scanf("%d",&Y);
              d = X-Y;
              printf("\n  Enter price [principal amount]: %0.2f",d);
              getch();
             
              printf("\nEnter annual interest rate: ");
              scanf("%f", &R);
              printf("\nEnter number of months: ");
             scanf("%d", &n);


 r = R/(12*100);

 
 emi = d * r * pow(1+r,n)/(pow(1+r,n)-1);

 printf("Monthly EMI: %f", emi);
             break;
             case 14:
             printf("\nMODEL       S1000RR M SPORT ");
             printf("\nPOWER       230 HP ");
             printf("\nFUEL        PETROL ");
             printf("\nMANU        2022 ");
             printf("\nTOPSPEED    340 KMP");
             printf("\nSPEC        RACE SPEC");
             X =13000000;
             printf("\n PRICE      %0.2f",X);
             printf("\n DOWNPAYMENT :%d",Y);
             scanf("%d",&Y);
              d = X-Y;
              printf("\n  Enter price [principal amount]: %0.2f",d);
              getch();
             
              printf("\nEnter annual interest rate: ");
              scanf("%f", &R);
              printf("\nEnter number of months: ");
             scanf("%d", &n);


 r = R/(12*100);

 
 emi = d * r * pow(1+r,n)/(pow(1+r,n)-1);

 printf("Monthly EMI: %f", emi);
             break;
             case 15:
             printf("\nMODEL       GS1250");
             printf("\nPOWER       190 HP ");
             printf("\nFUEL        PETROL ");
             printf("\nMANU        2022 ");
             printf("\nTOPSPEED    245 KMP");
          
             
             X =1500000;
             printf("\n PRICE      %0.2f",X);
             printf("\n DOWNPAYMENT :%d",Y);
             scanf("%d",&Y);
              d = X-Y;
              printf("\n  Enter price [principal amount]: %0.2f",d);
              getch();
             
              printf("\nEnter annual interest rate: ");
              scanf("%f", &R);
              printf("\nEnter number of months: ");
             scanf("%d", &n);


 r = R/(12*100);

 
 emi = d * r * pow(1+r,n)/(pow(1+r,n)-1);

 printf("Monthly EMI: %f", emi);
             break;
             case 16:
             printf("\nMODEL       GS1250 RS");
             printf("\nPOWER       195 HP ");
             printf("\nFUEL        PETROL ");
             printf("\nMANU        2022 ");
             printf("\nTOPSPEED    295 KMP");
          
             
             X =2500000;
             printf("\n PRICE      %0.2f",X);
             printf("\n DOWNPAYMENT :%d",Y);
             scanf("%d",&Y);
              d = X-Y;
              printf("\n  Enter price [principal amount]: %0.2f",d);
              getch();
             
              printf("\nEnter annual interest rate: ");
              scanf("%f", &R);
              printf("\nEnter number of months: ");
             scanf("%d", &n);


 r = R/(12*100);

 
 emi = d * r * pow(1+r,n)/(pow(1+r,n)-1);

 printf("Monthly EMI: %f", emi);
             break;
         
          }
         
          
    }
         
        
          
       
     }
     

exit (0); 


}

return 0;

}


