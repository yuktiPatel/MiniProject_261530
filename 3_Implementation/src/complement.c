//#include "complement.h"
extern int calculateHexDigits(int n);
extern int calculateDigits(int n);
extern int addOneToOctal(int num1);
extern int addOneToBinary(int n);

int r1Complement(int n, int base){
	int len;
	if(base == 16){
		int max=0x00;
		len = calculateHexDigits(n);
		for(int i=0;i<len;i++){
			max = max * (0x10) + 0xF;
		}
		return (max-n);

	}
	int max = 0;
	len = calculateDigits(n);
	for(int i=0;i<len;i++){
		max = max*10 + (base-1);
	}
	return (max - n);
	
}

int rComplement(int n,int base){
	int value;
	value = r1Complement(n,base);
	if(base == 10){
		return (value+1);
	}
	else if(base ==8){
		value = addOneToOctal(value);
		return value;		
	}
	else if(base == 2){
		value = addOneToBinary(value);
		return value;
	}
	else if(base == 16){
		return (value +0x01);
	}
}
