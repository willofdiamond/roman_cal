/*
 * 
 */

//maximum possible roman number is mmmDcccLxxxviii which has 15 charecters and its decimal value  
//is 3888<2Bytes.

#include <stdlib.h>
#include <string.h>
#include "roman_cal.h"
#include <ctype.h>
#include <stdio.h>
int roman_number=2;

//*********** Function to check if only roman numbers are present**********//
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
//*********** Function to check if only roman numbers are present end**********//

//******** Function to return decimal numbers************************************//
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
//******** Function to return roman numbers end************************************//

//********* Function to return roman numbers **************************************//
const char* return_roman(int number){
    //char out1[5]="";
    switch(number){
      case 1:   return "I";    break;
      case 2:   return "II";   break;
      case 3:   return "III";  break;
      case 4:   return "IV";   break;
      case 5:   return "V";    break;
      case 6:   return "VI";   break;
      case 7:   return "VII";  break;
      case 8:   return "VIII"; break;
      case 9:   return "IX";   break;
      case 10:  return "X";    break;
      case 20:  return "XX";   break;
      case 30:  return "XXX";  break;
      case 40:  return "XL";   break;
      case 50:  return "L" ;   break;
      case 60:  return "LX";   break;
      case 70:  return "LXX";  break;
      case 80:  return "LXXX"; break;
      case 90:  return "XC";   break;
      case 100: return "C";    break;
      case 200: return "CC";   break;
      case 300: return "CCC";  break;
      case 400: return "CD";   break;
      case 500: return "D";    break;
      case 600: return "DC";   break;
      case 700: return "DCC";  break;
      case 800: return "DCCC"; break;
      case 900: return "CM";   break;
      case 1000:return "M";    break;
      case 2000:return "MM";   break;
      case 3000:return "MMM";  break;
    }
return "";
}
//******** Function to return roman numbers end************************************//


