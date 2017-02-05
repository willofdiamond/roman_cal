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
#include  <stdio.h>
#include  <string.h>

/* only main should be in this file, to make all other functions in
   the prograble testable by Check.  in order to test main(), use a
   whole program testing framework like Autotest.
*/

int main() {
  char str1[20]="",str2[20]="";
  char *result_roman_string;
  int result,math,str1_num,str2_num,len1,len2,ch;
  printf("Welcome to Roman Number Calculator\n");
  while(1){
    result=0;
    math=0;
    str1_num=0;
    str2_num=0;
    len1=0;
    len2=0;
    printf("Enter the first roman number EX:III : ");
    if(scanf("%s",str1)==1);
    //printf("Entered string is %s\n",str1);
    printf("\n");
    len1=strlen(str1);
   // printf("len1 is %d\n",len1);
    str1_num=if_roman_number_return_decimal(str1, len1);
    if(roman_number==0){
       printf("Entered string is not a vaild roman number\n");
       continue;
     }
    printf("Enter the second roman number EX:IV : ");
    if(scanf("%s",str2)==1);
    printf("\n");
    len2=strlen(str2);
    //printf("len2 is %d\n",len2);
    str2_num=if_roman_number_return_decimal(str2, len2);
    if(roman_number==0){
       printf("Entered string is not a vaild roman number\n");
       continue;
     }
    printf("Enter the 1 for addition, 2 for subtraction : ");
    if(scanf("%d",&math)==1);
    printf("\n");
  
    if(roman_number!=0&&math==1){
       result=str1_num+str2_num;   
     }
    else if(roman_number!=0&&math==2){
       result=str1_num-str2_num;
    }
    if(result>0&&result<4000){
    result_roman_string = if_decimal_return_roman(result); 
    printf("Result is %s \n", result_roman_string);
    }else{
    printf("Result of the entered roman numbers is out of 0 to 3999 range\n");
    }
    printf("Enter 1 to exit or any other number to continue: ");
    scanf("%d",&ch);
    //printf("\nEntered char is %d",ch);
    printf("\n");
    if(ch==1){
      break;
    }
  
    roman_number=2;
  }

return 0;
}

