#include <stdio.h>

/*
 * include analogous types
 */
typedef struct{
    float x;
    float y;
    float z;
}vec3;
/*
 * include MASM64 function prototypes
 */
void s_vec3f_add_scalar(vec3 v, float s);
/*
 * include MASM64 function prototypes
 */
vec3 v0;
int main() {
    printf("\nMASM64 & C\n");
    s_vec3f_add_scalar(v0, 3.0f);
    printf("\n\n");
    return 0;
}
