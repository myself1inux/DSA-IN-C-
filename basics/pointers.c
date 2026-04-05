#include<stdio.h>
#include<stdlib.h>
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

    //Creating array inside the heap section of the memory
    //Since we are using malloc function in the program so we have to include stdlib named library for that
    //Comment till line 46 from line 3 for better understanding 
    int *c;//Creating pointer 
    c=(int *)malloc(5*sizeof(int));
    //Here we are creating a array in the heap section of the memory using malloc function 
    //The size of the array is 5 and the type or array is interger
    //Since malloc function return void type pointer so that we have to type cast it into int pointer.
    //And finally assigning it to c pointer


    //Initialising the values
    c[0]=10;
    c[1]=20;
    c[2]=30;
    c[3]=40;
    c[4]=50;

    //Printing the values

    for(i=0;i<5;i++){
        printf("%d\n",c[i]);
    }
    return 0;
}