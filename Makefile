all: prog

prog: *.o
	gcc exemplo3.o -o prog

*.o:	
	gcc -c exemplo3.c 

clean:	
	rm *.o prog
	
