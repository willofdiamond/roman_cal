## Process this file with automake to produce Makefile.in

TESTS = roman_cal
check_PROGRAMS = roman_cal
check_money_SOURCES = roman_cal.c $(top_builddir)/src/money.h
check_money_CFLAGS = @CHECK_CFLAGS@
check_money_LDADD = $(top_builddir)/src/libroman_cal.la @CHECK_LIBS@
