#include "stdtype.h"

typedef f32 m_matrix33[3][3];

void m_matrix33_create( m_matrix33 matrix,
                        f32 m00, f32 m01, f32 m02,
                        f32 m10, f32 m11, f32 m12,
                        f32 m20, f32 m21, f32 m22);
