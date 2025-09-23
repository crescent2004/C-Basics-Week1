include<stdio.h>

int main()
{
     // printing my own details 
    printf("my name is crescent Likando.\n");
    printf("I am 23 yrs old.\n");
    printf("my hobby is watching football.\n");
    
     // asking for users details 
    char name[80];
    int age;
    
    printf(" Enter your name: ");
    scanf("%79s", name); 
    
    printf(" Enter your age: ");
    scanf("%d", &age);
    
    printf("hello, you are %s, %d years old .\n", name , age );
    
    return 0;
}
    
