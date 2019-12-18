# -*- Makefile -*-

all: isort txtfind

txtfind: txtfind.o mainTXT.o
	gcc -Wall -fPIC -o txfind mainTXT.o txtfind.o

mainTXT.o: mainTXT.c txtfind.h
	gcc -Wall -c mainTXT.c

txtfind.o: txtfind.c txtfind.h
	gcc -Wall -fPIC -c txtfind.c	

isort: isort.o main.o
	gcc -Wall -fPIC -o isort main.o isort.o

main.o: main.c isort.h
	gcc -Wall -c main.c

isort.o: isort.c isort.h
	gcc -Wall -fPIC -c isort.c	

.PHONY: clean all 

clean:
	rm -f *.o isort txfind