#!/bin/bash
gcc -Wall -Wextra -Werror -Pedantic -C *.C
ar rc liball.a *.o

