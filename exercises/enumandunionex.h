#include<stdint.h>
typedef enum  FirstEnum firstenum_t;
typedef enum FirstEnum {
STRING=0,
INTEGER,
} first_t;
typedef union {
int age;
char *name;

} firstunion_t;

typedef struct {
firstunion_t  data;
firstenum_t kind;
} obj;
typedef struct {
uint16_t r;
uint16_t g;
} color_component;
typedef union {
color_component c_struct;
uint32_t  c_int;
} colors;


char  *obj_print(obj* object,char *output);
