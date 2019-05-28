objects = matrix.o main.o l_algebra.o
binary = machine

$(binary) : $(objects) 
	gcc -g -Wall -o $@ $^

clean : 
	rm $(objects) 

mem :
	valgrind ./machine

all :
	rm $(binary)	
