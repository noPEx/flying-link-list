all : list ptr reverse

list : list.c
	gcc -g  -o list list.c
ptr : ptr.c
	gcc -g  -o ptr ptr.c

reverse : reverse.c
	gcc -g  -o reverse reverse.c
