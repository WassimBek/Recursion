#include <stdio.h>
int User_Array_Size() ;
int Array_Max (int [] , int) ;
int main (){
    //Size of An Array
    int Size = User_Array_Size() ;
    //Declaration Of Array
    int Array_Numbers [Size] ;
    for (size_t i = 0; i < Size; i++)
    {
        printf("Enter %d Number : ",i+1) ;
        scanf("%d",&Array_Numbers[i]) ;
    }
    //iF The Size is 1 So The Maximum Number is it self
    if(Size == 1)
    printf("The maximum Number in Array is %d",Array_Numbers[0]) ;
    else 
    printf("Tha Maximum Number in Array is %d",Array_Max(Array_Numbers,Size-1)) ;
} 
int User_Array_Size(){
    int Size ;
    //Enter The Size Of Matrix 
    do
    {
    printf("Enter The Size Of array greater then zero : ") ;
    scanf("%d",&Size) ;
    } while (Size <= 0);
    return Size ;
}
//Function That Will return The Maximum Value In array
int Array_Max (int User_Array[] , int Array_Size){

    if(Array_Size == 1)
    return User_Array[0] ;
    else
    {
        if(User_Array[Array_Size-1]>Array_Max(User_Array,Array_Size-1))
            return User_Array[Array_Size-1] ;
         else 
        return Array_Max(User_Array,Array_Size-1) ;
    }
}