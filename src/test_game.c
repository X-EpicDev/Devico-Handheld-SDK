#include "game_api.h"

//INIT CODE
typedef struct {
    int colour;
    bool swap;
} persistent_data;
static persistent_data global;

static void game_init(SystemAPI* sys) {
    global.colour = 0x0000;
    global.swap = false;
}



//MAIN GAME LOOP
static void game_main(SystemAPI* sys) {
    if (global.swap) {
        global.colour = 0xFFFF;
    } else {
        global.colour = 0x0000;
    }
    sys->clear(global.colour);
    global.swap = !global.swap;
}

//DO NOT TOUCH - WITHOUT THIS THINGS WILL NOT WORK (will move into the SDK)
static GameAPI game_api = {
    .init = game_init,
    .main = game_main,
};

GameAPI* get_game_api(void) {
    return &game_api;
}