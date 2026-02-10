#include <stdio.h>
#include <string.h>
#include "exercises/strex.h"
int main(){
//declaration of string with pointer
char chr_arr[4]={'w','a','v','e'};
char *str="knowlegde";
//print the string
//str is actually a char array but when the C sees %s it shows us the whole string
//str is a pointer to the array of char
printf("Value of str as string : %s\n",str);
printf("Value of str as a pointer : %p\n",str);
//you can not do this str[4]='a' if you declare a string with char *;
//because it is stored in a .rodata  which is not writable
//strings are actually a char array
printf("Value of str  as a char : %c \n",*str);
printf("Value of arr_chr  : %c\n",*chr_arr);
printf("Value of str[0]: %c\n",str[0]);
//array of pointers
char *str_p[3]={"london","baku","prague"};
printf("Value of *(str_p):%s\n",*(str_p));
printf("Value of *(str_p+1):%s\n",*(str_p+1));
printf("Value of str_p[0]: %s\n",str_p[0]);
printf("Value of *(*str_p):%c \n",*(*str_p) ) ;
//concatenating two string 
char str1[40]="Hello";
char *str2 ="World!";
printf("Value of str1 before concatenation: %s\n",str1);
str_concat(str1,str2);
printf("Value of str1 after concatenation: %s\n",str1);
//string methods
char str3[15]="Hello";
char  str4[15];
//strcpy copies one string to another
strcpy(str4,str3);
printf("Value of str4 : %s\n",str4);
//strcat concatenates two strings
strcat(str4,str3);
printf("Value of str4 after concatenation: %s\n",str4);
//strlen returns the length of strings(excluding null terminator)
size_t len=strlen(str3);
printf("Lenght of str3 : %zu\n",len);
//appending one string to another string inside the struct
buffer str_struct={.length=4,.name="Well"};
const char src[]="-known";
printf("Value of str_struct.name before smart_append : %s\n",str_struct.name);
int output=smart_append(&str_struct,src);
if(!output){
printf("Full append was possible(success)\n");
}
else{
printf("Full append wasn't possible(failure)\n");
}
printf("Value of str_struct.name and str_struct.length after smart_append : %s and %zu\n",str_struct.name,str_struct.length);

return 0;
}
