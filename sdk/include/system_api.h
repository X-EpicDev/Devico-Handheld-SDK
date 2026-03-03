#ifndef DEVICO_HANDHELD_SYSTEM_API_H
#define DEVICO_HANDHELD_SYSTEM_API_H
#include <stdint.h>

// //input not yet implemented
// typedef struct {
//     bool input_up;
//     bool input_down;
//     bool input_left;
//     bool input_right;
//
//     bool input_a;
//     bool input_b;
//     bool input_x;
//     bool input_y;
//
//     bool input_start;
//     bool input_select;
//
//     bool input_l_bump;
//     bool input_r_bump;
// } InputState;


//API Functions
typedef struct SystemAPI{
    //Rendering Functions
    void (*clear)(uint16_t colour);
    //Input Functions

    //Screen Functions
} SystemAPI;

void system_api_init(SystemAPI* api);

#endif //DEVICO_HANDHELD_SYSTEM_API_H