//*********************************************** function to convert Roman to decimal *******************//
int if_roman_number_return_decimal(char * str, int len){
	/*
	 * roman_number: 3 not processed
	 *                  0 not a valid roman number
	 *                  1 string is valid roman number
	 * check_NEG:        check_neg says X or C or m has excedded the max 3 repetation limit but may be because they were negatives
	 *            10 check if x is negative is or has negative
	 *            100 check if c is negative or has
	 *            1000 check if M has negative
	 *            0   no need to check
	 * has_NEG:2 unprocessed
	 *         1 had one negative char
	 *         0 no negative char
	 * */
  int Roman_to_decimal=0;
  roman_number=1;// assuming given string is roman number until proven wrong by my conditions
  if(has_all_core_roman_char(str) &&len>1){  // continue analysis if all elements are of roman   
     char *i,present_char,past_char;
     int j=0,has_NEG=2,check_NEG=0,sum_NEG=0,Neg_ind,k=0;
     int check_middel_Roman,high_Roman,high_Roman_index,Neg_check_sum=0,pass_three=5;
     int cond2,cond3,cond4,cond2_satisfied=0;
     int NEG=0;
    // int str_array[len];
     int count_array[7]={0}; // creating an array to save the integer values of the elements in roman string
     for(i=str;*i&&len>1;i++,j++){
		 //************** logic to keep track of variable in string count **********//
		 switch(toupper(str[j])){
			
			case 'I': count_array[0]+=1; break;
			case 'V': count_array[1]+=1; break;
			case 'X': count_array[2]+=1; break;
			case 'L': count_array[3]+=1; break;
			case 'C': count_array[4]+=1; break;
			case 'D': count_array[5]+=1; break;
			case 'M': count_array[6]+=1; break;
		 }
		 if((count_array[1]>1)||(count_array[3]>1)||(count_array[5]>1)||(count_array[0]>3)||(count_array[2]>4)||(count_array[4]>4)||(count_array[6]>4)){
			 roman_number=0;
			 Roman_to_decimal=0;
			 break;
		 }else if(count_array[2]>3){
			 check_NEG=10;
			
		 }else if(count_array[4]>3){
			 check_NEG=100;
			
		 }else if(count_array[6]>3){
			 check_NEG=1000;
			
		 }
		
		 //************** logic to keep track of variable in string count end **********//
		 //*************** logic to keep track of no of negative numbers and left to right decrese in value ************//
		 present_char=toupper(str[j]);
		 if(j>0){ 
			 if(return_decimal(past_char)>=return_decimal(present_char)){ //find highest roman number in the obtained string
				 if(high_Roman<return_decimal(past_char)||j==1){
				    high_Roman=return_decimal(past_char);
				    high_Roman_index=j-1;
				
			           }
		         }	  
			 else{
				 if(high_Roman<return_decimal(present_char)||j==1){
				 high_Roman=return_decimal(present_char);
				 high_Roman_index=j;
				
			         }
				 
			 }
			 if((return_decimal(past_char)-return_decimal(present_char))<0){// finding negative indexes 
				 has_NEG=1;
				 pass_three=0; 
				 Neg_check_sum=0;
				 sum_NEG+=1;
				 Neg_ind=j-1;
				 NEG=return_decimal(past_char);
				 
				 /*
				  * ((NEG==check_NEG||return_decimal(present_char)==check_NEG) if I,X,C are proparly used used for negative, value 1 if properly used
				  * (NEG>=return_decimal(present_char)/10) make sure that negative values are 1/10 of their right value
				  * ((has_NEG&&high_Roman_index==0&&Neg_ind>0)==(has_NEG&&high_Roman_index==1&&Neg_ind==0)) make sure that highest value exist in first two index values
				  * */
				 //cond1=sum_NEG>1; not valid
				 cond2=(NEG==check_NEG||return_decimal(present_char)==check_NEG); //check if 4th time repeted roman nuber has or is a negative
				 cond3=!(NEG>=return_decimal(present_char)/10);                   //check if the negative number is atleast 1/10 of the right side roman number
				 cond4=((has_NEG&&high_Roman_index==0&&Neg_ind>0)==(has_NEG&&high_Roman_index==1&&Neg_ind==0));//check if the highest roman in the string is at the start of the string
				 if(cond2){
					 cond2_satisfied=1;
				 }
				 if(check_NEG!=0&&j==len-1&&cond2_satisfied!=1){
					 roman_number=0;
					 Roman_to_decimal=0;
					 break;
				 }
				 if(cond3||cond4){
					 roman_number=0;
					 Roman_to_decimal=0;
					
			        
			         break;
				 }
			 }
			 //*************************** Logic to make sure  negatives are used properly*******************
			 //int loop_start=0;
			 if((has_NEG==1 ||pass_three<2)){
				 if(Neg_ind==j-1){
					Neg_check_sum-=return_decimal(past_char);
					check_middel_Roman=return_decimal(present_char);
				 }
				 pass_three+=1;
				 Neg_check_sum+=return_decimal(present_char); // used past char
				 }
				 if((pass_three==2)&&(Neg_check_sum>=check_middel_Roman)){ //no need for negative if Neg_check_sum>=check_middel_Roman Ex: ixii
					 roman_number=0;
					 Roman_to_decimal=0;
					
			         break;
				 }
					 //************************ Logic to make sure  negatives are used properly ***************************************
	     }
	   
		 //****************************************code to create a decimal value ***************************************
		 k=1;
		 if(has_NEG==1){
			 k=-1;
			 has_NEG=0;
		 }
		 Roman_to_decimal+=k*return_decimal(past_char);
		 if(j==len-1){
			 Roman_to_decimal+=return_decimal(present_char); 	 
			
		 }
		 //****************************************code to create a decimal value end***************************************
		 past_char=present_char;
		 //*************** logic to keep track of no of negative numbers and left to right decrese in value end************//
		 //is_roman_number=look_for_count(str[j])
		// str_array[j]=return_decimal(toupper(str[j]));// function to obtain the decimal value of roman elements which in turn are stored in an array
	 }
}
else if(has_all_core_roman_char(str) &&len==1){
	Roman_to_decimal=return_decimal(toupper(str[0]));
}else{
	roman_number=0;
	
}
return Roman_to_decimal;
}
//***********************  function to convert Roman to decimal end *********************************************





// change the function to process a single charecter instead of string
char*  convert_locase_to_UPCASE(char str1[]){
      /*function process 

      */
      int i;
      char *j;
      j=str1;
      
      for(i=0;*j;i++,j++){
         str1[i]=toupper(*j);     
         }
   return str1;
}

//***********************  function to convert Roman to decimal end *********************************



//**************************************************** convert decimal to roman*********************************/
char* if_decimal_return_roman(int dec_number){

  int num=dec_number,len=0,i,k;
  int num_array[4]={0};
  char *final_str = malloc(12); // allocate dynamic memory (will not be released on return)
  char tmp_str[12]="";  // result
if(dec_number>0 && dec_number<4000){
do{
    num_array[len]=num%10;
    len+=1;
    num /= 10;
  }while(num>0);
  for(i=len-1;i>=0;i--){
	  switch(i){
		  case 0:k=1;break;
		  case 1:k=10;break;
		  case 2:k=100;break;
		  case 3:k=1000;break;
	  }	 
	  strcpy(tmp_str,return_roman(k*num_array[i]));
	  strcat(final_str,tmp_str); 
  }
}
  return final_str;	
}
