/*
 * Header file for Roman Number calculator
 */




#ifndef ROMAN_H// wrapper to protect from multiple header calls
#define ROMAN_H
//gobal variables
int roman_number;

//functions
const char* return_roman(int number);
int return_decimal(char char1);
int if_roman_number_return_decimal(char * str, int len);
int has_all_core_roman_char(char *str);
//int find_maximum_array(int array[], int len_n);
char* if_decimal_return_roman(int dec_number);

;
#endif /* ROMAN_H */

