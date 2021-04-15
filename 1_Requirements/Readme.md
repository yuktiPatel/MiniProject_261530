# Requirements

## Introduction
* The integer variables are represented in a signed and unsigned manner. The positive and negative values are differentiated by using the sign flag in signed numbers. We represent the positive numbers without adding any sign before them and the negative number with - (minus) sign before them. But in the digital system, it is not possible to use negative sign before them because the data is in binary form in digital computers. So to represent a negative number we use a complement of that number.
* Complements are used in digital circuits because it is faster to subtract by adding complements than by performing true subtraction. Complements are also used for performing logical operations. The most commonly used complements are 1's, 2's, 9's, and 10's complement. Apart from these complements, there are many more complements from which mostly peoples are not familiar.
* We can find complement of any number based system which are 
1. Binary
2. Octal
3. Decimal
4. Hexadecimal

* If r is the base of the number system, then there are two types of complements that are possible, i.e., r's and (r-1)'s. We can find the r's complement, and (r-1)'s complement of the number, here r is the radix. The r's complement is also known as Radix complement (r-1)'s complement, is known as Diminished Radix complement.
* If the base of the number is 2, then we can find 1's and 2's complement of the number. Similarly, if the number is the octal number, then we can find 7's and 8's complement of the number.

## Research
### Radix and Diminished Radix complement features and benefits

Main aim of finding Radix and Diminished Radix complement is obtain the negative number. This system will ask user which number system they are using also it will ask whether they want to find the radix complement or the diminished radix complement and will take input of the number.

### Benifits

Radix and Diminished Radix Complement 
* The use of complements is to mainly perform Subtraction. We can easily perform addition, in contrast if we would like to implement subtraction using logic gates we require more digital hardware for borrowing and it is also less efficient.
* The negative zeros are also eliminated by r's complement.  

## Defining our system
### Explaination
* Radix and Diminished Radix Complex have few inbuilt features 
> 1's and 2's Complement

> 7's and 8's Complement

> 9's and 10's Complement

> 15's and 16's Complement

## SWOT Analysis

![](https://github.com/yuktiPatel/MiniProject_261530/blob/main/1_Requirements/swot%20analysis.png)


# 4W's and 1'H

## Who:
* Microprocessors, microcontrollers, digital logic systems.

## What:
* To represent any negative number we can use minus(-) sign but the computer does not use this sign instead it will store its complement. Also for doing subtraction, we need additional hardware for borrow but we can do the addition of the 1st number and 2nd number compliment which will be faster and will also not need the additional hardware.

## When:
* This problem begin when we start to integrate arithmetic operations and logical operations in processors, controller or any hardware.

## Where:
* This project is expected to be used in hardware where arithmetic or logical operations are needed to be performed. 

## How:
* For subtraction, we require additional circuitry so this subtraction can be done without any additional hardware by using addition. So for this complement of 2nd number will be taken


# Detail Requirements

## High Level Requirements

| ID |Description | Category | Status |
| --------------- | --------------- | --------------- | ----------------- |
| HR01 | User shall be able to choose the number system and complement| Technical | Implemented |
| HR02 | User shall be able to exit or to continue with the system | Technical |  In progress |
| HR03 | Inputs from the user shall also be validated | Technical | Implemented |

## Low Level Requirements

| ID |Description | HLR ID | Status |
| --------------- | --------------- | --------------- | ----------------- |
| LR01 | User shall be able to choose the number system : Binary, Octal, Decimal, Hexadecimal| HR01 | Implemented |
| LR02 | User shall be able to select 1 or 2 Complement for Binary Number System | HR01 |  Implemented |
| LR03 | User shall be able to select 7 or 8 Complement for Octal Number System | HR01 |  Implemented |
| LR04 | User shall be able to select 9 or 10 Complement for Decimal Number System | HR01 |  Implemented |
| LR05 | User shall be able to select 15 or 16 Complement for Hexadecimal Number System | HR01 |  Implemented |
| LR06 | User shall be able to select whether he want to continue or exit the system | HR02 |  In progress |
| LR07 | System will check whether the user has inputted correct number system(base) or not | HR03 | Implemented |
| LR08 | System will check wheater the user has inputted correct complement or not | HR03 | Implemented |
| LR09 | System will check wheater the user has inputted valid number or not | HR03 | Implemented |
