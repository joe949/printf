#ifndef _MAIN_H_
#define _MAIN_H_

#include<stdarg.h>
#include<stdlib.h>
#include<unistd.h>

int print_chr(char c);
int _printf(const char *format, ...);
int print_c(va_list ag);
int print_s(va_list ag);
int con_strlen(const char *s);
int _strlen(char *s);
int printpcnt(void);

#endif
