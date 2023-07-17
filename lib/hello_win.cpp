#if defined(_WINDOWS)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>

#include "hello.h"

std::string g_test;

static void init()
{
	g_test = "hello test";
	printf("init: %s\n", g_test.c_str());
}

LIB_EXPORT void hello_func(void) {
	printf("Hello World: %s\n", g_test.c_str());

	return;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call) {
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hModule);
		init();
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:\
		break;
	}
	return TRUE;
}
#endif
