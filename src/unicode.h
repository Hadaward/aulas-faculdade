#ifndef UNICODE_H
#define UNICODE_H

#include <locale.h>
#include <wchar.h>
#include <stdarg.h>
#include <stdio.h>
#include <wctype.h>
#include <stdlib.h>

void uprintf(wchar_t *format, ...) {
    setlocale(LC_ALL, "");

    va_list args;
    va_start(args, format);
    vwprintf(format, args);
    va_end(args);
}
#endif