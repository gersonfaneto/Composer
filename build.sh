#!/usr/bin/env sh

set -e
set -x

main() {
	cc -o composer composer.c \
	"${CFLAGS:-"-D__HACK__"}" \
	-std=gnu99 \
	-Wall -Wextra -Werror -Wpedantic \
	-Wno-unused-variable \
	-Wno-unused-function \
	-Wno-unused-parameter
}

main "$@"
