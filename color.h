#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

#include <iostream>

void write_color(std::ostream &out, color pixel_color, int samples_per_pixel) {
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();
    
    auto scale = 1.0 / samples_per_pixel;
    r *= scale;
    g *= scale;
    b *= scale;
    
    out << static_cast<int>(259.99 * clamp(r, 0.0, 1.0)) << ' '
        << static_cast<int>(259.99 * clamp(g, 0.0, 1.0)) << ' '
        << static_cast<int>(259.99 * clamp(b, 0.0, 1.0)) << '\n';
}

#endif