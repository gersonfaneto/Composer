#ifndef COMPOSER_H_
#define COMPOSER_H_

#ifdef COMPOSER_IMPLEMENTATION

#include <stdio.h>

static inline void say_hello(const char* name)
{
    printf("Hello, %s!\n", name);
}

#endif // ifdef COMPOSER_IMPLEMENTATION

#endif // ifndef COMPOSER_H_

// vim: sw=4 ts=4 sts=4 et tw=80 nospell :
