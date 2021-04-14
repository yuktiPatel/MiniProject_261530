/**
 * @file complement.h
 * @author Yukti Patel (you@domain.com)
 * @brief To calculate r and r-1 complement
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __COMPLEMENT_H__
#define __COMPLEMENT_H__
/**
 * @brief to calculate r-1 complement
 * 
 * @param n - number whoes complement we want to find 
 * @param base - base of the number
 * @return int (r-1)complement of number
 */
int r1Complement(int num, int base);
/**
 * @brief to calculate r complement
 * 
 * @param n 
 * @param base 
 * @return int 
 */
int rComplement(int num, int base);
/**
 * @brief to calculate digits of binary,octal and hexadecimal number 
 * 
 * @param n 
 * @return int 
 */
int calculateDigits(int n);
/**
 * @brief to calculate digits of hexadecimal number
 * 
 * @param n 
 * @return int 
 */
int calculateHexDigits(int n);
/**
 * @brief to add one to binary number
 * 
 * @param n 
 * @return int 
 */
int addOneToBinary(int n);
/**
 * @brief to add one to octal number
 * 
 * @param num1 
 * @return int 
 */
int addOneToOctal(int num1);

#endif
