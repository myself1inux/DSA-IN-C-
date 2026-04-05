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


    //Pointer to an array
    //Comment till line 19 from line 3 for better understanding 
    
    int A[5]={1,2,3,4,5};
    int *b;
    //Initialising pointer to an array
    //Method 1

    b=A; // Here we don't need to put &(ampersand) because the array A itself contains the address of its first element

    //Method 2
    b=&A[0];//Here we need to add &(ampersand) because we are specifying the index of the array.

    //Accessing all the elemtnt of the array
    //Method 1
    int i;
    for(i=0;i<5;i++){
        printf("%d\n",A[i]);//using the name of array name
    }
    //Pointer acts as the name of array name in case of array to pointer. So we can use name of pointer instead of array name 
    
    //Method 2
    for(i=0;i<5;i++){
        printf("%d\n",b[i]);//Works same as Method 1
    }
    return 0;
}