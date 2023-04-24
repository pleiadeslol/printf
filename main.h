#ifndef PRINTF_MAIN_H
#define PRINTF_MAIN_H

/* -- Functions -- */

void print_char(va_list, format_t, void *);
void _putchar(char, void *);
int _printf(const char *format, ...);
int is_alpha(char c);

#endif
