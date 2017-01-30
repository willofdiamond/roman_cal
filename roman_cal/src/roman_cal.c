/*
 * Check: a unit test framework for C
 * Copyright (C) 2001, 2002 Arien Malec
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */

//maximum possible roman number is mmmDcccLxxxviii which has 15 charecters and its decimal value  
//is 3888<2Bytes.

#include <stdlib.h>
#include <string.h>
#include "roman_cal.h"

int has_all_core_roman_char(char *str){

/*
This function intended to find if the string has core roman elements:
I, V, X, L, C, D, and M
if any other charecter appeat then this function will return 0;
if the entire string is made of basic roman charecters then this function will return 1.
*/
char *i;
int out=1;
for(i=str;*i;i++){
    if(!return_decimal(*i)){
     out=0; 
     break;
      }
     

}
return out;
}


int return_decimal(char char1){
    int out1=0;
    switch(char1){
    case 'I': out1=1; break;
    case 'V': out1=5; break;
    case 'X': out1=10;break;
    case 'L': out1=50; break;
    case 'C': out1=100; break;
    case 'D': out1=500; break;
    case 'M': out1=1000; break;
    }
return out1;
}


int is_roman_number(char * str){



}

int roman_to_decimal(char * str){

}

char* decimal_to_roman(int number){

}



char convert_locase_to_UPCASE(char* str){

}


int main(void)
{
    return 0;
}
