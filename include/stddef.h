// Copyright 2012 Rui Ueyama <rui314@gmail.com>
// This program is free software licensed under the MIT license.

#ifndef __STDDEF_H
#define __STDDEF_H

#define NULL ((void *)0)

typedef unsigned long size_t;
typedef long ptrdiff_t;
typedef char wchar_t;
typedef long double max_align_t;

#define offsetof(type, member)                  \
    ((size_t)&(((type *)NULL)->member))

#endif
