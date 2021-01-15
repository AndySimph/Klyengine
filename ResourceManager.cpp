//File for functions of the resource manager

//Libraries
#include "ResourceManager.h"

namespace Klyengine {

    TextureCache ResourceManager::_textureCache;

    GLTexture ResourceManager::getText(std::string texturePath) {
        return _textureCache.getTexture(texturePath);
    }

}