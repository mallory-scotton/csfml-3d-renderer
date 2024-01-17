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

#ifndef RENDERER_CONFIG_H
    #define RENDERER_CONFIG_H

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <SFML/Window.h>

////////////////////////////////////////////////////////////
// Windows Configuration
////////////////////////////////////////////////////////////
#define WINDOW_WIDTH        1920
#define WINDOW_HEIGHT       1080
#define WINDOW_BITS         32
#define WINDOW_TITLE        "CSFML 3D Renderer"
#define WINDOW_STYLE        (sfClose | sfResize)
#define WINDOW_SETTINGS     NULL

#endif //RENDERER_CONFIG_H
