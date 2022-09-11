#ifndef                     __M_MATRIX_H__
#define                     __M_MATRIX_H__

#include "stdtype.h"
#include "m_vec.h"

typedef f32 m_matrix33[3][3];

void m_matrix33_set_f32(m_matrix33 matrix,
                        f32 m00, f32 m01, f32 m02,
                        f32 m10, f32 m11, f32 m12,
                        f32 m20, f32 m21, f32 m22);
void m_matrix33_set_vec3f32(m_matrix33 matrix, m_vec3f32 a, m_vec3f32 b, m_vec3f32 c); 
void m_matrix33_print(m_matrix33 matrix);

#endif
