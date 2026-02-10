#include <string.h>
#include <stdio.h>
typedef struct TextBuffer buffer;
typedef struct TextBuffer {
size_t length;
char name[64];


} buffer;


void str_concat(char *str1 ,char *str2); 
int  smart_append(buffer* dest, const char* src);
