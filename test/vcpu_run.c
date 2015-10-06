#include <stdio.h>
#include <stdlib.h>

#include "libdune/dune.h"
#include "libdune/cpu-x86.h"


int main(int argc, char ** argv)
{
	volatile int ret;

	printf("hello: not running dune yet\n");

	ret = dune_init_and_enter();
	if (ret) {
		printf("failed to initialize dune\n");
		return ret;
	}

	printf("hello: now printing from dune mode\n");

	return 0;
}