#include "main.h"

/**
 * ev_print_func - returns the number of identifiers.
 * @s: argument identifier
 * @index: index of argument identifier.
 * Return: amount of identifers.
 */

int ev_print_func(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_chr}, {"s", print_str}, {"i", print_int},
		{"d", print_int}, {"b", print_bnr}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex}, {"X", print_upx},
		{"S", print_usr}, {"p", print_add}, {"+i", prinpint},
		{"+d", prinpint}, {"+u", print_unt}, {"+o", print_oct},
		{"+x", print_hex}, {"+X", print_upx}, {" +i", prinpint},
		{" +d", prinpint}, {"+ i", prinpint}, {"+ d", prinpint},
		{" i", prinsint}, {" d", prinsint}, {" u", print_unt},
		{" o", print_oct}, {" x", print_hex}, {" X", print_upx},
		{"#o", prinnoct}, {"#x", prinnhex}, {"#X", prinnupx},
		{"#i", print_int}, {"#d", print_int}, {"#u", print_unt},
		{"%", print_prg}, {" %", print_prg}, {NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + i] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (j);
}
