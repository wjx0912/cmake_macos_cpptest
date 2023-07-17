#if defined(_WINDOWS)
#include <windows.h>
#define LIB_EXPORT extern "C" __declspec(dllexport)
#define LIB_IMPORT extern "C" 
#define SPDLOG_WCHAR_TO_UTF8_SUPPORT
#elif defined(__APPLE__)
#define LIB_EXPORT __attribute__((visibility("default")))
#define LIB_IMPORT
#elif defined(__linux__)
#define LIB_EXPORT __attribute__((visibility("default")))
#endif


LIB_IMPORT void hello_func(void);


int main(void) {
	hello_func();

	return 0;
}
