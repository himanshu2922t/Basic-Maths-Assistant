#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<windows.h>
#include<time.h>


#define pie 3.14159
#define e 2.71828

void simple();
void sci();
void sc();
void com();
void about();

void arth();
void mean();
void trigno();
void lg();
void pnr();
void fact();
void pe();
void eq();
void lh();
void pc();
void dp();
void tax();
void curnc();
void intrst();

void bnry(long long);
void deci(long long);
void octl(long long);
void hexa();void hexab();void hexao();void hexad();

void gotoxy(int x,int y)
{

    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void delay(unsigned int mseconds)
{
    clock_t goal= mseconds+clock();
    while (goal>clock());
}
int main()
{
 char i=1;
 system("cls");
 gotoxy(30,2);
 printf(" ADVANCED CALCULATOR\n");
 gotoxy(30,3);
 printf(" ======== ==========\n");
 gotoxy(12,4);
 printf("Choose Any One-\n");
 gotoxy(24,6);
 printf("[1].Simple Calculator\n");
 gotoxy(24,8);
 printf("[2].Scientific Calculator\n");
 gotoxy(24,10);
 printf("[3].Programmable Calculator\n");
 gotoxy(24,12);
 printf("[4].Commercial Calculator\n");
 gotoxy(24,14);
 printf("[5].Extra");
 gotoxy(2,23);
 printf("0 Exit                                                             h: About us ");
 gotoxy(20,16);
 i=getch();
 switch(i)
 {
  case '1':
    simple();
    break;
  case '2':
    sci();
    break;
  case '3':
    sc();
    break;
  case '4':
    com();
    break;
  case '5':
    dp();
    break;
  case '0':
    exit(0);
    break;
  case 'h':
    about();
    break;
  default:
    gotoxy(18,17);
    printf("Oops! Please choose appropriate no. from 1to5.\n");
    delay(1000);
    main();
 }
 getch();
}



void simple()
{
   char i;
   system("cls");
   gotoxy(30,2);
   printf(" SIMPLE CALCULATOR\n");
   gotoxy(30,3);
   printf(" ====== ==========\n");
   gotoxy(12,4);
   printf("Choose Any One-\n");
   gotoxy(24,6);
   printf("[1].Arithmetic Operations\n");
   gotoxy(24,8);
   printf("[2].Mean of numbers\n");
   gotoxy(24,10);
   printf("[3].LCM & HCF\n");
   gotoxy(24,12);
   printf("[4].Constant pie & e\n");
   gotoxy(2,23);
   printf("0 Back");
   gotoxy(20,16);
   i=getch();
   fflush(stdin);
   switch(i)
   {
      case '1':
	 arth();
	 break;
      case '2':
	 mean();
	 break;
      case '3':
	 lh();
	 break;
      case '4':
	 pe();
	 break;
      case '0':
	 main();
	 break;
      default:
	 gotoxy(16,17);
	 printf("Oops! Please choose appropriate no. from 1to4.\n");
	 delay(2000);
	 simple();
   }
 getch();
}



void sci()
{
   char i;
   system("cls");
   gotoxy(30,2);
   printf(" SCIENTIFIC CALCULATOR\n");
   gotoxy(30,3);
   printf(" ========== ==========\n");
   gotoxy(12,4);
   printf("Choose Any One-\n");
   gotoxy(24,6);
   printf("[1].Trignometric\n");
   gotoxy(24,8);
   printf("[2].Logarithm\n");
   gotoxy(24,10);
   printf("[3].Power & Root\n");
   gotoxy(24,12);
   printf("[4].Factorial\n");
   gotoxy(24,14);
   printf("[5].Permutation & Combination");
   gotoxy(24,16);
   printf("[6].Qudratic Equation");
   gotoxy(2,23);
   printf("0 Back");
   gotoxy(20,16);
   i=getch();
   fflush(stdin);
   switch(i)
   {
      case '1':
	 trigno();
	 break;
      case '2':
	 lg();
	 break;
      case '3':
	 pnr();
	 break;
      case '4':
	 fact();
	 break;
      case '5':
	 pc();
	 break;
      case '6':
	 eq();
	 break;
      case '0':
	 main();
	 break;
      default:
	 gotoxy(16,17);
	 printf("Oops! Please choose appropriate no. from 1to6.\n");
	 delay(2000);
	 sci();
   }
 getch();
}



void com()
{
   char i;
   system("cls");
   gotoxy(30,2);
   printf(" COMMERCIAL CALCULATOR\n");
   gotoxy(30,3);
   printf(" ========== ==========\n");
   gotoxy(12,4);
   printf("Choose Any One-\n");
   gotoxy(24,6);
   printf("[1].Income Tax\n");
   gotoxy(24,8);
   printf("[2].Currency Covertor\n");
   gotoxy(24,10);
   printf("[3].Interest\n");
   gotoxy(2,23);
   printf("0 Back");
   gotoxy(20,16);
   i=getch();
   fflush(stdin);
   switch(i)
   {
      case '1':
	 tax();
	 break;
      case '2':
	 curnc();
	 break;
      case '3':
	 intrst();
	 break;
      case '0':
	 main();
	 break;
      default:
	 gotoxy(16,17);
	 printf("Oops! Please choose appropriate no. from 1to3.\n");
	 delay(2000);
	 com();
   }
 getch();
}




void arth()
 {
  char i;
  long int x,y,mod;
  double a,b,sum=0,sub=0,mul=1,div=1;
  system("cls");
  gotoxy(37,2);
  printf("ARITHMETIC\n");
  gotoxy(36,3);
  printf("============\n");
  gotoxy(12,4);
  printf("Operations-\n");
  gotoxy(20,5);
  printf("[1].Sum      [2].Subtract      [3].Multiply");
  gotoxy(20,7);
  printf("[4].Divide  *[5].Modulus\n");
  printf("================================================================================\n");
  gotoxy(2,23);
  printf("0 Back              [ *Note:Modulus can be calculated of integer parts only ]\n");

  gotoxy(1,9);
  printf("Choose operation which you desire:");
  i=getch();
  fflush(stdin);
  switch (i)
   {
     case '1':
       printf(" sum\n");
       gotoxy(10,11);
       printf("Enter first number:");
       scanf("%lf",&a);
       gotoxy(10,12);
       printf("Enter second number:");
       scanf("%lf",&b);
       sum=a+b;
       gotoxy(30,14);
       printf(" Answer=%lf",sum);
       break;
     case '2':
       printf(" subtract\n");
       gotoxy(10,11);
       printf("Enter first number:");
       scanf("%lf",&a);
       gotoxy(10,12);
       printf("Enter second number:");
       scanf("%lf",&b);
       sub=a-b;
       gotoxy(30,14);
       printf(" Answer=%lf",sub);
       break;
     case '3':
       printf(" multiply\n");
       gotoxy(10,11);
       printf("Enter first number:");
       scanf("%lf",&a);
       gotoxy(10,12);
       printf("Enter second number:");
       scanf("%lf",&b);
       mul=a*b;
       gotoxy(30,14);
       printf(" Answer=%lf",mul);
       break;
     case '4':
       printf(" divide\n");
       gotoxy(10,11);
       printf("Enter first number:");
       scanf("%lf",&a);
       gotoxy(10,12);
       printf("Enter second number:");
       scanf("%lf",&b);
       div=a/b;
       gotoxy(30,14);
       printf(" Answer=%lf",div);
       break;
     case '5':
       printf(" modulus\n");
       gotoxy(10,11);
       printf("Enter first number:");
       scanf("%lf",&a);
       gotoxy(10,12);
       printf("Enter second number:");
       scanf("%lf",&b);
       x=a;
       y=b;
       mod=(x%y);
       gotoxy(30,14);
       printf(" Answer=%ld",mod);
       break;
     case '0':
       simple();
       break;
     default:
       gotoxy(16,15);
       printf("Oops! Please choose proper operation from 1to5\n");
   }
   getch();
   switch(i)
   {
     case '0':
       simple();
       break;
     default:
       arth();
   }
}



void mean()
{
   char j;
   int n,i;
   float a[50],sum=0,avg;
   system("cls");
   gotoxy(37,2);
   printf("Mean or Average\n");
   gotoxy(37,3);
   printf("===============\n");
   printf("================================================================================\n");
   gotoxy(1,23);
   printf("0 Back");
   gotoxy(1,5);
   printf("Enter total numbers: ");
   j=getch();
   fflush(stdin);
   switch(j)
   {
   case '0':
     simple();
     break;
   default:
     scanf("%d",&n);
   if(n<2)
    {
      gotoxy(25,10);
      printf("Please enter a valid input!");
      delay(1500);
      mean();
    }
   else
    {
      printf("\nEnter Numbers : ");
      for(i=n;i>=1;i--)
       {
	 scanf("%f",&a[i]);
	 sum+=a[i];
       }
   avg=sum/n;
   gotoxy(35,10);
   printf("Mean of numbers: %.2f ",avg);
  }
  }
  getch();
  j=getche();
  switch(j)
  {
    case '0':
       simple();
       break;
    default:
       mean();
   }
}



void trigno()
{
 char i,j,k;
 float a,b,x;
 system("cls");
 gotoxy(35,2);
 printf("Trignometric\n");
 gotoxy(34,3);
 printf("==============\n");
 gotoxy(12,4);
 printf("Choose Any One-\n");
 gotoxy(19,5);
 printf("[1].Angle in Degree     [2].Angle in Radian\n");
 printf("================================================================================\n");
 gotoxy(2,23);
 printf("0 Back");
 gotoxy(1,7);
 i=getch();
 fflush(stdin);
 switch(i)
 {
   case '0':
     sci();
     break;
   case '1':
     printf("Please enter value of angle:");
     scanf("%f",&a);
     b=a*0.01745;
     printf("Now, Choose any one-\n");
     printf("          [1].sin  [2].cos  [3].tan  [4].cot  [5].sec  [6].cosec");
     j=getch();
     fflush(stdin);
     switch(j)
     {
       case '1':
	 x=sin(b);
	 gotoxy(27,13);
	 printf("Sin %.2fdegree = %f",a,x);
	 break;
       case '2':
	 x=cos(b);
	 gotoxy(27,13);
	 printf("Cos %.2fdegree = %f",a,x);
	 break;
       case '3':
	 x=tan(b);
	 gotoxy(27,13);
	 printf("Tan %.2fdegree = %f",a,x);
	 break;
       case '4':
	 x=1/tan(b);
	 gotoxy(27,13);
	 printf("Cot %.2fdegree = %f",a,x);
	 break;
       case '5':
	 x=1/cos(b);
	 gotoxy(27,13);
	 printf("Sec %.2fdegree = %f",a,x);
	 break;
       case '6':
	 x=1/sin(b);
	 gotoxy(27,13);
	 printf("Cosec %.2fdegree = %f",a,x);
	 break;
       default:
	 gotoxy(16,15);
	 printf("\nOops! Please choose proper operation from 1to6\n");
     }
     break;
   case '2':
     printf("Please enter value of angle-");
     scanf("%f",&a);
     printf("Now, Choose any one-\n");
     printf("          [1].sin  [2].cos  [3].tan  [4].cot  [5].sec  [6].cosec");
     k=getch();
     fflush(stdin);
     switch(k)
     {
       case '1':
	 x=sin(a);
	 gotoxy(27,13);
	 printf("Sin %f = %f",a,x);
	 break;
       case '2':
	 x=cos(a);
	 gotoxy(27,13);
	 printf("Cos %f = %f",a,x);
	 break;
       case '3':
	 x=tan(a);
	 gotoxy(27,13);
	 printf("Tan %f = %f",a,x);
	 break;
       case '4':
	 x=1/tan(a);
	 gotoxy(27,13);
	 printf("Cot %f = %f",a,x);
	 break;
       case '5':
	 x=1/cos(a);
	 gotoxy(27,13);
	 printf("Sec %f = %f",a,x);
	 break;
       case '6':
	 x=1/sin(a);
	 gotoxy(27,13);
	 printf("Cosec %f = %f",a,x);
	 break;
       default:
	 gotoxy(16,15);
	 printf("\nOops! Please choose proper operation from 1to6\n");
     }
     break;
   default:
     printf("\nOops! Please press key 1 or 2.\n");
 }
 getch();
 switch(i)
 {
  case '0':
     sci();
     break;
  default:
     trigno();
 }
}

void lg()
{
 char i;
 long long int a,x;
 double b;
 system("cls");
 gotoxy(37,2);
 printf("LOGARITHM\n");
 gotoxy(36,3);
 printf("===========\n");
 gotoxy(12,4);
 printf("Choose Any One-\n");
 gotoxy(15,6);
 printf("[1].Natural log base e (ln)   [2].log base 10 ");
 gotoxy(15,8);
 printf("[3].Other base log\n");
 printf("================================================================================\n");
 gotoxy(2,23);
 printf("0 Back");
 gotoxy(1,10);
 i=getch();
 fflush(stdin);
 switch(i)
  {
    case '1':
      gotoxy(1,10);
      printf("Enetr a value=");
      scanf("%lli",&a);
      b=log(a);
      gotoxy(35,12);
      printf("ln%lli=%lf",a,b);
      break;
    case '2':
      gotoxy(1,10);
      printf("Enter a value=");
      scanf("%lli",&a);
      b=(log(a))/(log(10));
      gotoxy(35,12);
      printf("log (%lli)= %lf",a,b);
      gotoxy(37,13);printf("10");
      break;
    case '3':
      gotoxy(1,10);
      printf("Enter the value of base=");
      scanf("%lli",&x);
      if(x!=1&&x>0)
      {
	printf("Enter a value=");
	scanf("%lli",&a);
	b=(log(a))/(log(x));
	gotoxy(35,13);
	printf("log (%lli)=%lf",a,b);
	gotoxy(38,14);printf("%lli",x);
	getch();
      }
      else
      {
	gotoxy(12,13);
	printf("Invalid input. Please enter positive value except 1.");
	delay(1);
	getch();
	lg();
      }
      break;
    case '0':
       sci();
       break;
    default:
      gotoxy(16,15);
	 printf("\nOops! Please choose proper operation from 1to3\n");
  }
 i=getch();
 switch(i)
 {
  case '0':
     sci();
     break;
  default:
     lg();
 }
 getch();
}

void pnr()
{
 char i;
 double a,b,c;
 system("cls");
 gotoxy(34,2);
 printf("POWER AND ROOT\n");
 gotoxy(33,3);
 printf("================\n");
 gotoxy(12,4);
 printf("Choose Any One-\n");
 gotoxy(27,5);
 printf("[1].Power(^)     [2].Root\n");
 printf("================================================================================\n");
 gotoxy(2,23);
 printf("0 Back");
 gotoxy(1,7);
 i=getch();
 fflush(stdin);
 switch(i)
  {
    case'0':
      sci();
      break;
    case '1':
      printf("Enter a number: ");
      scanf("%lf",&a);
      printf("Enter value of power: ");
      scanf("%lf",&b);
      c=pow(a,b);
      gotoxy(30,11);
      printf("%.2lf^%.2lf = %.4lf",a,b,c);
      break;
    case '2':
      printf("Enter a number: ");
      scanf("%lf",&a);
      printf("Enter which root you want:      th (exa:nth)");
      gotoxy(28,8);
      scanf("%lf",&b);
      c=pow(a,1/b);
      gotoxy(27,11);
      printf("%.2lf 's %.1lfth root = %.5lf",a,b,c);
      break;
    default:
      printf("\nOops! Please press key 1 or 2.\n");
   }
 getch();
 switch(i)
 {
  case '0':
     sci();
     break;
  default:
     pnr();
 }

}

void fact()
{
 char j;
 int a,i;
 double x=1;
 system("cls");
 gotoxy(37,2);
 printf("FACTORIAL\n");
 gotoxy(36,3);
 printf("===========\n");
 printf("================================================================================\n");
 gotoxy(2,22);
 printf("                   Note: Factorial is defined only for positive integers\n 0 Back                   and 0. Factorial0 or !0=1");
 gotoxy(1,6);
 printf("Enter a number: ");
 fflush(stdin);
 scanf("%d",&a);
 if(a>=0)
   {
     if(a>0)
      {
	for(i=a;i>=1;i--)
	 {
	  x=x*i;
	 }
	gotoxy(25,9);
	printf("Factorial %d",a);
	printf(" or !%d = %lf",a,x);
      }
     else
      {
	gotoxy(25,9);
	printf("Factorial 0 or !0 = 1");
      }
   }
 else
   {
      gotoxy(19,12);
      printf("Invalid input! Please enter positive integers or 0");
   }
 getch();
 j=getch();
 switch(j)
 {
  case '0':
     sci();
     break;
  default:
     fact();
 }
 getch();
}

void pe()
{
 char i;

 double a,b;
 system("cls");
 gotoxy(34,2);
 printf("PIE & CONST e\n");
 gotoxy(34,3);
 printf("=============\n");
 gotoxy(12,4);
 printf("Choose Any One-\n");
 gotoxy(27,5);
 printf("[1].Pie     [2].e\n");
 printf("================================================================================\n");
 gotoxy(2,23);
 printf("0 Back");
 gotoxy(1,7);
 i=getch();
 fflush(stdin);
 switch(i)
 {
   case '0':
     simple();
     break;
   case '1':
     printf("Please enter number:");
     scanf("%lf",&a);
     b=a/pie;
     printf("\nNumber in terms of pie= %.2lfpie",b);
     break;
   case '2':
     printf("Please enter number:");
     scanf("%lf",&a);
     b=a/e;
     printf("\nNumber in terms of e= %.2lfe",b);
     break;
   default:
     gotoxy(25,9);
     printf("Oops! Please press key 1or 2.");
 }
 getch();
 switch(i)
 {
  case '0':
     simple();
     break;
  default:
     pe();
 }
}



void eq()
{
 char j;
 float a,b,c,D,x1,x2,r,i;
 system("cls");
 gotoxy(31,2);
 printf("QUADRATIC EQUATION");
 gotoxy(31,3);
 printf("==================\n");
 printf("================================================================================\n");
 gotoxy(2,23);
 printf("0 Back");
 gotoxy(1,5);
 j=getch();
 fflush(stdin);
 switch(j)
 {
   case '0':
     sci();
     break;
   default:
     printf("General qudratic equation: ax^2+bx+c=0\n");
     printf("\nEnter the values of a,b and c: a=      b=      c=      ");
     gotoxy(34,7); scanf("%f",&a);
     gotoxy(42,7); scanf("%f",&b);
     gotoxy(50,7); scanf("%f",&c);
     if(a==0)
      {
       gotoxy(23,10);
       printf("Oops! Quadratic equation is not possible.");
       gotoxy(23,11);
       printf("Please Enter non zero value for a.");
      }
     else
      {
	D=b*b-4.0*a*c;
	if(D>0)
	 {
	   x1=(-b+sqrt(D))/(2.0*a);
	   x2=(-b-sqrt(D))/(2.0*a);
	   gotoxy(25,10);
	   printf("Roots are = %f and %f",x1,x2);
	  }
	  else if(D==0)
	    {
	      x1=-b/(2.0*a);
	      x2=x1;
	      gotoxy(25,10);
	      printf("Roots are = %f and %f",x1,x2);
	    }
	    else if(D<0)
	      {
		r=-b/(2.0*a);
		i=sqrt(abs(D))/(2.0*a);
		gotoxy(25,10);
		printf("Roots are =  %.2f+i%.2f (Imaginary)",r,i);
		gotoxy(25,11);
		printf("             %.2f-i%.2f (Imaginary)",r,i);
	      }
      }
     break;
  }
 getch();
 switch(j)
 {
  case '0':
     sci();
     break;
  default:
     eq();
 }
}

void lh()
{
 char i;
 long int a,b,LCM,HCF;
 system("cls");
 gotoxy(35,2);
 printf("LCM & HCF\n");
 gotoxy(34,3);
 printf("===========\n");
 gotoxy(12,4);
 printf("Choose Any One-\n");
 gotoxy(12,6);
 printf("[1].Lowest Common Multiple     [2].Highest Common Factor\n");
 printf("================================================================================\n");
 gotoxy(2,23);
 printf("0 Back");
 gotoxy(1,7);
 i=getch();
 fflush(stdin);
 switch(i)
 {
  case '1':
    printf("\nEnter first number:");
    scanf("%ld",&a);
    printf("\nEnter second number:");
    scanf("%ld",&b);
    for(LCM=a>b?a:b;LCM<=a*b;LCM=LCM+(a>b?a:b))
     {
       if(LCM%a==0&&LCM%b==0)
	  break;
     }
    gotoxy(25,12);
    printf("LCM of given numbers = %ld",LCM);
    getch();
    break;
  case '2':
    printf("\nEnter first number:");
    scanf("%ld",&a);
    printf("\nEnter second number:");
    scanf("%ld",&b);
    for(HCF=a<b?a:b;HCF>=1;HCF--)
     {
       if(a%HCF==0&&b%HCF==0)
	  break;
     }
     gotoxy(25,12);
     printf("HCF of given numbers = %ld",HCF);
     getch();
     break;
  case '0':
     simple();
     break;
  default:
     gotoxy(25,12);
     printf("Oops! Please press key 1 or 2.");
 }
 getch();
 switch(i)
 {
  case '0':
     simple();
     break;
  default:
     lh();
 }
}


void pc()
{
   char i;
   int n,r,j;
   double f=1,g=1,h=1;
   system("cls");
   gotoxy(32,1);
   printf("PERMUTATION & COMBINATION");
   gotoxy(32,2);
   printf("=========================\n");
   gotoxy(18,3);
   printf("Choose Any One-\n");
   gotoxy(32,4);
   printf("[1].P(n/r)     [2].C(n/r)\n");
   printf("================================================================================\n");
   gotoxy(2,23);
   printf("0 Back");
   gotoxy(1,6);
   i=getch();
   fflush(stdin);
   switch(i)
   {
     case '1':
       printf("Enter value of n : ");
       scanf("%d",&n);
       printf("\nEnter value of r : ");
       scanf("%d",&r);
       if(n>=r)
       {
       for(j=n;j>=1;j--)
	  f=f*j;
       for(j=n-r;j>=1;j--)
	  h=h*j;
       gotoxy(25,10);
       printf("P(n/r) : %dP%d = %lf",n,r,f/h);
       getch();
       }
       else
	{
	  printf("WRONG INPUT! Enter n>=r");
	}
       break;
     case '2':
       printf("Enter value of n : ");
       scanf("%d",&n);
       printf("\nEnter value of r : ");
       scanf("%d",&r);
       if(n>=r)
       {
       for(j=n;j>=1;j--)
	  f=f*j;
       for(j=r;j>=1;j--)
	  g=g*j;
       for(j=n-r;j>=1;j--)
	  h=h*j;
       gotoxy(25,10);
       printf("C(n/r) : %dC%d = %lf",n,r,(f)/(g*h));
       getch();
       }
       else
	{
	  printf("WRONG INPUT! Enter n>=r");
	}
       break;
     case '0':
       sci();
       break;
     default:
       gotoxy(25,12);
       printf("Oops! Please press key 1 or 2.");

   }
   getch();
   switch(i)
   {
     case '0':
       sci();
       break;
     default:
       pc();
   }
}

void dp()
{
   int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   char week[7][10],j;
   int dd,mm,yy,i,r,s=0;
   system("cls");
   gotoxy(2,23);
   printf("0 Back");
   gotoxy(34,1);
   printf("DAY PREDICTOR");
   gotoxy(34,2);
   printf("=============\n");
   printf("================================================================================");
   strcpy(week[0],"Sunday");
   strcpy(week[1],"Monday");
   strcpy(week[2],"Tuesday");
   strcpy(week[3],"Wednesday");
   strcpy(week[4],"Thursday");
   strcpy(week[5],"Friday");
   strcpy(week[6],"Saturday");
   printf("Enter a date(dd:mm:yy) =   :  :   ");
   gotoxy(26,4);
   j=getche();
   fflush(stdin);
   switch(j)
   {
     case '0':
       main();
       break;
     default:
       gotoxy(26,4);
       scanf("%d",&dd);
       gotoxy(29,4);
       scanf("%d",&mm);
       gotoxy(32,4);
       scanf("%d",&yy);
       if( (yy%400==0)||((yy%4==0)&&(yy%100!=0)) )
	   month[1]=29;
       for(i=0;i<mm-1;i++)
	   s=s+month[i];
       s=s+(dd+yy+(yy/4)-2);
       s=s%7;
       gotoxy(33,11);
       printf("Day : %s",week[s]);
       getch();
   }
   switch(j)
   {
     case '0':
       main();
       break;
     default:
       dp();
   }
}


void tax()
{
   char i;
   long long x;
   double t;
   system("cls");
   gotoxy(1,23);
   printf("0 Back");
   gotoxy(39,1);
   printf("TAX");
   gotoxy(38,2);
   printf("=====\n");
   printf("================================================================================");
   printf("Enter your annual income: ");
   fflush(stdin);
   scanf("%lld",&x);
   if(x<0)
   {
      gotoxy(27,7);
      printf("Income can't be negative! Renter income.");
   }
    else if(x>=0&&x<250000)
    {
      gotoxy(30,7);
      printf("No Tax ");
     }
     else if(x>=250000&&x<500000)
     {
       t=(x-250000)*5/100;
       gotoxy(27,7);
       printf("Income Tax : Rs. %.2lf",t);
      }
       else if(x>=500000&&x<1000000)
       {
	 t=(((x-500000)*2)/10)+25000;
	 gotoxy(27,7);
	 printf("Income Tax : Rs. %.2lf",t);
	}
	else
	{
	  t=(((x-100000)*3)/10)+125000;
	  gotoxy(27,7);
	  printf("Income Tax : Rs. %.2lf",t);
	}
    i=getche();
    switch(i)
    {
      case '0':
	com();
	break;
     default:
	tax();
     }
    getch();
 }




 void curnc()
 {
    float x,usd,eur,yen,yuan,aud,gbp,kwd,rub,sar;
    char i;
    system("cls");
    gotoxy(35,1);
    printf("CURRENCY CONVERTER");
    gotoxy(35,2);
    printf("======== =========\n");
    printf("================================================================================");
    printf("Enter currency in Rupees: ");
    scanf("%f",&x);
    printf("\nNow choose currency in which you want to covert Rs.:");
    gotoxy(20,7);
    printf("[1].American Dollar    [2].Euro");
    gotoxy(20,9);
    printf("[3].Japenese Yen       [4].Chienese Yuan");
    gotoxy(20,11);
    printf("[5].Australian Dollar  [6].British Pound");
    gotoxy(20,13);
    printf("[7].Kuwaiti Dinar      [8].Russian Rouble");
    gotoxy(20,15);
    printf("[9].Saudi Riyal");
    i=getche();
    fflush(stdin);
    switch(i)
    {
       case '0':
	  com();
	  break;
       case '1':
	  usd=0.0154*x;
	  gotoxy(25,17);
	  printf("%.2f Rs. = %.2f $",x,usd);
	  break;
       case '2':
	  eur=0.0133*x;
	  gotoxy(25,17);
	  printf("%.2f Rs. = %.2f EUR",x,eur);
	  break;
       case '3':
	  yen=1.7603*x;
	  gotoxy(25,17);
	  printf("%.2f Rs. = %.2f Yen",x,yen);
	  break;
       case '4':
	  yuan=0.1022*x;
	  gotoxy(25,17);
	  printf("%.2f Rs. = %.2f Yuan",x,yuan);
	  break;
       case '5':
	  aud=0.0201*x;
	  gotoxy(25,17);
	  printf("%.2f Rs. = %.2f AUD",x,aud);
	  break;
       case '6':
	  gbp=0.0117*x;
	  gotoxy(25,17);
	  printf("%.2f Rs. = %.2f Pound",x,gbp);
	  break;
       case '7':
	  kwd=0.0047*x;
	  gotoxy(25,17);
	  printf("%.2f Rs. = %.2f Dinar",x,kwd);
	  break;
       case '8':
	  rub=0.9002*x;
	  gotoxy(25,17);
	  printf("%.2f Rs. = %.2f Rouble",x,rub);
	  break;
       case '9':
	  sar=0.0577*x;
	  gotoxy(25,17);
	  printf("%.2f Rs. = %.2f Riyal",x,sar);
	  break;
       default:
	  gotoxy(25,17);
	  printf("Invalid Input!");
	  delay(1500);
     }
     i=getche();
     switch(i)
     {
	case '0':
	   com();
	   break;
	default:
	   sc();
     }
     getch();
}





void intrst()
{
    char i;
    float p,t,r,si,ci;
    system("cls");
    gotoxy(37,1);
    printf("INTEREST");
    gotoxy(37,2);
    printf("========");
    gotoxy(17,3);printf("Choose any one-");
    gotoxy(24,4);printf("[1].Simple Interest   [2].Compound Interest\n");
    printf("================================================================================");
    i=getch();
    fflush(stdin);
    switch(i)
    {
      case '0':
	 com();
	 break;
      case '1':
	 printf("Enter amount: ");
	 scanf("%f",&p);
	 printf("\nEnter time(in year) : ");
	 scanf("%f",&t);
	 printf("\nEnter rate: ");
	 scanf("%f",&r);
	 si=(p*t*r)/100;
	 gotoxy(25,12);printf("Simple interest: %.2f",si);
	 break;
      case '2':
	 printf("Enter amount: ");
	 scanf("%f",&p);
	 printf("\nEnter time(in year) : ");
	 scanf("%f",&t);
	 printf("\nEnter rate: ");
	 scanf("%f",&r);
	 ci=p*(pow((1+r/100),t));
	 gotoxy(25,12);printf("Compound interest: %.2f",ci);
	 break;
      default:
	 gotoxy(25,12);printf("Oops! please press key 1or2.");
    }
    getch();
    i=getche();
    switch(i)
    {
      case '0':
	 com();
	 break;
      default:
	 intrst();
    }
}



void about()
{
  int i,j;
  system("cls");
  for(i=20;i>=8;i--)
   {
     system("cls");
     gotoxy(20,i);
     printf("Developed By: |_|        |)");
     gotoxy(20,i+1);
     printf("              | |IMANSHU |\\ATHORE");
     gotoxy(20,i+3);printf("Email: himanshu.2922t@gmail.com");
     delay(700);
   }
  getch();
  main();
 }



void sc()
{
   char i,j;
   long long x,rem;
   system("cls");
   gotoxy(33,1);printf("NUMBER SYSTEM CONVERTER");
   gotoxy(33,2);printf("====== ====== =========\n");
   printf("================================================================================");
   for(j=4;j<=22;j++)
   {  gotoxy(21,j);printf("|");  }
   gotoxy(1,23);printf("0 Back");
   gotoxy(1,5);printf("Choose-");
   gotoxy(4,7);printf("[1].Binary");
   gotoxy(4,9);printf("[2].Decimal");
   gotoxy(4,11);printf("[3].Octal");
   gotoxy(4,13);printf("[4].Hexadecimal");
   gotoxy(22,4);printf("Choose input number system: ");
   i=getch();
   fflush(stdin);
   switch(i)
   {
      case '0':
	main();
	break;
      case '1':
	printf("Binary");
	gotoxy(22,5);printf("Enter number: ");
	scanf("%lld",&x);
	while(x!=0)
	{
	  rem=x%10;
	  if(rem>=2)
	  {
	      gotoxy(40,11);printf("Invalid Input!");
	      gotoxy(30,12);printf("Binary input can be in terms of 0 & 1 only.");
	      getch();
	      sc();
	  }
	  x/=10;
	}
	bnry(x);
	break;
     case '2':
	printf("Decimal");
	gotoxy(22,5);printf("Enter number: ");
	scanf("%lld",&x);
	deci(x);
	break;
     case '3':
	printf("Octal");
	gotoxy(22,5);printf("Enter number: ");
	scanf("%lld",&x);
	while(x!=0)
	{
	   rem=x%10;
	   if(rem>=8)
	   {
	      gotoxy(40,11);printf("Invalid input!");
	      gotoxy(30,12);printf("Octal number can be 0 to 7 only.");
	      getch();
	      sc();
	   }
	   x/=10;
	}
	octl(x);
	break;
     case '4':
	printf("Hexadecimal");
	hexa();
	break;
     default:
	gotoxy(35,11);printf("Oops! Please press key 1to4.");
   }
   getch();
   i=getch();
   switch(i)
   {
       case '0':
	  main();
	  break;
       default:
	  sc();
    }

}


void bnry(long long b)
{
   char i;
   char hex[20];
   int j=0,l=0,rem,hexconst[]={0,1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111};
   long long o=0,d=0,tb,k=0;
   gotoxy(22,7);printf("Choose desired equalent: ");
   i=getch();
   switch(i)
   {
      case '0':
	 sc();
	 break;
      case '2':
	 printf("Decimal");
	 while(b!=0)
	 {
	    rem=b%10;
	    d+=(rem*pow(2,j));
	    b=b/10;
	    j++;
	 }
	 gotoxy(40,11);printf("Answer = %lld",d);
	 break;
      case '3':
	 printf("Octal");
	 while(b!=0)
	 {
	    rem=b%10;
	    d+=(rem*pow(2,k));
	    b=b/10;
	    k++;
	 }k=1;
	 while(d!=0)
	 {
	    rem=d%8;
	    o+=(rem*k);
	    d=d/8;
	    k*=10;
	 }
	 gotoxy(40,11);printf("Answer = %lld",o);
	 break;
      case '4':
	 printf("Hexadecimal");
	 tb=b;
	 while(tb!=0)
	 {
	    rem=tb%10000;
	    for(j=0;j<16;j++)
	    {
	       if(hexconst[j]==rem)
	       {
		  if(j<10)
		    { hex[l]=(char)(j+48);}
		  else
		    { hex[l]=(char)((j-10)+65); }
		  l++;
		  break;
	       }
	     }
	    tb/=10000;
	 }
	 hex[l]='\0';
	 strrev(hex);
	 gotoxy(40,11);printf("Answer = %s",hex);
	 break;
      default:
	 bnry(b);
   }
}


void deci(long long d)
{
   char i;
   char hex[20];
   long long b=0,o=0,td,rem;
   int j=0,k=0,hexconst[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
   gotoxy(22,7);printf("Choose desired equalent: ");
   i=getch();
   switch(i)
   {
      case '0':
	 sc();
	 break;
      case '1':
	 printf("Binary");
	 while(d!=0)
	 {
	    rem=d%2;
	    b+=(rem*pow(10,j));
	    d=d/2;
	    j++;
	 }
	 gotoxy(40,11);printf("Answer = %lld",b);
	 break;
      case '3':
	 printf("Octal");
	 while(d!=0)
	 {
	    rem=d%8;
	    o+=(rem*pow(10,j));
	    d=d/8;
	    j++;
	 }
	 gotoxy(40,11);printf("Answer = %lld",o);
	 break;
      case '4':
	 printf("Hexadecimal");
	 td=d;
	 while(td!=0)
	 {
	    rem=td%16;
	    for(j=0;j<16;j++)
	    {
		if(hexconst[j]==rem)
		{
			if(j<10)
			    hex[k]=(char)(j+48);
			else
			    hex[k]=(char)((j-10)+65);
			k++;
			break;
		}
	    }
	    td/=16;
	 }
	 hex[k]='\0';
	 strrev(hex);
	 gotoxy(40,11);printf("Answer = %s",hex);
	 break;
      default:
	 deci(d);
    }

}


void octl(long long o)
{
   char i;
   char hex[20];
   long long to,b=0,j=1,d=0,td;
   int k=0,l=0,m=0,rem,octlconst[]={0,1,10,11,100,101,110,111},hexconst[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
   gotoxy(22,7);printf("Choose desired equalent: ");
   i=getch();
   switch(i)
   {
      case '0':
	 sc();
	 break;
      case '1':
	 printf("Binary");
	 to=o;
	 while(to!=0)
	 {
	    rem=to%10;
	    b+=(octlconst[rem]*j);
	    to/=10;
	    j*=1000;
	 }
	 gotoxy(40,11);printf("Answer =%lld",b);
	 break;
      case '2':
	 printf("Decimal");
	 while(o!=0)
	 {
	    rem=o%10;
	    d+=(rem*pow(8,l));
	    o/=10;
	    l++;
	 }
	 gotoxy(40,11);printf("Answer = %lld",d);
	 break;
      case '4':
	 printf("Hexadecimal");
	 while(o!=0)
	 {
	    rem=o%10;
	    d+=(rem*pow(8,l));
	    o/=10;
	    l++;
	 }
	 td=d;
	 while(td!=0)
	 {
	    rem=td%16;
	    for(m=0;m<16;m++)
	    {
		if(hexconst[m]==rem)
		{
			if(m<10)
			    hex[k]=(char)(m+48);
			else
			    hex[k]=(char)((m-10)+65);
			k++;
			break;
		}
	    }
	    td/=16;
	 }
	 hex[k]='\0';
	 strrev(hex);
	 gotoxy(40,11);printf("Answer = %s",hex);
	 break;
      default:
	 octl(o);
   }
}




void hexa()
{
   char i;
   gotoxy(22,7);printf("Choose desired equalent: ");
   i=getch();
   switch(i)
   {
      case '0':
	 sc();
	 break;
      case '1':
	 printf("Binary");
	 hexab();
	 break;
      case '2':
	 printf("Decimal");
	 hexad();
	 break;
      case '3':
	 printf("Octal");
	 hexao();
	 break;
      default:
	  hexa();
   }
}

void hexab()
{
     char hex[17],bin[65]="";
     int j=0;
     gotoxy(22,5);printf("Enter hexadecimal number: ");
     gets(hex);
     for(j=0;hex[j]!='\0';j++)
     {
       switch(hex[j])
       {
		case '0':
		   strcat(bin,"0000");
		   break;
		case '1':
		   strcat(bin,"0001");
		   break;
		case '2':
		   strcat(bin,"0010");
		   break;
		case '3':
		   strcat(bin,"0011");
		   break;
		case '4':
		   strcat(bin,"0100");
		   break;
		case '5':
		   strcat(bin,"0101");
		   break;
		case '6':
		   strcat(bin,"0110");
		   break;
		case '7':
		   strcat(bin,"0111");
		   break;
		case '8':
		   strcat(bin,"1000");
		   break;
		case '9':
		   strcat(bin,"1001");
		   break;
		case 'a':
		case 'A':
		   strcat(bin,"1010");
		   break;
		case 'b':
		case 'B':
		   strcat(bin,"1011");
		   break;
		case 'c':
		case 'C':
		   strcat(bin,"1100");
		   break;
		case 'd':
		case 'D':
		   strcat(bin,"1101");
		   break;
		case 'e':
		case 'E':
		   strcat(bin,"1110");
		   break;
		case 'f':
		case 'F':
		   strcat(bin,"1111");
		   break;
		default:
		   gotoxy(40,11);printf("Invalid Input!");
	    }
	  }
	  gotoxy(48,5);printf("%s",hex);
	  gotoxy(40,11);printf("Binary Equalent: %s",bin);
}

void hexao()
{
    char hex[17];
    long long octal, bin, place;
    int i = 0, rem, val;
    gotoxy(22,5);printf("Enter hexadecimal number: ");
    gets(hex);

    octal = 000;
    bin = 000;
    place = 001;

    for(i=0; hex[i]!='\0'; i++)
    {
	bin = bin * place;

	switch(hex[i])
	{
	    case '0':
		bin += 0;
		break;
	    case '1':
		bin += 1;
		break;
	    case '2':
		bin += 10;
		break;
	    case '3':
		bin += 11;
		break;
	    case '4':
		bin += 100;
		break;
	    case '5':
		bin += 101;
		break;
	    case '6':
		bin += 110;
		break;
	    case '7':
		bin += 111;
		break;
	    case '8':
		bin += 1000;
		break;
	    case '9':
		bin += 1001;
		break;
	    case 'a':
	    case 'A':
		bin += 1010;
		break;
	    case 'b':
	    case 'B':
		bin += 1011;
		break;
	    case 'c':
	    case 'C':
		bin += 1100;
		break;
	    case 'd':
	    case 'D':
		bin += 1101;
		break;
	    case 'e':
	    case 'E':
		bin += 1110;
		break;
	    case 'f':
	    case 'F':
		bin += 1111;
		break;
	    default:
		gotoxy(40,11);printf("Invalid Input!");
	}

	place = 10000;
    }

    place = 1;

    while(bin > 0)
    {
	rem = bin % 1000;

	switch(rem)
	{
	    case 0:
		val = 0;
		break;
	    case 1:
		val = 1;
		break;
	    case 10:
		val = 2;
		break;
	    case 11:
		val = 3;
		break;
	    case 100:
		val = 4;
		break;
	    case 101:
		val = 5;
		break;
	    case 110:
		val = 6;
		break;
	    case 111:
		val = 7;
		break;
	}

	octal = (val * place) + octal;
	bin /= 1000;

	place *= 10;
    }
    gotoxy(48,5);printf("%s",hex);
    gotoxy(40,11);printf("Octal Equalent: %lld",octal);

}

void hexad()
{
    char hex[17];
    long long decimal;
    int i = 0, val, len;

    decimal = 0;

    gotoxy(22,5);printf("Enter hexadecimal number: ");
    gets(hex);

    len = strlen(hex);
    len--;


    for(i=0; hex[i]!='\0'; i++)
    {

	if(hex[i]>='0' && hex[i]<='9')
	{
	    val = hex[i] - 48;
	}
	else if(hex[i]>='a' && hex[i]<='f')
	{
	    val = hex[i] - 97 + 10;
	}
	else if(hex[i]>='A' && hex[i]<='F')
	{
	    val = hex[i] - 65 + 10;
	}

	decimal += val * pow(16, len);
	len--;
    }
    gotoxy(48,5);printf("%s",hex);
    gotoxy(40,11);printf("Decimal Equalent: %lld",decimal);

}
