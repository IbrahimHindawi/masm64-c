#include "m_matrix.h"

void m_matrix33_create( m_matrix33 matrix,
                        f32 m00, f32 m01, f32 m02,
                        f32 m10, f32 m11, f32 m12,
                        f32 m20, f32 m21, f32 m22) {
    matrix[0][0] = m00; matrix[0][1] = m01; matrix[0][2] = m02;
    matrix[1][0] = m10; matrix[1][1] = m11; matrix[1][2] = m12;
    matrix[2][0] = m20; matrix[2][1] = m21; matrix[2][2] = m22;
    return;
}
