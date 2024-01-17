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

#ifndef RENDERER_TYPES_H
    #define RENDERER_TYPES_H

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Graphics.h>

////////////////////////////////////////////////////////////
#undef                              bool
#undef                              false
#undef                              true

////////////////////////////////////////////////////////////
/// \brief Boolean type
///
////////////////////////////////////////////////////////////
typedef enum {false, true}          bool;

////////////////////////////////////////////////////////////
/// \brief String types
///
////////////////////////////////////////////////////////////
typedef char *                      string;
typedef const char *                cstring;

////////////////////////////////////////////////////////////
/// \brief Unsigned types
///
////////////////////////////////////////////////////////////
typedef unsigned char               uchar;
typedef unsigned int                uint;
typedef unsigned long               ulong;

////////////////////////////////////////////////////////////
/// \brief Vector types
///
////////////////////////////////////////////////////////////
typedef sfVector2f                  vec2;
typedef sfVector3f                  vec3;
typedef struct {float x,y,z,w;}     vec4;

////////////////////////////////////////////////////////////
/// \brief 3d types
///
////////////////////////////////////////////////////////////
typedef struct {uint v1, v2, v3;}   face;
typedef struct {uint v1, v2;}       edge;

////////////////////////////////////////////////////////////
/// \brief 3D Object type
///
/// \param vertex       Vertex array of the object
/// \param faces        Faces array of the object
/// \param edges        Edges array of the object
/// \param vertex_count Vertex count
/// \param face_count   Face count
/// \param wireframe    Boolean, draw the object in wireframe
/// \param scale        Scale vector
/// \param position     Position vector
/// \param rotation     Rotation vector
///
////////////////////////////////////////////////////////////
typedef struct {
    vec3 **vertex;
    face **faces;
    edge *edges;
    uint vertex_count;
    uint face_count;
    bool wireframe;
    vec3 scale;
    vec3 position;
    vec3 rotation;
} object3d;

#endif //RENDERER_TYPES_H
