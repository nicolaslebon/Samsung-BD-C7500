/* vi: set sw=4 ts=4: */
/*
 * ftruncate() for uClibc
 *
 * Copyright (C) 2000-2006 Erik Andersen <andersen@uclibc.org>
 *
 * Licensed under the LGPL v2.1, see the file COPYING.LIB in this tarball.
 */

#include "syscalls.h"
#include <unistd.h>

libc_hidden_proto(ftruncate)

_syscall2(int, ftruncate, int, fd, __off_t, length);
libc_hidden_def(ftruncate)
