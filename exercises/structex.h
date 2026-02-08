typedef struct City {
char *name;
int lon;
int lat;
} city_t ;

struct City new_city(char *name , int lon ,int  lat);
struct City change_details(struct City c,char *name,int lon,int lat);
void ptr_update(city_t *c ,char *name,int lon ,int lat );
