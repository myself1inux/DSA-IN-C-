#include<stdio.h>
//Creating a structure
struct rectangle {
    int length; //Creating structure member
    int breadth;//Creating structure member
    char value;//Creating a char member 
} r3; // Also can create variable here which is golbal 
//Only creating a structure do not occupy any space in memory
//Creating global structure variable
    struct rectangle r1={1,2,'A'}; //r1 is name of variable //Initialising structure varible METHOD 1
int main(){
    struct rectangle r2; //This variable local to main function
    printf("%d\n",sizeof(struct rectangle));//This will print 12 instead of 4+4+1 because of padding 
    //Accesing structure member
    r1.length =  1; // Method 2
    r1.breadth = 2; // Method 2 
    
     printf("%d",r1.length);//Printing the lenght of r1 variable
    return 0;
}