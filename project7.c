#include<stdio.h>

int main()
{
int num1, num2, num3;
      //asking users to enter data
    printf("Enter three numbers");
    scanf("%d, %d, %d",&num1 ,&num2 ,&num3);
    if(num1 >= num2 && num1 >= num3 ){
    printf("the largest number is: %d\n num1");// reading data
    }
    else if(num2 >= num1 && num2 >= num3 ){
    printf("the largest number is: %d\n num2");
    }
    else{
   printf("the largest number is: %d\n",num3);
   }
   
    return 0;
}
