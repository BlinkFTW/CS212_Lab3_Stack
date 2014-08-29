#ifndef _STACK_H
#define _STACK_H

#include <stdio.h>

#define MAXSTACKSIZE 10

#define STACK(name)  int  name[MAXSTACKSIZE+1]={0} ; name[0]=1;

void  push(int id[] ,int v);
int   pop (int id[]);
int   isFull(int id[]);
int   isEmpty(int id[]);
int peek( int [] );
int ssize( int[] ); 
void printStack(int[]);

#endif
