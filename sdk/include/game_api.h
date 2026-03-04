#include "system_api.h"

#ifndef DEVICO_HANDHELD_GAME_API_H
#define DEVICO_HANDHELD_GAME_API_H

typedef struct GameAPI{
    void (*init)(SystemAPI* sys);
    void (*main)(SystemAPI* sys);
} GameAPI;

GameAPI* get_game_api(void);

#endif //DEVICO_HANDHELD_GAME_API_H