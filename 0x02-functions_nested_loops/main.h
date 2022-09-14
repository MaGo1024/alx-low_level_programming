#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
/**
 *_putchar - writes the character c to std
 *@c: paramter to compare
 *Return: 1 or 0
 */
int _putchar(char);
/**
 *_print_alphabet - function to print alphabet
 *
 */
void print_alphabet(void);
/**
 *_print_alphabet_x10 - function to print alphabet 10 times
 *
 */
void print_alphabet_x10(void);
/**
 *_islower - prints if character is lower case
 *Return: 1 or 0
 */
int _islower(int c);
/**
 *_isalpha - prints if character is alphabet
 *Return: 1 or 0
 */
int _isalpha(int c);
 /**
 *print_sign - prints a sign based on s(integer)
 *Return: 1 or 0 or -1
 */
int print_sign(int s);
/**
 *_abs - gives absolute value
 *Return: integer or abs value of int
 */
int _abs(int);
/**
 *print_last_digit - prints the last digit
 *Return: last digit of integer
 */
int print_last_digit(int);
/**
 *jack_bauer - prints everry minute of the day
 *Return: Always 0 (Success)
 */
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
#endif
