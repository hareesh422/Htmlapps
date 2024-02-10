C Programs by using Functions
----------------------------------------------------------------------------------------------------------------------------
Addition of two numbers

#include <stdio.h>
void addition(int a,int b)
{ 
  int result;
  result=a+b;
  printf("%d\n",result);
}
int main()
{
  addition(2,5);
  addition(12,6);
  
}
------------------------------------------------------------------
Subtraction of numbers
#include <stdio.h>
void subtraction(int a,int b)
{ 
  int result;
  result=a-b;
  printf("%d\n",result);
}
int main()
{
    subtraction(6,3);
    subtraction(22,64);
}

------------------------------------------------------------------
Multiplication Of numbers
#include <stdio.h>
void Multiplication(int a,int b)
{ 
  int result;
  result=a*b;
  printf("%d\n",result);
}
int main()
{
    Multiplication(6,3);
    Multiplication(22,64);
}
------------------------------------------------------------------
Average of numbers
#include <stdio.h>
void Average(int a,int b,int c)
{ 
  int result;
  result=a+b+c/3;
  printf("%d\n",result);
}
int main()
{
    Average(6,3,4);
    Average(22,64,5);
}