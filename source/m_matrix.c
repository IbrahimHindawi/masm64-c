#include "m_matrix.h"

void m_matrix33_create(m_matrix33 matrix,
                        f32 m00, f32 m01, f32 m02,
                        f32 m10, f32 m11, f32 m12,
                        f32 m20, f32 m21, f32 m22) {
    matrix[0][0] = m00; matrix[0][1] = m01; matrix[0][2] = m02;
    matrix[1][0] = m10; matrix[1][1] = m11; matrix[1][2] = m12;
    matrix[2][0] = m20; matrix[2][1] = m21; matrix[2][2] = m22;
    return;
}
void m_matrix33_set_vec3f32(m_matrix33 matrix, m_vec3f32 a, m_vec3f32 b, m_vec3f32 c) {
    matrix[0][0] = a.x; matrix[0][1] = a.y; matrix[0][2] = a.z;
    matrix[1][0] = b.x; matrix[1][1] = b.y; matrix[1][2] = b.z;
    matrix[2][0] = c.x; matrix[2][1] = c.y; matrix[2][2] = c.z;
    return;
}
void m_matrix33_print(m_matrix33 matrix) {
    printf("matrix: \n{%f, %f, %f,\n %f, %f, %f,\n %f, %f, %f}\n", 
            matrix[0][0], matrix[0][1], matrix[0][2], 
            matrix[1][0], matrix[1][1], matrix[1][2], 
            matrix[2][0], matrix[2][1], matrix[2][2]);
    return;
}
