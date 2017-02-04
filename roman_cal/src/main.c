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

#include "roman_cal.h"
#include<stdio.h>

/* only main should be in this file, to make all other functions in
   the prograble testable by Check.  in order to test main(), use a
   whole program testing framework like Autotest.
*/

int main() {
	/*test  IXI,0  XXXIX XL iiiiv  iivi  mmcdiii  mmcidiii,0 lixvx ix MMMDCCCLXXXviii  MMMCMXCIX MMMMCMXCIX*/
	char str2[]="MMMCMXCVIII" ;
	int len=strlen(str2),num;
	printf("Enter the decimal value: ");
	scanf("%d",&num);
   //printf("neg int is %d \n",-10);
    //printf("size of iii is : %ld\n",strlen(str2));
    printf("value of roman is %d\n",if_roman_number_return_decimal(str2,len));
    char *szSomeString = if_decimal_return_roman(num); 
    printf("%s", szSomeString);
    free(szSomeString);
   return 0;
}

