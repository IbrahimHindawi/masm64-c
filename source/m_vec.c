#include <math.h>
#include "m_vec.h"

m_vec3f32 m_vec3f32_create(f32 x, f32 y, f32 z) {
    m_vec3f32 result = {0};
    result.x = x;
    result.y = y;
    result.z = z;
    return result;
}
m_vec3f32 m_vec3f32_add_scalar(m_vec3f32 v, f32 s) {
    m_vec3f32 result = {0};
    result.x = v.x + s;
    result.y = v.y + s;
    result.z = v.z + s;
    return result;
}

m_vec3f32 m_vec3f32_mul_scalar(m_vec3f32 v, f32 s) {
    m_vec3f32 result = {0};
    result.x = v.x * s;
    result.y = v.y * s;
    result.z = v.z * s;
    return result;
}

m_vec3f32 m_vec3f32_div_scalar(m_vec3f32 v, f32 s) {
    m_vec3f32 result = {0};
    result.x = v.x / s;
    result.y = v.y / s;
    result.z = v.z / s;
    return result;
}

f32 m_vec3f32_dot(m_vec3f32 a, m_vec3f32 b) {
    f32 result = a.x * b.x + a.y * b.y + a.z * b.z;
    return result;
}

f32 m_vec3f32_length(m_vec3f32 v) {
    f32 result = sqrt(m_vec3f32_dot(v, v));
    return result;
}

m_vec3f32 m_vec3f32_normalize(m_vec3f32 v) {
    m_vec3f32 result = {0};
    f32 reciprocal_length = 1.0f / m_vec3f32_length(v);
    result.x = v.x * reciprocal_length;
    result.y = v.y * reciprocal_length;
    result.z = v.z * reciprocal_length;
    return result;
}

