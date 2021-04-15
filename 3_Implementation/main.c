#include <stdio.h>
#include <stdlib.h>
#include "complement.h"
int main(){
    int base,r,num;
    printf("Enter in which form your number is (Press number) : \n");
    printf("2-Binary\n8-Octal\n10-Decimal\n16-Hexadecimal\n");
    scanf("%d",&base);
    printf("Enter which complement you want to calculate\n");
    if(base == 2){
        printf("1 for 1's complement\n");
        printf("2 for 2's complement\n");
    }
    if(base == 8){
        printf("7 for 7's complement\n");
        printf("8 for 8's complement\n");
    }
    if(base == 10){
        printf("9 for 9's complement\n");
        printf("10 for 10's complement\n");
    }
    if(base == 16){
        printf("15 for 15's complement\n");
        printf("16 for 16's complement\n");
    }
    scanf("%d",&r);
    printf("Please Enter your number\n");
    if(base == 16){
    	scanf("%x",&num);
    }
    else{
    	scanf("%d",&num);
    }
    if((r == 1) || (r == 7) || (r == 9) || (r == 15)){
    	if(r == 15){
    		printf("%x",r1Complement(num,base));
    	}
    	else{
    		printf("%d",r1Complement(num,base));
    	}
    }
    else{
    	if(r == 16){
    		printf("\n%x",rComplement(num,base));
    	}
    	else{
    		printf("%d",rComplement(num,base));
    	}
    }
    return 0;
}
