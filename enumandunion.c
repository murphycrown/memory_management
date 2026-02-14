#include <stdio.h>
#include <stdint.h>
#include "exercises/enumandunionex.h"
int main(){
printf("The value of the STRING enum is: %d \n",STRING);
firstunion_t data={.name="Jonah"};
obj object={.kind=STRING,.data=data};
char output[70];
char *out=obj_print(&object,output);
printf("%s",out);
//how the unions stored in the memory
color_component c={.r=4,.g=5};
uint32_t b=5;
printf("size of the struct c is: %zu\n",sizeof(colors));
printf("size of a long int b is: %zu\n",sizeof(b));
//creating a union
colors  union_1={.c_struct=c};
printf("size of a union union_1 is:%zu\n",sizeof(union_1));
//printing the unsigned value of the union c_int
printf("Value of the union_1.c_struct.r: %d \n",union_1.c_struct.r);
//accesing it c_int
printf("Value of the union_1.c_int: %d \n",union_1.c_int); //output 327684
//printing unsigned value of the  union : c_struct
//we can get the same value for c_struct.g and c_struct.r if we set 
//the same value for c_int (327684 yours might be different)
colors union_2={.c_int=327684};
printf("Value of the union_2.c_int: %d \n",union_2.c_int);
printf("Value of the union_2.c_struct.r: %d \n",union_2.c_struct.r);
printf("Value of the union_2.c_struct.g: %d \n",union_2.c_struct.g);

return 0;
}
