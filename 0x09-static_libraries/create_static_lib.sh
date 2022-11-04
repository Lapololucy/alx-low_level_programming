#!/bin/bash
gcc -Wall -pedantic -Werror -Wetra -c *.c
ar -rc liball.a *.o
