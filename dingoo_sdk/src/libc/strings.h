#ifndef __libc_strings_h__
#define __libc_strings_h__

#include <stddef.h>
#include <string.h>

extern int ffs(int i);

#define strcasecmp(x, y) _stricmp(x, y)
#define strncasecmp(x, y, z) _strnicmp(x, y, z)

#endif
