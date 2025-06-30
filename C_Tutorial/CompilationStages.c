// Double Slash indicates Single Line Comment - Compilation Stages

/* Compilation Stages >gcc File1.c File2.c
 * 1. Preprocessor - >gcc -E File1.c -o File1.i (Generates .i file)
 * 2. Compiler     - >gcc -S File1.i -o File1.s (Generates .s file)
 * 3. Assembler    - >gcc -c File1.s -o File1.o (Generates .o file)
 * 4. Linker       - >File1.o File2.o -o a.out (Generates a.out file)
 */

#include <stdio.h>

#define PI 3.14

void main(void)
{
#ifdef PI
	printf("PI value is %f\n", PI);
#else
	printf("PI value is not defined\n");
#endif	
}

