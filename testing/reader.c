#include <stdio.h>
#include <stdlib.h>
#include "elf.h"

int main(int argc, char** argv) {
	Elf_obj* file = elf_open(argv[1]);

	printf("static table of %s\n",argv[1]);
	Elf32_Sym* s = elf_firstsym(file); // first static symbol
	while (s != NULL) {
		printf("%s\n",elf_symname(file,s));
		s = elf_nextsym(file,s);
	}

	elf_close(file);
	return 0;
}
