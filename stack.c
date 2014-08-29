#include "stack.h"

/*-------------------------------------------------------------------
 * name: push
 * inputs: id[]	(int stack)
 *		   v	(int)
 * outputs: 
 * Adds the item v at the top of the named stack and increments the 
 * pointer to the top of the stack. 
      	 		  id
	  		    |_____|	4
		      	|_____|	3
 id[id[0]]->|_____|	2  //id[id[0]] == id[2]
      			|__v__|	1
 id[0]	->	|__2__|	0

 *------------------------------------------------------------------*/
void  push(int id[] ,int v)
  {   
      if (isFull(id))
         printf("stack is full\n");
      else
        {
          id[id[0]] = v;
          id[0]++;
        } ;
  };   

/*-------------------------------------------------------------------
 * name: pop
 * inputs:  id[]	(int stack)
 * outputs: topVal	(int)
 * Decrements the pointer to the top of the named stack and returns
 * its value to the calling program
 *------------------------------------------------------------------*/
int pop (int id[])
  {  
	int topVal;
     if (isEmpty(id))
        printf("Stack is empty\n");
     else
     { 
       id[0]--;
	   topVal = id[id[0]];	//Store top value before clearing
	   id[id[0]] = 0;	//Clear
       return topVal;
     } 
  };

/*-------------------------------------------------------------------
 * name: isFull
 * inputs:  id[]	(int stack)
 * outputs: 1 or 0 (true/false)
 * Tests to see if the named stack is full, if so 1 is returned
 * otherwise 0 is returned to the caller
 *------------------------------------------------------------------*/
int isFull(int id[])
  { 
    if (id[0] == MAXSTACKSIZE)
      return 1;
    else return 0;
  };

/*-------------------------------------------------------------------
 * name: isEmpty
 * inputs:  id[]	(int stack)
 * outputs: 1 or 0 (true/false)
 * Tests to see if the named stack is empty, if so 1 is returned
 * otherwise 0 is returned to the caller.
 *------------------------------------------------------------------*/
int isEmpty(int id[])
  {
    if (id[0] == 1)
      return 1;
    else return 0;
  };    

/*-------------------------------------------------------------------
 * name: peek
 * inputs:  id[]	(int stack)
 * outputs: id[id[0]-1]	(int)
 * Returns the value on top of the named stack
 *------------------------------------------------------------------*/
int peek(int id[])
  {
    if (isEmpty(id))
        printf("Stack is empty\n");
    else
		return (id[id[0]-1]);
  };

/*-------------------------------------------------------------------
 * name: ssize
 * inputs:  id[]	(int stack)
 * outputs: 0 or id[0]-1	(int)
 * Returns the the current number of elements in the named stack
 *------------------------------------------------------------------*/
int ssize(int id[])
  {
	if(isEmpty(id))
		return 0;
	else
		return id[0]-1;			
  };

/*-------------------------------------------------------------------
 * name: printStack
 * inputs:  id[]	(int stack)
 * outputs: (none)
 * Prints named stack to illustrate the workings of a stack
 *------------------------------------------------------------------*/
void printStack(int id[])
{
	int i;
	printf("\nStack 1 size: %d\n---------\n", ssize(id));
	for(i=(MAXSTACKSIZE-1);i>=0;i--)
	{
		if(i==0)
			printf("%5d <- Stack Pointer\n\n", id[i]);
		else
			printf("%5d\n", id[i]);
	}
};
