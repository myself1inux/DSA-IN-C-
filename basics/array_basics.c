#include<stdio.h>
int main(){
    int A[]={1,2,3,4,5,6,7,8,9,0};//This can also be initialised as this 
    int B[5]={1,2,3,4};//2nd method
    B[4]=5;//also intialised after declaration
    
    int C[10]={0};//All element are intialised as 0

    printf("%d\n",C[2]);//print 3rd elemnt in array C which is at index 2nd

    //Now printing all the element in array b
    int i;
    for(int i=0;i<5;i++){
        printf("%d\n",B[i]);
    }
    
    return 0;
}