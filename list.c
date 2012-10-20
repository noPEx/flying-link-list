#include <stdio.h>
#include <malloc.h>

typedef struct {
	struct node* next ;
	int value ;

} node ;
/* given a node prints all the nodes */
/* parameters
	@head :
		head of the linked list
*/
void print_nodes( node* head ){
	node* oldhead = head ;
	while( head ) {
		printf("%d-> ",head->value ) ;
		head = head->next ;

	}
	printf("\n") ;
}


/* given an array and a head initializes the link list and returns the head */
/* parameters
	@head :
	    the head of the list which is to be returned.
	@arr :
		the array whose values are to be put into the list
	@size :
		the size of the array
*/
node* initialize_list( node* head,int arr[],int size ) {
		int counter = 0 ;
		node* current = head ;
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
