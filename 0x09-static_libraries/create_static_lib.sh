#!/bin/bash
gcc -Wall -Werror -pedantic -Wextra -c *.c
ar -rc liball.a *.c
