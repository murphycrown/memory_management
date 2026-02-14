#include <stdio.h>
#include "enumandunionex.h"

//function prints the value of the union according to its type
char  *obj_print(obj* object,char *output){
switch(object->kind){
case STRING:
 sprintf(output,"Value of the object.data.name is: %s\n",(object->data).name);
 return output;
case INTEGER:
 printf(output,"Value of the object.data.age is: %d\n",(object->data).age);
 return output;
default:
  printf(output,"Unknown\n");
  return output;
};



};
