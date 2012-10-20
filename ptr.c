#include <stdio.h>

char* ref( char* cPtr ) {
	char new = 'A' ;
	cPtr = &new ;
	return cPtr ;
}

void change( char* str ) {
	/*
	str[0] = 'w' ;
	str[1] = 'o' ;
	str[2] = 'r' ;
	str[3] = 'l' ;
	str[4] = 'd' ;
	*/
	*(str+0) = 'w' ;
	*(str+1) = 'o' ;
	*(str+2) = 'r' ;
	*(str+3) = 'l' ;
	*(str+4) = 'd' ;
}

int main( int argc,char** argv ) {
	char cPtr ;

	ref( &cPtr ) ;
	printf("*cPtr is : %c\n", cPtr ) ;

	//char str[] = "hello" ;
	char* str = ( char* )malloc( sizeof( char )*5 ) ;
	str[0] = 'h' ;
	str[1] = 'e' ;
	str[2] = 'l' ;
	str[3] = 'l' ;
	str[4] = 'o' ;
	change( str ) ;
	printf("str after change is : %s\n", str ) ;



}
