all: get_data.o
	gcc -o program get_data.o

get_data.o: get_data.c
	gcc -c get_data.c

run:
	./program

clean:
	rm *.o
	rm program