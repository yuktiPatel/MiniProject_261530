#include <stdio.h>
#include <stdlib.h>
#include "inc/complement.h"
int main(){
    int base,r,num;
    unsigned int num_hex;
    printf("Enter in which form your number is (Enter base number) : \n\n\n\n");
    printf(" 2 - Binary\n 8 - Octal\n 10 - Decimal\n 16 - Hexadecimal\n\n\n");
    scanf("%d",&base);
    printf("\n");
    printf("\n");
    

    if(base == 2){
        printf("Enter which complement you want to calculate\n");
        printf("Enter 1 for 1's complement\n");
        printf("Enter 2 for 2's complement\n");
    	scanf("%d",&r);
    	if(r == 1 || r == 2){
    		printf("\n\nPlease Enter your number\n");
    		scanf("%d",&num);
    		if(checkBinary(num) == -1){
    			printf("\n\nPlease Enter Correct Binary Number\n\n");		
    		}
    		else{
    			if(r == 1){
    				printf("\n\n%d is the %d complement\n\n",r1Complement(num,base),r);
    			}
    			else{
    				printf("\n\n%d is the %d complement\n\n",rComplement(num,base),r);
    			}
    		}
    	}
    
    	else{
    		printf("\n\nPlease enter correct complement\n\n");
    	}
    }
    else if(base == 8){
        printf("Enter which complement you want to calculate\n");
        printf("Enter 7 for 7's complement\n");
        printf("Enter 8 for 8's complement\n");
    	scanf("%d",&r);
	if(r == 7 || r == 8){
    		printf("\n\nPlease Enter your number\n");
    		scanf("%d",&num);
    		if(checkOctal(num) == -1){
    			printf("\n\nPlease Enter Correct Octal Number");		
    		}
    		else{
    			if(r == 7){
    				printf("\n\n%d is the %d complement\n\n",r1Complement(num,base),r);
    			}
    			else{
    				printf("\n\n%d is the %d complement\n\n",rComplement(num,base),r);
    			}
    		}
    	}
    
    	else{
    		printf("\n\nPlease enter correct complement\n\n");
    	}
    }
    else if(base == 10){
        printf("Enter which complement you want to calculate\n");        
        printf("Enter 9 for 9's complement\n");
        printf("Enter 10 for 10's complement\n");
    	scanf("%d",&r);
    	if(r == 9 || r == 10){
    		printf("\n\nPlease Enter your number\n");
    		scanf("%d",&num);
    		if(checkDecimal(num) == -1){
    			printf("\n\nPlease Enter Decimal Binary Number\n\n");		
    		}
    		else{
    			if(r == 9){
    				printf("\n\n%d is the %d complement\n\n",r1Complement(num,base),r);
    			}
    			else{
    				printf("\n\n%d is the %d complement\n\n",rComplement(num,base),r);
    			}
    		}
    	}
    
    	else{
    		printf("\n\nPlease enter correct complement\n\n");
    	}
    }
    else if(base == 16){
        printf("Enter which complement you want to calculate\n");    
        printf("Enter 15 for 15's complement\n");
        printf("Enter 16 for 16's complement\n");
    	scanf("%d",&r);
    	if(r == 15 || r == 16){
    		printf("\n\nPlease Enter your number\n");
    		scanf("%x",&num_hex);
    		if(checkHexadecimal(num_hex) == -1){
    			printf("\n\nPlease Enter Correct Hexadecimal Number\n\n");		
    		}
    		else{
    			if(r == 15){
    				printf("\n\n%x is the %d complement\n\n",r1Complement(num_hex,base),r);
    			}
    			else{
    				printf("\n\n%x is the %d complement\n\n",rComplement(num_hex,base),r);
    			}
    		}
    	}
    
    	else{
    		printf("\n\nPlease enter correct complement\n\n");
    	}
    }
    else{
    	printf("\n\nPlease Enter Correct Base\n\n");
    }
       
    return 0;
}
