prog : stacktest.c stack.o stack.h
	gcc stacktest.c -o stacktest.exe stack.o
stack.o : stack.c stack.h
	gcc stack.c -c
