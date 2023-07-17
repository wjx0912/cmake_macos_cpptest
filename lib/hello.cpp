#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>

#include "hello.h"

std::string g_test;

__attribute__((constructor))
static void init()
{
	printf("init\n");
	g_test = "hell test";
}

void hello_func(void) {
	printf("Hello World: %s\n", g_test.c_str());

	return;
}
