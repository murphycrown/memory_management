#include "strex.h"
#include <stdio.h>
#include <string.h>
//this function is an example of how  the functions in the string.h library basically works
void str_concat(char *str1,char *str2){
//First finding the null terminator('\0') in str1
 int i=0;
 while(1){
   if(*(str1+i)=='\0'){
     break;
   };
   i++;
};
//appending str2 to str1
 while(1){
  *(str1+i)=*(str2);
  if(*str2 == '\0'){
    break;
  };
  str2++;
  i++;
 };
};
int  smart_append(buffer* dest,const char* src){
 if(dest==NULL || src==NULL){
  return 1; 
 }
 const int buffer_size=64;
 int  src_len=strlen(src);
 int remaining_space=64-dest->length-1;
 if (src_len>remaining_space){
  strncat(dest->name,src,remaining_space);
  (dest->name)[64]='\0';
  dest->length=63;
  return 1;
 };
  strcat(dest->name,src);
  dest->length+=src_len;
  return 0;

};

