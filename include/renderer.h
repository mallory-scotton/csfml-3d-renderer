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

#ifndef RENDERER_MAIN_H
    #define RENDERER_MAIN_H

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Window.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "types.h"
#include "config.h"
#include "macros.h"
#include "renderer/vector.h"

////////////////////////////////////////////////////////////
extern int FOV      = 60;
extern int SIZE     = 20;

////////////////////////////////////////////////////////////
/// \brief Load an OBJ 3D model
///
/// \param filename The filename/filepath of the OBJ model
///
////////////////////////////////////////////////////////////
object3d *object3d_create(cstring filename);

#endif //RENDERER_MAIN_H
