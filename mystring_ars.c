/* MATHIOUDAKIS GIORGOS , ASKISI 2  , mystring_ars.c*/
#include <stddef.h>
#include "mystring.h"
#include <assert.h>

/* return the length of string
    assert used to make sure string is not Null
*/
int ms_length(const char str[]){
    size_t length = 0;
    assert(str);/* Works because NULL and FALSE are identical. */
    while(str[length]!='\0'){
        length++;
    }
    return length;
}

/* copy source string to destination string
    assert used to make sure strings are not Null
*/
char *ms_copy(char dest[] , const char src[]){
    size_t length = 0;
    assert(dest && src); /* Works because NULL and FALSE are identical. */
    while(src[length]!='\0'){
        dest[length] = src[length];
        length++;
    }
    dest[length]='\0';
    return dest;
}

/* copy n number of characters from source string to destination string
   assert used to make sure strings are not Null
*/
char *ms_ncopy( char dest[] , const char src[],size_t n){
    size_t i=0;
    assert(dest && src);/* Works because NULL and FALSE are identical. */
    while(i<n && src[i]!='\0'){
        dest[i]=src[i];
    }
    for ( ; i < n; i++){
        dest[i] = '\0';
    }
    return dest;
}

/* append the string pointed to by source to the end of the string pointed to by destination
    assert used to make sure strings are not Null
*/
char *ms_concat(char dest[] , const char src[]){
    size_t i;
    size_t length = ms_length(dest);
    assert(dest && src);/* Works because NULL and FALSE are identical. */
    for(i=0;i<ms_length(src);i++){
        dest[length+i] = src[i];

    }
    dest[ms_length(dest)+i] = '\0';

    return dest;
}

/* append n number of chatacters pointed to by source to the end of the string pointed to by destination
    assert used to make sure strings are not Null
*/
char *ms_nconcat( char dest[] , const char src[],size_t n){
    size_t i;
    size_t length = ms_length(dest);
    assert(dest && src);/* Works because NULL and FALSE are identical. */
    for(i=0;i<n;i++){
        dest[length+i] = src[i];
    }
    dest[length+i] = '\0';
    return dest;
}

/* compare the string str1 to the string str2 and return <0 if str1<str2 , >0 if  str1>str2 , =0 if str1=str2
    assert used to make sure strings are not Null

*/
int ms_compare(const char str1[] , const char str2[]){
    int i=0;
    assert(str1 && str2);/* Works because NULL and FALSE are identical. */
    while(str1[i]!='\0' && str2[i]!='\0'){
        if(str1[i]>str2[i]){
            return 1;
        }else if(str1[i]<str2[i]){
            return -1;
        }
        i++;
    }
    if(str1[i]=='\0' && str2[i]!='\0'){
        return -1;
    }else if(str1[i]!='\0' && str2[i]=='\0'){
        return 1;
    }else{
        return 0;
    }
} 

/*compare the first n bytes of str1 and str2 and return <0 if str1<str2 , >0 if  str1>str2 , =0 if str1=str2
    assert used to make sure strings are not Null
*/
int ms_ncompare( const char str1[] , const char str2[], size_t n){
    int i;
    assert(str1 && str2);/* Works because NULL and FALSE are identical. */
    for(i=0;i<n;i++){
        if(str1[i]>str2[i]){
            return 1;
        }else if(str1[i]<str2[i]){
            return -1;
        }
    }
    return 0;
}
 /* find the first occurrence of the substring needle in the string haystack and return a pointer to it
    assert used to make sure strings are not Null
 */
char *ms_search(const char haystack[] , const char needle[]){
    size_t length = 0;
    int counter,i;
    assert(haystack && needle);/* Works because NULL and FALSE are identical. */
    while(ms_length(haystack)-length>=ms_length(needle)){
        if(haystack[length]==needle[0]){
            counter=0;
            for( i=0;i<ms_length(needle);i++){
                if(haystack[length+i]==needle[i]){
                    counter++;
                }
            }
            if(counter==ms_length(needle)){
                return  (char*)&haystack[length];
                
            }

        }
        length++;
    }
    return NULL;
}
