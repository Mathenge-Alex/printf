#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int _print_int(va_list argus);
int _putchar(char c);
int print_int(int n);
#endif /* MAIN_H */
