#include "complement.h"
int addOneToBinary(int n){
	int value,r=10,add=1;
	int len = calculateDigits(n);
	value = n;
	while(len > 0){
	if((value % r)==0){
		n = n+add;
		
		break;
	}
	else{
		n=n-add;
	}
	add = add * 10;
	value=value/10;
	}
	return n;
}

int addOneToOctal(int num1)
{
    int sum = 0, digit = 0, carry = 0, digit_rank = 1, num2=1;

    
    while (num1 > 0 || num2 > 0 || carry)
    {
        
        digit = num1 % 10 + num2 % 10 + carry;

        
        if (digit > 7)
        {
            carry = 1;
            digit %= 8;
        }
        else
            carry = 0;

        
        sum += digit * digit_rank;
        digit_rank *= 10;

        
        num1 /= 10;
        num2 /= 10;
    }
    return sum;
}
