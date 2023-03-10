#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer function
 *
 * Description: struct that stores pointer to a
 * printer function.
 */

typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);

int print_prg(va_list __attribute__((unused)), char *, unsigned int);

int print_chr(va_list args, char *buf, unsigned int ibuf);

int print_str(va_list args, char *buf, unsigned int ibuf);

int print_int(va_list args, char *buf, unsigned int ibuf);

int print_unint(va_list args, char *buf, unsigned int ibuf);

int print_bnr(va_list args, char *buf, unsigned int ibuf);

int print_unt(va_list args, char *buf, unsigned int ibuf);

int print_oct(va_list args, char *buf, unsigned int ibuf);

int print_hex(va_list args, char *buf, unsigned int ibuf);

int print_upx(va_list args, char *buf, unsigned int ibuf);

int print_usr(va_list args, char *buf, unsigned int ibuf);

int print_add(va_list args, char *buf, unsigned int ibuf);

int prinpint(va_list args, char *buf, unsigned int ibuf);

int prinsint(va_list args, char *buf, unsigned int ibuf);

int prinnoct(va_list args, char *buf, unsigned int ibuf);

int prinnhex(va_list args, char *buf, unsigned int ibuf);

int prinnupx(va_list args, char *buf, unsigned int ibuf);

int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);

int ev_print_func(const char *s, int index);

unsigned int handl_buf(char *buf, char c, unsigned int ibuf);

int print_buf(char *buf, unsigned int nbuf);

char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);

char *fill_oct_array(char *bnr, char *oct);

char *fill_hex_array(char *bnr, char *hex, int isupp, int limit);

#endif /* MAIN_H */
