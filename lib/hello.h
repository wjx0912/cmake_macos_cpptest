
#ifndef HELLO_H_
#define HELLO_H_ (1)

#include <stdio.h>

#if defined(_WINDOWS)
#include <windows.h>
#define LIB_EXPORT extern "C" __declspec(dllexport)
#define SPDLOG_WCHAR_TO_UTF8_SUPPORT
#elif defined(__APPLE__)
#define LIB_EXPORT __attribute__((visibility("default")))
#elif defined(__linux__)
#define LIB_EXPORT __attribute__((visibility("default")))
#endif

//void hello_func(void);

#endif
