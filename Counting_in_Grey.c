#include <stdio.h>
int Bin_To_Grey(int) ;
int Decimal_To_Bin (int) ;
int Count_Input() ;
int main (){
    int Count = Count_Input() ;
    for (size_t i = 0 ; i <= Count; i++)
        printf("%d\n",Bin_To_Grey(Decimal_To_Bin(i))) ;
}
int Count_Input(){
    int Counter ; 
    do
    {
        printf("Enter How Many Counting You Want : ") ;
        scanf("%d",&Counter) ;
    } while (Counter < 0);
    return Counter ;
}
int Decimal_To_Bin(int Decimal){
    if(Decimal == 0)
    return 0 ;
    else 
    return (Decimal % 2 + Decimal_To_Bin(Decimal / 2) * 10 ) ;
}
int Bin_To_Grey (int Binary){
    if (Binary < 10)
        return Binary ;
    else {
        Bin_To_Grey(Binary/10) ;
        if(Binary%10 + (Binary/10)%10 == 1)
        return 1 + 10 * Bin_To_Grey(Binary/10);
        else 
        return 10 * Bin_To_Grey(Binary/10) ;
    }
}