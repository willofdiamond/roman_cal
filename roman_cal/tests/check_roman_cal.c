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

START_TEST(test_all_roman)
{
    ck_assert_int_eq(has_all_core_roman_char("XXIL"),1);
    ck_assert_int_eq(has_all_core_roman_char("Z"),0);
    /*ck_assert_int_eq(roman_to_decimal("XI"),11);
    cK_assert_str_eq(decimal_to_roman(93),"XCI");
    ck_assert_int_eq(is_roman_number("III"), 1);
    ck_assert_int_eq(is_roman_number("IIX",0);
    */
    
    
}
END_TEST



Suite * roman_check_suite(void)
{ Suite *s;
    TCase *tc_core;
    
   //creating a test suite
    s = suite_create("Romancalculator");

    /* all roman test case */
    tc_core = tcase_create("test_all_roman");
    tcase_add_checked_fixture(tc_core, setup, teardown);
    tcase_add_test(tc_core, test_all_roman);
    suite_add_tcase(s, tc_core);

   
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
