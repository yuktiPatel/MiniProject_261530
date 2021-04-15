#include <stdio.h>
#include <stdlib.h>
#include "inc/complement.h"
int main(){
    int base,r,num;
    unsigned int num_hex;
    printf("Enter in which form your number is (Press number) : \n");
    printf("2-Binary\n8-Octal\n10-Decimal\n16-Hexadecimal\n");
    scanf("%d",&base);
    

    if(base == 2){
        printf("Enter which complement you want to calculate\n");
        printf("1 for 1's complement\n");
        printf("2 for 2's complement\n");
    	scanf("%d",&r);
    	if(r == 1 || r == 2){
    		printf("Please Enter your number\n");
    		scanf("%d",&num);
    		if(checkBinary(num) == -1){
    			printf("Please Enter Correct Binary Number");		
    		}
    		else{
    			if(r == 1){
    				printf("%d",r1Complement(num,base));
    			}
    			else{
    				printf("%d",rComplement(num,base));
    			}
    		}
    	}
    
    	else{
    		printf("Please enter correct complement");
    	}
    }
    else if(base == 8){
        printf("Enter which complement you want to calculate\n");
        printf("7 for 7's complement\n");
        printf("8 for 8's complement\n");
    	scanf("%d",&r);
	if(r == 7 || r == 8){
    		printf("Please Enter your number\n");
    		scanf("%d",&num);
    		if(checkOctal(num) == -1){
    			printf("Please Enter Correct Octal Number");		
    		}
    		else{
    			if(r == 7){
    				printf("%d",r1Complement(num,base));
    			}
    			else{
    				printf("%d",rComplement(num,base));
    			}
    		}
    	}
    
    	else{
    		printf("Please enter correct complement");
    	}
    }
    else if(base == 10){
        printf("Enter which complement you want to calculate\n");        
        printf("9 for 9's complement\n");
        printf("10 for 10's complement\n");
    	scanf("%d",&r);
    	if(r == 9 || r == 10){
    		printf("Please Enter your number\n");
    		scanf("%d",&num);
    		if(checkDecimal(num) == -1){
    			printf("Please Enter Decimal Binary Number");		
    		}
    		else{
    			if(r == 9){
    				printf("%d",r1Complement(num,base));
    			}
    			else{
    				printf("%d",rComplement(num,base));
    			}
    		}
    	}
    
    	else{
    		printf("Please enter correct complement");
    	}
    }
    else if(base == 16){
        printf("Enter which complement you want to calculate\n");    
        printf("15 for 15's complement\n");
        printf("16 for 16's complement\n");
    	scanf("%d",&r);
    	if(r == 15 || r == 16){
    		printf("Please Enter your number\n");
    		scanf("%x",&num_hex);
    		if(checkHexadecimal(num_hex) == -1){
    			printf("Please Enter Correct Hexadecimal Number");		
    		}
    		else{
    			if(r == 15){
    				printf("%x",r1Complement(num_hex,base));
    			}
    			else{
    				printf("%x",rComplement(num_hex,base));
    			}
    		}
    	}
    
    	else{
    		printf("Please enter correct complement");
    	}
    }
    else{
    	printf("Please Enter Correct Base");
    }
       
    return 0;
}
