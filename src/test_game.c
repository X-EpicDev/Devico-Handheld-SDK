#include "game_api.h"
#include "system_api.h"
#include "sdk.h"

static void game_init(SystemAPI* sys) {
    sys->clear(0x2D3C);
}

static void game_update(SystemAPI* sys) {

}

static void game_render(SystemAPI* sys) {

}


//DO NOT TOUCH - WITHOUT THIS THINGS WILL NOT WORK
static GameAPI game_api = {
    .init = game_init,
    .update = game_update,
    .render = game_render,
};

GameAPI* get_game_api(void) {
    return &game_api;
}