#include <stdio.h>
#include <math.h>
//Function That will Reverse The Number
int Reversing_number (int) ;
int main (){
    int Number ;
    printf("Enter Number : ") ;
    scanf("%d",&Number) ;
    printf("The reversing of %d is %d",Number,Reversing_number(Number)) ;
}
int Reversing_number (int User_Num){
    if(User_Num < 10) 
    return User_Num ;
    else 
    // log10 will return how Many degits in the number -1 
    return (User_Num % 10) * pow(10,(int)log10(User_Num)) + Reversing_number (User_Num/10) ;
}