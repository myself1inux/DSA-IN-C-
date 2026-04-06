#include<stdio.h>
#include<stdlib.h>
int main(){
    struct rectangle {
        int length;
        int breadth;
    };
    struct rectangle r1;
    struct rectangle *p=&r1; //Here we are creating a pointer which stores the address of a structure named rectangle
    //Above line creates a pointer to a structure and initialised with structure variable r1 which hold the base address of r1

    //For accessing the member of the structure using the pointer p 
    //Method 1
    (*p).length=10;//This defrefrence the pointer and access it length named member 
    //()paranthesis is used because the priority of . operator is higher than the derefrencing operator.

    //Method 2
    p ->length=10; //This is a short method for accesing any member in any structure using the pointer.

    //Both the method will work same 

    p->breadth=20;

    printf("%d is the length of the rectangle\n",(*p).length);
    printf("%d is the breadth of the rectangle\n",p->breadth);


    //Creating a structure dynamically in the heap section of the memory
    struct square {
        int side1;
        int side2;
    };
    struct square *a=(struct square *)malloc(sizeof(struct square));//This will create a pointer a and pointing to the structure square created in the heap of the memory
    
    a-> side1=10;
    a->side2=20;

    printf("%d is the side1\n",a->side1);
    printf("%d is the side2\n",a->side2);
    
    return 0;
}