/* MATHIOUDAKIS GIORGOS , ASKISI 2  , mystring.h*/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#ifndef STRING_H
#define STRING_H

int ms_length(const char str[]); /* return the length of string*/

char *ms_copy(char dest[] , const char src[]); /* copy source string to destination string*/

char *ms_ncopy( char dest[] , const char src[],size_t n); /* copy n number of characters from source string to destination string*/

char *ms_concat(char dest[] , const char src[]); /* append the string pointed to by source to the end of the string pointed to by destination*/

char *ms_nconcat( char dest[] , const char src[],size_t n ); /* append n number of chatacters pointed to by source to the end of the string pointed to by destination*/

int ms_compare(const char str1[] , const char str2[]); /* compare the string str1 to the string str2 and return <0 if str1<str2 , >0 if  str1>str2 , =0 if str1=str2*/

int ms_ncompare( const char str1[] , const char str2[],size_t n); /*compare the first n bytes of str1 and str2 and return <0 if str1<str2 , >0 if  str1>str2 , =0 if str1=str2*/

char *ms_search(const char haystack[] , const char needle[]); /* find the first occurrence of the substring needle in the string haystack and return a pointer to it*/

#endif