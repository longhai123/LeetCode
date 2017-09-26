test:main.c tree.o
	gcc -g -o test main.c tree.o

tree.o:tree.c
	gcc -g -c -o tree.o tree.c

clean:
	rm -f test tree.o
