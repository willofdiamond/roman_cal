# Process this file with autoconf to produce a configure script.

# Prelude.
AC_PREREQ([2.59])
AC_INIT([roman_cal], [0.3], [check-devel AT lists.sourceforge.net])
AM_PROG_AR   #need to use the supoort of archiver

# unique source file --- primitive safety check 
AC_CONFIG_SRCDIR([src/roman_cal.c])

AC_CONFIG_MACRO_DIRS([m4])
# fairly severe build strictness
# change foreign to gnu or gnits to comply with gnu standards
AM_INIT_AUTOMAKE([-Wall -Werror foreign 1.11.2])

# Checks for programs.
AC_PROG_CC
AC_PROG_LIBTOOL  #Automake will turn on processing for libtoo

# Checks for libraries.

PKG_CHECK_MODULES([CHECK], [check >= 0.9.6]) #checking for availablility of check package
AM_PROG_CC_C_O
# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_FUNC_MALLOC

# Output files
AC_CONFIG_HEADERS([config.h])

AC_CONFIG_FILES([Makefile
                 src/Makefile
                 tests/Makefile])

AC_OUTPUT

#Reference
#https://www.gnu.org/software/automake/manual/html_node/Public-Macros.html
#https://www.gnu.org/software/autoconf/manual/autoconf-2.61/html_node/Setup.html#Setup
#https://www.gnu.org/software/libtool/manual/html_node/LT_005fINIT.html#LT_005fINIT
