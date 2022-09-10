// #include <windows.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

// c structs
typedef union {
    struct {
        float x;
        float y;
    };
    float c[2];
} m_vec2f;

typedef union {
    struct {
        float x;
        float y;
        float z;
    };
    float c[3];
} m_vec3f;

// c procs
m_vec3f m_vec3f_add_scalar(m_vec3f v, float s) {
    m_vec3f result = {0};
    result.x = v.x + s;
    result.y = v.y + s;
    result.z = v.z + s;
    return result;
}

// x64 function prototypes
int func();
void s_vec3f_add_scalar(m_vec3f *v, float s);

m_vec3f pos;

// int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pCmdLine, int nCmdShow) {
int main() {
    printf("\nC&MASM64 MATHS!\n");

    int num = func();   
    printf("x64 function returned: %d\n", num);

    pos.x = 3.14f;
    pos.c[2] = 3.14f;
    printf("vector v: {%f, %f, %f}\n", pos.x, pos.y, pos.z); 

    float s = 3.0f;
    s_vec3f_add_scalar(&pos, s);
    printf("vector v: {%f, %f, %f}\n", pos.x, pos.y, pos.z); 
    return 0;
}


