#include <stdio.h>
#include <stdlib.h>

/*
	Write a program to create a linked list and perform insertions and deletions of all cases. 
Write functions to sort and finally delete the entire list at once.
*/

typedef struct Node
{
	
	int data;
	struct Node *next;
	
}node;

node *start = NULL;

node *create_ll(node *);
node *display_ll(node *);

node *insert_beg(node *);
node *insert_end(node *);
node *insert_before(node *);
node *insert_after(node *);

node *delete_beg(node *);
node *delete_end(node *);
node *delete_node(node *);
node *delete_after(node *);
node *delete_list(node *);

node *sort_list(node *);


int main()
{
	start = create_ll(start);
	//start = display_ll(start);
	
	//start = insert_beg(start);
	//start = display_ll(start);
	
	//start = insert_end(start);
	//start = display_ll(start);
	
	//start = insert_before(start);
	//start = display_ll(start);
	
	//start = insert_after(start);
	//start = display_ll(start);
	
//	start = delete_beg(start);
//	printf("\nDelete beg\n");
//	start = display_ll(start);
//	
//	start = delete_end(start);
//	printf("\nDelete end\n");
//	start = display_ll(start);
//	
//	start = delete_node(start);
//	start = display_ll(start);
//	
//	start = delete_after(start);
//	start = display_ll(start);
	
	start = sort_list(start);
	start = display_ll(start);
	
//    start = delete_list(start);
//	start = display_ll(start);
}

node *create_ll(node *start)
{
	node *new_node, *ptr;
	int num;
	
	printf("Enter -1 to end!\n");
	printf("Enter the data: ");
	scanf("%d", &num);
	
	while(num != -1)
	{
		new_node = (node*)malloc(sizeof(node));
		new_node -> data = num;
		
		if(start == NULL)
		{
			new_node -> next = NULL;
			start = new_node;
		}
		else
		{
			ptr = start;
			while(ptr -> next != NULL)
			{
				ptr = ptr -> next;
			}
			
			ptr -> next = new_node;
			new_node -> next = NULL;
		}
		
		printf("Enter the data: ");
		scanf("%d", &num);
		
	}
	
	return start;
	
}

node *display_ll(node *start)
{
	node *ptr;
	ptr = start;
	
	while(ptr != NULL)
	{
		printf("\t %d", ptr -> data);
		ptr = ptr -> next;
	}
	return start;
}


node *insert_beg(node *start)
{
	node * new_node;
	int num;
	
	printf("\nEnter the data for insert a new node to begin: ");
	scanf("%d", &num);
	
	new_node = (node *)malloc(sizeof(node));
	new_node -> data = num;
	new_node -> next = start;
	start = new_node;
	return start;
}

node *insert_end(node *start)
{
	node *new_node, *ptr;
	int num;
	
	printf("\nEnter the data for insert a new node to end: ");
	scanf("%d", &num);
	
	new_node = (node *)malloc(sizeof(node));
	new_node -> data = num;
	new_node -> next = NULL;
	
	ptr = start;
	
	while(ptr -> next != NULL)
	{
		ptr = ptr -> next;
	}
	
	ptr -> next = new_node;
	
	return start;
}

node *insert_before(node *start)
{
	node *new_node, *ptr, *preptr;
	int num, val;
	
	printf("\nEnter the data: ");
	scanf("%d", &num);
	
	printf("\nEnter the value before which the data has to be inserted : ");
	scanf("%d", &val);
	
	new_node = (node *)malloc(sizeof(node));
	new_node -> data = num;
	
	ptr = start;
	
	while(ptr -> data != val)
	{
		preptr = ptr;
		ptr = ptr -> next;
	}
	
	new_node -> next = ptr;
	preptr -> next = new_node;
	
	return start;
}

node *insert_after(node *start)
{
	node *new_node, *ptr, *preptr;
	int num, val;
	
	printf("\nEnter the data: ");
	scanf("%d", &num);
	
	printf("\nEnter the value after which the data has to be inserted: ");
	scanf("%d", &val);
	
	new_node = (node *)malloc(sizeof(node));
	new_node -> data = num;
	
	ptr = start;
	preptr = ptr;
	
	while(preptr -> data != val)
	{
		preptr = ptr;
		ptr = ptr -> next;
	}
	
	preptr -> next = new_node;
	new_node -> next = ptr;
	
	return start;
	
}


node *delete_beg(node *start)
{
	node *ptr;
	
	ptr = start;
	start = start -> next;
	
	free(ptr);
	
	return start;
}

node *delete_end(node *start)
{
	node *ptr, *preptr;
	
	ptr = start;
	
	while(ptr -> next != NULL)
	{
		preptr = ptr;
		ptr = ptr -> next;
	}
	
	preptr -> next = NULL;
	free(ptr);
	
	return start;
}

node *delete_node(node *start)
{
	node *ptr, *preptr;
	int val;
	
	printf("\nEnter the value of the node which has to be deleted: ");
	scanf("%d", &val);
	
	ptr = start;
	
	if(ptr -> data == val)
	{
		start = delete_beg(start);
		return start;
	}
	else
	{
		while(ptr -> data != val)
		{
			preptr = ptr;
			ptr = ptr -> next;
		}
		preptr -> next = ptr -> next;
		free(ptr);
		
		return start;
	}
	
}

node *delete_after(node *start)
{
	node *ptr, *preptr;
	int val;
	
	printf("\nEnter the value after which the node has to be deleted : ");
	scanf("%d", &val);
	
	ptr = start;
	preptr = preptr;
	
	while(preptr -> data != val)
	{
		preptr = ptr;
		ptr = ptr -> next;
	}
	preptr -> next = ptr -> next;
	free(ptr);
	
return start;
}

node *delete_list(node *start)
{
	node *ptr;
	
	if(start -> next != NULL)
	{
		ptr = start;
		while(ptr != NULL)
		{
		   printf("\n %d is to be deleted next", ptr -> data);

			start = delete_beg(ptr);
			ptr = start;
		}
	}	
	
	return start;
}
	
	
node *sort_list(node *start)
{
	node *ptr1, *ptr2;
	int temp;
	
	ptr1 = start;
	
	while(ptr1 -> next != NULL)
	{
		ptr2 = ptr1 -> next;
		
		while(ptr2 != NULL)
		{
			if(ptr1 -> data > ptr2 -> data)
			{
				temp = ptr1 -> data;
				ptr1 -> data = ptr2 -> data;
				ptr2 -> data = temp;
				
			}
			ptr2 = ptr2 -> next;
		}
		
		ptr1 = ptr1 -> next;
	}
	
	return start;
}












