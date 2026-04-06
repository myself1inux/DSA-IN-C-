#include<stdio.h>
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

    return 0;
}