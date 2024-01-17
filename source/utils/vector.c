////////////////////////////////////////////////////////////
//
// CSFML-3D-RENDERER - 3D Renderer made in CSFML
// Copyright (C) 2023 Mallory Scotton (mscotton.pro@gmail.com)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the
// use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "renderer.h"

////////////////////////////////////////////////////////////
vec3 add(vec3 a, vec3 b)
{
    return (VEC3(a.x + b.x, a.y + b.y, a.z + b.z));
}

////////////////////////////////////////////////////////////
vec3 subtract(vec3 a, vec3 b)
{
    return (VEC3(a.x - b.x, a.y - b.y, a.z - b.z));
}

////////////////////////////////////////////////////////////
vec3 scale(vec3 v, float scalar)
{
    return (VEC3(v.x * scalar, v.y * scalar, v.z * scalar));
}

////////////////////////////////////////////////////////////
float dotProduct(vec3 a, vec3 b)
{
    return (a.x * b.x + a.y * b.y + a.z * b.z);
}

////////////////////////////////////////////////////////////
vec3 crossProduct(vec3 a, vec3 b)
{
    return (VEC3(
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    ));
}

////////////////////////////////////////////////////////////
float length(vec3 v)
{
    return (sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
}

////////////////////////////////////////////////////////////
vec3 normalize(vec3 v)
{
    float len = length(v);

    if (len > 0.0f)
        return (scale(v, 1.0f / len));
    return (VEC3(0.0f, 0.0f, 0.0f));
}

////////////////////////////////////////////////////////////
vec3 rotateX(vec3 v, float angle)
{
    float rad = RAD(angle);

    return (VEC3(
        v.x,
        v.y * cos(rad) - v.z * sin(rad),
        v.y * sin(rad) + v.z * cos(rad)
    ));
}

////////////////////////////////////////////////////////////
vec3 rotateY(vec3 v, float angle)
{
    float rad = RAD(angle);

    return (VEC3(
        v.x * cos(rad) + v.z * sin(rad),
        v.y,
        -v.x * sin(rad) + v.z * cos(rad)
    ));
}

////////////////////////////////////////////////////////////
vec3 rotateZ(vec3 v, float angle)
{
    float rad = RAD(angle);

    return (VEC3(
        v.x * cos(rad) - v.y * sin(rad),
        v.x * sin(rad) + v.y * cos(rad),
        v.z
    ));
}

////////////////////////////////////////////////////////////
vec3 rotate(vec3 v, vec3 rotation)
{
    return (rotateX(rotateY(rotateZ(v, rotation.z), rotation.y), rotation.x));
}

////////////////////////////////////////////////////////////
vec2 project(vec3 pts)
{
    return (VEC2(
        WINDOW_WIDTH / 2 + (FOV * pts.x) / (FOV + pts.z) * SIZE,
        WINDOW_HEIGHT / 2 + (FOV * pts.y) / (FOV + pts.z) * SIZE
    ));
}
