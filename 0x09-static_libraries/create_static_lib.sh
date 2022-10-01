#!/bin/bash
gcc -Wall -pendatic -Werror -c *.c
ar rc liball.a *.o
