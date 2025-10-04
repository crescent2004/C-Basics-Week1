#include<stdio.h>

int main()
{
// declare an integer 
int num;
// ask the user to enter a number 
    printf("enter a number: ");
    // reading the number entered by user
    scanf("%d", &num);
    if(num % 2== 0){
    // telling the user the number 
    printf("%d is even number \n",num);}
    else   {
    // telling the user the number 
    printf ("%d is old number \n",num);}
    
    return 0;
}
