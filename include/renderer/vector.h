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

#ifndef RENDERER_VECTOR_H
    #define RENDERER_VECTOR_H

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "types.h"

////////////////////////////////////////////////////////////
/// \brief Add two vec3 vectors together
///
/// \param a    The first vec3 vector
/// \param b    The second vec3 vector
///
////////////////////////////////////////////////////////////
vec3 add(vec3 a, vec3 b);

////////////////////////////////////////////////////////////
/// \brief Subtract two vec3 vectors together
///
/// \param a    The first vec3 vector
/// \param b    The second vec3 vector
///
////////////////////////////////////////////////////////////
vec3 subtract(vec3 a, vec3 b);

////////////////////////////////////////////////////////////
/// \brief Scale a vec3 vector by a scalar
///
/// \param v        The vec3 vector
/// \param scalar   The scale factor to apply to the vector
///
////////////////////////////////////////////////////////////
vec3 scale(vec3 v, float scalar);

////////////////////////////////////////////////////////////
/// \brief Calculate the dot product of two vec3 vectors
///
/// \param a    The first vec3 vector
/// \param b    The second vec3 vector
///
////////////////////////////////////////////////////////////
float dotProduct(vec3 a, vec3 b);

////////////////////////////////////////////////////////////
/// \brief Calculate the cross product of two vec3 vectors
///
/// \param a    The first vec3 vector
/// \param b    The second vec3 vector
///
////////////////////////////////////////////////////////////
vec3 crossProduct(vec3 a, vec3 b);

////////////////////////////////////////////////////////////
/// \brief Calculate the length of a vec3 vector
///
/// \param v    The vec3 vector
///
/// \return The length of the vector
///
////////////////////////////////////////////////////////////
float length(vec3 v);

////////////////////////////////////////////////////////////
/// \brief Normalize a vec3 vector
///
/// \param v    The vec3 vector
///
/// \return The normalized vector
///
////////////////////////////////////////////////////////////
vec3 normalize(vec3 v);

////////////////////////////////////////////////////////////
/// \brief Rotate a vector based on X axis
///
/// \param v        Vector object
/// \param angle    The rotation applied to the object
///
/// \return The rotate in X axis vector
///
////////////////////////////////////////////////////////////
vec3 rotateX(vec3 v, float angle);

////////////////////////////////////////////////////////////
/// \brief Rotate a vector based on Y axis
///
/// \param v        Vector object
/// \param angle    The rotation applied to the object
///
/// \return The rotate in Y axis vector
///
////////////////////////////////////////////////////////////
vec3 rotateY(vec3 v, float angle);

////////////////////////////////////////////////////////////
/// \brief Rotate a vector based on Z axis
///
/// \param v        Vector object
/// \param angle    The rotation applied to the object
///
/// \return The rotate in Z axis vector
///
////////////////////////////////////////////////////////////
vec3 rotateZ(vec3 v, float angle);

////////////////////////////////////////////////////////////
/// \brief Rotate a vector based on all axis
///
/// \param v        Vector object
/// \param rotation The rotation applied to the object
///
/// \return The rotated vector
///
////////////////////////////////////////////////////////////
vec3 rotate(vec3 v, vec3 rotation);

////////////////////////////////////////////////////////////
/// \brief Project a 3d point in 2d space
///
/// \param pts      The 3d point
///
/// \return The projected point
///
////////////////////////////////////////////////////////////
vec2 project(vec3 pts);

#endif //RENDERER_VECTOR_H
