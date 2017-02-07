# roman_cal
This program performs addition and subtraction of roman numbers.
This is the "roman caluculator application" 

This demonstrates using Check along with build system:
autotools.

========================
Autotools:

You need the following programs installed on your system:
  -- Autoconf 2.59
  -- Automake 1.9.6
  -- Libtool 1.5.22
  -- Check 0.9.9

Somewhat earlier versions of these programs might work.

Then, do as follows:

$ autoreconf --install
$ ./configure
$ make
$ make check

Don't do "make install" unless you want to install the money example.

money.c and money.h are built as a library.  src/main.c:main() is a
client of libmoney.la, just as tests/check_money.c:main() is a client
of libmoney.la

To use the autotools example in another project, start with the following
files:

   roman_cal
   |--- configure.ac
   |--- Makefile.am
   |--- m4
   |    |--- notes -> (dummy file)
   |--- src
   |    |--- Makefile.am
   |--- tests
        |--- Makefile.am

Please send bug reports to check-devel AT lists.sourceforge.net.


src->    consist of all the source files

tests->  consists of all the test files

 COMMANDS TO WORK:
$ autoreconf --install :To run most of the auto tools( make files, IO files etc)
$ ./configure          :To generate configure files and make files
$ make                 :For generating 
$ make check           :For checking tests on functions 

Running the program:
go to roman_cal/src/ in command prompt and type ./main to execute the calculator program
