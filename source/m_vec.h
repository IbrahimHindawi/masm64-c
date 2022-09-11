#ifndef                     __M_VEC_H__
#define                     __M_VEC_H__

#include "stdtype.h"

typedef union {
    struct {
        f32 x;
        f32 y;
    };
    f32 c[2];
} m_vec2f32;

typedef union {
    struct {
        f32 x;
        f32 y;
        f32 z;
    };
    f32 c[3];
} m_vec3f32;

m_vec3f32   m_vec3f32_create(f32 x, f32 y, f32 z);
m_vec3f32   m_vec3f32_add_scalar(m_vec3f32 v, f32 s);
m_vec3f32   m_vec3f32_mul_scalar(m_vec3f32 v, f32 s);
m_vec3f32   m_vec3f32_div_scalar(m_vec3f32 v, f32 s);
f32         m_vec3f32_dot(m_vec3f32 a, m_vec3f32 b);
f32         m_vec3f32_length(m_vec3f32 v);
m_vec3f32   m_vec3f32_normalize(m_vec3f32 v);

#endif
