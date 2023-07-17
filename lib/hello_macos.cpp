#ifdef __APPLE__
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>

#include "hello.h"

std::string g_test;

__attribute__((constructor))
static void init()
{
	g_test = "hello test";
	printf("init: %s\n", g_test.c_str());
}

void hello_func(void) {
	printf("Hello World: %s\n", g_test.c_str());

	return;
}
#endif
