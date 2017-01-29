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

START_TEST(test_roman_cal_create)
{
    ck_assert_int_eq(money_amount(five_dollars), 5);
    ck_assert_str_eq(money_currency(five_dollars), "USD");
}
END_TEST

START_TEST(test_roman_cal_create_neg)
{
    
    ck_assert_msg(m == NULL,
                  "NULL should be returned on attempt to create with "
                  "a negative amount");
}
END_TEST

START_TEST()
{
   

}
END_TEST

Suite * roman_cal_suite(void)
{
    
    

    return s;
}

int main(void)
{

    return 1;
}
