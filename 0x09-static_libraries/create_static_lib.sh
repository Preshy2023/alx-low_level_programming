#!/bin/bash
gcc -Wall -pandantic -Warror -Wextra .c *.o
ar -rc liball.a *.o
ranlib liball.a
