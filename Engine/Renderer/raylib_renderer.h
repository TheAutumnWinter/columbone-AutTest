#ifndef LOAD_H_INCLUDED
#define LOAD_H_INCLUDED
#include <stdbool.h>
#include "raylib.h"
/* 
*Example header file, this is not at all final
*
*/
bool is_window_open();
void create_window();
void terminate();
void create_render_texture();
void draw_to_texture();
void draw_to_screen();
void draw_pixel();
void draw_image();
#endif
