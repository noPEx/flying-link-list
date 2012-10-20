#include <stdio.h>
#include <malloc.h>

typedef struct {
	struct node* next ;
	int value ;

} node ;
void print_nodes( node* head ){
	printf("head->value is : %d\n", head->value ) ;
	node* oldhead = head ;
	while( head ) {
		printf("%d-> ",head->value ) ;
		head = head->next ;

	}
	printf("\n") ;
}


void initialize_list( node* head,node*current,int arr[],int size ) {
		int counter = 0 ;
		printf("hello\n");
		while( counter < size ) {
			
			current = ( node* )malloc( sizeof( node ) ) ;
			printf("*(arr+counter) is : %d\n",*(arr+counter) ) ;
			current->value = *(arr+counter) ;
			current->next = head ;
			head = current ;
			printf("cur->val is : %d\n", current->value ) ;
			counter++ ;
			
		}
		printf("head->value after init is : %d\n", head->value ) ;
}
int main( int argc,char** argv ) {
	int arr[] = { 1,2,3,4,5 } ;
	node* head,*curr ;// = (node*)0;//= ( node* )malloc( sizeof( node ) ) ;
	initialize_list( head,curr,arr,5 ) ;
	printf("head->value is : %d\n", head->value ) ;
	printf("initialized\n") ;
	print_nodes( head ) ;

	return 0 ;
} 
