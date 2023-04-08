#!/bin/bash
gcc -Wall -pedantic -Werrpr -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
