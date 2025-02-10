// Copyright (C) 2025  Gerson Ferreira <gersonfaneto.dev@gmail.com>
// See end of file for extended copyright information.

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

// Maestro :: Self Hosted C Build System.
// Copyright (C) 2025  Gerson Ferreira <gersonfaneto.dev@gmail.com>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with This program.  If not, see <https://www.gnu.org/licenses/>.

// vim: sw=4 ts=4 sts=4 et tw=80 nospell :
