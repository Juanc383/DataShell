DataShell.out: dataShell.o files.o space.o data.o
	gcc -o DataShell.out dataShell.o files.o space.o data.o

dataShell.o: dataShell.c
	gcc -c dataShell.c

file.o: files.c
		gcc -c files.c

data.o: data.c
	gcc -c data.c

clean:
	rm *.o
