#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * _strcat - concats strings
 * @dest: destination of string
 * @src: source of string to concat
 * Return: returns char value
 */
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);

#endif /* MAIN_H */
