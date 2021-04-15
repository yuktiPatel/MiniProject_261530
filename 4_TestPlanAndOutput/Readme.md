# TEST_PLAN

## Table : High Level Test Plan

| Test_ID | Description | EXP I/P | EXP O/P | Actual Out | Type of test |
| ------- | ----------- | ------- | ------- | ---------- | ------------ |
| H_01 | Check whether r and r-1 Complement of the number is computed correctly | (1) r Complement with number and base (2) r-1 Complement with number and base | Call that function and correct complement answer | PASS | Requirement Based |
| H_02 | Check whether the digits are counted correctly or not for the input number | (1) Binary, Octal and Decimal number (2) Hexadecimal Number | Call that function and Count of digits | PASS | Technical |
| H_03 | Check whether one is added correctly to the number | (1) Add one to Binary (2) Add one to octal | Call that function and added one correctly to the number | PASS | Technical |
| H_04 | Check whether the input number is correct or not | (1) Binary Number (2) Octal Number (3) Decimal Number (4) Hexadecimal Number | Call that function and return whether number is correct or not | PASS | Technical |


## Table : Low Level Test Plan

| TEST_ID | HLT_ID | Description | EXP IN | EXP OUT | Actual Output | Type of test |
| ------- | ------ |----------- | ------- | ------- | ---------- | ------------ |
| L_01 | H_01 | Calculated r Complement - Check whether the correct complement is returned or not | Number and the base of that number | Correct r Complement | PASS | Requirement Based |
| L_02 | H_01 | Calculated r-1 Complement - Check whether the correct complement is returned or not | Number and the base of that number | Correct r-1 Complement | PASS | Requirement Based |
| L_03 | H_02 | It will compute the number of digits of the input number for Binary, Octal and Decimal Number | Number | Correct number of digits | PASS | Technical|
| L_04 | H_02 | It will compute the number of digits of the input number for hexadecimal Number | Number | Correct number of digits | PASS | Technical|
| L_05 | H_03 | It will check whether one is added correctly to the binary number | Binary Number | Binary Number with one added | PASS | Technical |
| L_06 | H_03 | It will check whether one is added correctly to the octal number | Octal Number | Octal Number with one added | PASS | Technical |
| L_07 | H_04 | Will check whether the input number is binary or not | Binary Number | 1 if it is binary number -1 if not | PASS | Technical |
| L_08 | H_04 | Will check whether the input number is octal or not | Octal Number | 1 if it is octal number -1 if not | PASS | Technical |
| L_09 | H_04 | Will check whether the input number is decimal or not | Decimal Number | 1 if it is decimal number -1 if not | PASS | Technical |
| L_10 | H_04 | Will check whether the input number is hexadecimal or not | Hexadecimal Number | 1 if it is hexadecimal number -1 if not | PASS | Technical |
