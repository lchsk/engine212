#ifndef ENGINE_TEXTURE_LOADER_H
    #define ENGINE_TEXTURE_LOADER_H

#include "config.h"
#include "enums.h"
#include "texture.h"

typedef struct TextureLoader {
    int textures_size;
    int loaded;
    Texture **textures;
    char **paths;
} TextureLoader;

TextureLoader* texture_loader_new(int textures_size);
void texture_loader_free(TextureLoader *loader);

int texture_loader_load(TextureLoader *loader, SDL_Renderer *renderer, LoaderState loader_state);

    #endif /* ENGINE_TEXTURE_LOADER_H */
