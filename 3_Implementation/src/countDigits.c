#include "complement.h"
int calculateDigits(int n){
	int len=0;
	while(n>0){
		n=n/10;
		len++;
	}
	return len;

}

int calculateHexDigits(int n){
	int len = 0;
	while(n>0){
		n = n / 0x10;
		len++;
	}
	return len;
}
