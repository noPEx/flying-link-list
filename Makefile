all : list ptr

list : list.c
	gcc -o list list.c
ptr : ptr.c
	gcc -o ptr ptr.c
