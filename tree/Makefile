test:main.c tree.o maxDistance.o
	gcc -g -o test main.c tree.o maxDistance.o

tree.o:tree.c
	gcc -g -c -o tree.o tree.c

maxDistance:maxDistance.c
	gcc -g -c -o maxDistance.o maxDistance.c

clean:
	rm -f test tree.o maxDistance.o
