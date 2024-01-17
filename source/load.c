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
/// \brief Count letter
///
/// \param buffer   The buffer string
///
////////////////////////////////////////////////////////////
static ulong countchar(string buffer, char ch)
{
    ulong count = 0;

    for (; *buffer; ++buffer) {
        if (*buffer == ch && *(buffer + 1) == ' ')
            count++;
    }
    return (count);
}

////////////////////////////////////////////////////////////
/// \brief Parse an OBJ 3d model
///
/// \param buffer   The buffer containing the object
///
////////////////////////////////////////////////////////////
static object3d *object3d_parse(string buffer)
{
    object3d *object = malloc(sizeof(object3d));
    int iface = 0, ivert = 0;
    uint x = 0;
    cstring token;

    object->face_count = countchar(buffer, 'f');
    object->vertex_count = countchar(buffer, 'v');
    object->faces = malloc(sizeof(face) * object->face_count);
    object->vertex = malloc(sizeof(vec3) * object->vertex_count);
    token = strtok(buffer, "\n");
    while (token != NULL) {
        if (token[0] == 'v' && token[1] == ' ') {
            object->vertex[ivert] = malloc(sizeof(vec3));
            sscanf(token, "v %f %f %f", &(object->vertex[ivert]->x),
                &(object->vertex[ivert]->y), &(object->vertex[ivert]->z));
            ivert++;
        }
        if (token[0] == 'f' && token[1] == ' ') {
            object->faces[iface] = malloc(sizeof(face));
            sscanf(token, "f %d %d %d", &(object->faces[iface]->v1),
                &(object->faces[iface]->v2), &(object->faces[iface]->v3));
            object->faces[iface]->v1--;
            object->faces[iface]->v2--;
            object->faces[iface]->v3--;
            iface++;
        }
        token = strtok(NULL, "\n");
    }
    object->edges = malloc(sizeof(edge) * object->face_count * 3);
    for (uint i = 0; i < object->face_count; i++) {
        object->edges[x++] = (edge){object->faces[i]->v1, object->faces[i]->v2};
        object->edges[x++] = (edge){object->faces[i]->v1, object->faces[i]->v3};
        object->edges[x++] = (edge){object->faces[i]->v2, object->faces[i]->v3};
    }
    object->wireframe = false;
    object->position = VEC3(0.0f, 0.0f, 0.0f);
    object->rotation = VEC3(0.0f, 0.0f, 0.0f);
    object->scale = VEC3(1.0f, 1.0f, 1.0f);
    return (object);
}

////////////////////////////////////////////////////////////
/// \brief Load an OBJ 3D model
///
/// \param filename The filename/filepath of the OBJ model
///
////////////////////////////////////////////////////////////
object3d *object3d_create(cstring filename)
{
    long fsize;
    FILE *f = fopen(filename, "rb");
    string buffer;

    fseek(f, 0, SEEK_END);
    fsize = ftell(f);
    fseek(f, 0, SEEK_SET);
    buffer = malloc(fsize + 1);
    fread(buffer, fsize, 1, f);
    fclose(f);
    buffer[fsize] = 0;
    return (object3d_parse(buffer));
}
