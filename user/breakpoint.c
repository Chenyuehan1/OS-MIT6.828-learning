// program to cause a breakpoint trap

#include <inc/lib.h>

void
umain(int argc, char **argv)
{	
	cprintf("running breakpoint.c");
	asm volatile("int $3");
}

