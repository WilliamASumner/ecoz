all: elf.o reader.o
	gcc elf.o reader.o -o reader

elf.o: elf.c elf.h
	gcc -c elf.c -o elf.o

reader.o: reader.c
	gcc -c reader.c -o reader.o
