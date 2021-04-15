#include "complement.h"
int checkBinary(int n){
	while (n > 0){
		if(((n%10) == 0) || ((n%10) == 1)){
			n = n/10;
		}
		else{
			return -1;
		}
	}
	return 1;
}

int checkOctal(int n){
	while(n > 0){
		if(((n % 10) >= 0) && ((n % 10) < 8)){
			n = n/10;
		}
		else{
			return -1;
		}
	}
	return 1;
}
 

int checkDecimal(int n){
	while(n > 0){
		if(((n % 10) >= 0) && ((n % 10) < 10)){
			n = n/10;
		}
		else{
			return -1;
		}
	}
	return 1;
}


int checkHexadecimal(int n){
	while(n > 0){
		if(((n % 0x10) >= 0x00) && ((n % 0x10) < 0x10)){
			n = n/0x10;
		}
		else{
			return -1;
		}
	}
	return 1;
}
