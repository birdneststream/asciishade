#pragma once

#include <wchar.h>

// this is the base of the canvas
typedef struct {
    wchar_t character;
    int foreground_color;
    int background_color;
} canvas_pixel_t;

canvas_pixel_t **init_canvas(int height, int width);
void free_canvas(canvas_pixel_t **canvas, int canvas_height);
void clear_canvas_row_unsafe(canvas_pixel_t *row, int width);
void clear_canvas(canvas_pixel_t **canvas, int canvas_height, int canvas_width);
void fill_canvas_row_unsafe(canvas_pixel_t *row, int width, int fgcolor, int bgcolor);
void fill_canvas(canvas_pixel_t **canvas, int canvas_height, int canvas_width, int fgcolor, int bgcolor);

