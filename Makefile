all : list ptr reverse

list : list.c
	gcc -o list list.c
ptr : ptr.c
	gcc -o ptr ptr.c

reverse : reverse.c
	gcc -o reverse reverse.c
