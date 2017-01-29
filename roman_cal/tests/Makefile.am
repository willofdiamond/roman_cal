## Process this file with automake to produce Makefile.in

TESTS = check_roman_cal
check_PROGRAMS = check_roman_cal
check_roman_cal_SOURCES = check_roman_cal.c $(top_builddir)/src/roman_cal.h
check_roman_cal_CFLAGS = @CHECK_CFLAGS@
check_roman_cal_LDADD = $(top_builddir)/src/libroman_cal.la @CHECK_LIBS@
