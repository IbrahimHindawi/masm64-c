#include <stdio.h>
#include "stdtype.h"
#include "m_vec.h"

// x64 function prototypes
// int func();
// void s_vec3f32_add_scalar(m_vec3f32 *v, float s);

m_vec3f32 pos;
m_vec3f32 up;
m_vec3f32 fd;

int main() {
    /*
    printf("\nC&MASM64 MATHS!\n");

    int num = func();   
    printf("x64 function returned: %d\n", num);

    pos.x = 3.14f;
    pos.c[2] = 3.14f;
    printf("vector v: {%f, %f, %f}\n", pos.x, pos.y, pos.z); 

    float s = 3.0f;
    s_vec3f32_add_scalar(&pos, s);
    printf("vector v: {%f, %f, %f}\n", pos.x, pos.y, pos.z); 
    */
    pos = m_vec3f32_create(12.23414f, 8.1245f, 3.1234f);
    printf("vector v: {%f, %f, %f}\n", pos.x, pos.y, pos.z); 
    // pos = m_vec3f32_add_scalar(pos, 3.0f);
    pos = m_vec3f32_add_scalar(pos, 3.0f);
    printf("vector v: {%f, %f, %f}\n", pos.x, pos.y, pos.z); 

    up.y = 1.0f;
    fd.z = 1.0f;
    f32 dotprod = m_vec3f32_dot(up, fd);
    printf("dot: %f\n", dotprod);

    f32 len = m_vec3f32_length(pos);
    printf("length: %f\n", len);

    m_vec3f32 npos = m_vec3f32_normalize(pos);
    printf("normalized vector pos: {%f, %f, %f}\n", npos.x, npos.y, npos.z); 
    len = m_vec3f32_length(npos);
    printf("normalized length: %f\n", len);

    return 0;
}


