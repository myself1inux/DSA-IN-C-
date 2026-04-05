#include<stdio.h>
int main(){
    int a=10;
    int *p;//Declaration of a pointer 
    p=&a;//Initialisation the pointer 
    
    //Printing the value of variable a
    //Method 1
    printf("%d is value of a by using variable\n",a);//Printing the value of a by using variable name 
    //Method 2 
    printf("%d is the value of a by using pointer p\n",*p);//Printing the value of a by using pointer p 
    //The place where *p is written in above line is called DEREFRECING.
    //Above both method will print the same value 

    //Printing the memory location of variable a 
    //Method 1
    printf("%d is the adderss of variable a\n",&a);
    //Method 2 
    printf("%d is the adderss of variable a\n",p);
    return 0;
}