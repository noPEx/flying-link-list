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


int* initialize_list( node* head,int arr[],int size ) {
		int counter = 0 ;
		node* oldhead = head ;
		node* current = head ;
		printf("hello\n");
		while( counter < size ) {
			
			current = ( node* )malloc( sizeof( node ) ) ;
			//printf("*(arr+counter) is : %d\n",*(arr+counter) ) ;
			current->value = *(arr+counter) ;
			current->next = head ;
			head = current ;
			//printf("cur->val is : %d\n", current->value ) ;
			counter++ ;
			
		}
		//printf("head->value after init is : %d\n", head->value ) ;
		return head ;
}
int main( int argc,char** argv ) {
	int arr[] = { 1,2,3,4,5 } ;
	node* head;// = (node*)0;//= ( node* )malloc( sizeof( node ) ) ;
	head = initialize_list( head,arr,5 ) ;
	print_nodes( head ) ;

	return 0 ;
} 
