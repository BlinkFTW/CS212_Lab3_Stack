/*
Eric Kang
Section 53
Lab 3
file: stacktest.c

Description:
	This program tests all the functions, found in stack.c,
	in the implementation of a queue.

	Certain tests will include:
	- popping and peeking an empty queue
	- pushing a full queue
	- illustrating if the stack is FILO
	
*/

#include <stdio.h>
#include "stack.h"


int main()
{
	int  a,i;
     
    STACK(stack1) ; 
	
	//Try and Pop the empty stack1
	printf("\nTrying to Pop...");	
	pop(stack1);

	//Try and Peek the empty stack1
	printf("\nTrying to Peek...");	
	peek(stack1);

	//initialize 1,1,2,3,5,8,13,21,34
    push(stack1,1);
    push(stack1,1);  
    push(stack1,2);  
    push(stack1,3);
    push(stack1,5);
    push(stack1,8);
    push(stack1,13);
    push(stack1,21);
    push(stack1,34);

 
	//Print Stack1
	printStack(stack1);

	//Try to push onto a full stack
	printf("\nPush to full Stack... ",a,25);
	push(stack1,332);

	//replace the value 21 at the top of stack1 with 25	
	a=pop(stack1);
	push(stack1,25);
	printf("\nTake out: %d\nPush: %d",a,25);
	//Print New Stack1
	printStack(stack1);

	pop(stack1);
	pop(stack1);
	pop(stack1);
	pop(stack1);
	pop(stack1);
	pop(stack1);
	pop(stack1);
	pop(stack1);

	//Print Stack1
	printStack(stack1);

	push(stack1,2);
	push(stack1,3);
	push(stack1,4);

	//Print Stack1
	printStack(stack1);

	return 0;

};
