#ifndef MAESTRO_H_
#define MAESTRO_H_

#ifdef MAESTRO_IMPLEMENTATION

#include <stdio.h>

static inline void say_hello(const char* name)
{
    printf("Hello, %s!\n", name);
}

#endif // ifdef MAESTRO_IMPLEMENTATION

#endif // ifndef MAESTRO_H_

// vim: sw=4 ts=4 sts=4 et tw=80 nospell :
