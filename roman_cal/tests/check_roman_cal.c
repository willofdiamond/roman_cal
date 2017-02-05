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

#include <config.h>
#include <stdlib.h>
#include <stdint.h>
#include <check.h>
#include "../src/roman_cal.h"



void setup(void)
{
    
}

void teardown(void)
{
    
}

START_TEST(has_all_core_roman)

{  
  ck_assert_int_eq(has_all_core_roman_char("XXIL"),1);
  ck_assert_int_eq(has_all_core_roman_char("Z"),0);
  ck_assert_int_eq(has_all_core_roman_char("IIIVVVI"),1);
  ck_assert_int_eq(has_all_core_roman_char("CAT"),0);     
}
END_TEST
START_TEST(if_roman_return_decimal)

{  
  ck_assert_int_eq(if_roman_number_return_decimal("MMMCMXCIX",9), 3999);
  ck_assert_int_eq(if_roman_number_return_decimal("MMMMMCMXCIX",11), 0); 
  ck_assert_int_eq(if_roman_number_return_decimal("III",3), 3);
  ck_assert_int_eq(if_roman_number_return_decimal("IIX",3), 0); 
  ck_assert_int_eq(if_roman_number_return_decimal("X",1), 10);
  ck_assert_int_eq(if_roman_number_return_decimal("Ivi",3), 0); 

}

END_TEST
START_TEST(decimal_return_roman)

{  
  ck_assert_str_eq(if_decimal_return_roman(10),"X");
  ck_assert_str_ne(if_decimal_return_roman(100),"X");
  ck_assert_str_eq(if_decimal_return_roman(789),"DCCLXXXIX");   
}
END_TEST


Suite * roman_check_suite(void)
{ Suite *s;
    TCase *tc_core,*tc_if_roman_return_decimal,*tc_decimal_return_roman;
    
   //creating a test suite
    s = suite_create("Romancalculator");

    /* all roman test case */
    tc_core = tcase_create("has_all_core_roman");
    tcase_add_checked_fixture(tc_core, setup, teardown);
    tcase_add_test(tc_core, has_all_core_roman);
    suite_add_tcase(s, tc_core);

    tc_if_roman_return_decimal = tcase_create("if_roman_return_decimal");
    tcase_add_test(tc_if_roman_return_decimal, if_roman_return_decimal);
    suite_add_tcase(s, tc_if_roman_return_decimal);

    tc_decimal_return_roman = tcase_create("has_all_core_roman");
    tcase_add_test(tc_decimal_return_roman, decimal_return_roman);  
    suite_add_tcase(s, tc_decimal_return_roman);
    
    

   
    return s;
}

int main(void)
{
int number_failed;
    Suite *s;
    SRunner *sr;

    s = roman_check_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
