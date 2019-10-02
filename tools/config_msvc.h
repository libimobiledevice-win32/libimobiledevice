#pragma once

#ifdef _MSC_VER
#include <BaseTsd.h>
typedef SSIZE_T ssize_t;

#ifndef S_ISDIR
#define S_ISDIR(mode)  (((mode)& S_IFMT) == S_IFDIR)
#endif
#endif

#define PACKAGE_URL "https://github.com/libimobiledevice-win32"
