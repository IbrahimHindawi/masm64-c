// #include <windows.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

int func();

typedef union {
    struct {
        float x;
        float y;
    };
    float c[2];
} m_vec2;

typedef union {
    struct {
        float x;
        float y;
        float z;
    };
    float c[3];
} m_vec3;

// int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR pCmdLine, int nCmdShow) {
int main() {
    printf("\nC&MASM64 MATHS!\n");
    int num = func();   
    printf("%d\n", num);
    m_vec3 v = {0};
    v.x = 1.0f;
    v.c[1] = 2.0f;
    printf("%f, %f, %f\n", v.x, v.y, v.z); 
    return 0;
}


