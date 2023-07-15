#include "color.h"
#include "vec3.h"

#include <iostream>

int main()
{
    const int IMAGE_WIDTH = 256;
    const int IMAGE_HEIGHT = 256;

    std::cout << "P3\n" << IMAGE_WIDTH << ' ' << IMAGE_HEIGHT << "\n255\n";

    for (int j = IMAGE_HEIGHT - 1; j >= 0; --j)
    {
        for(int i = 0; i < IMAGE_WIDTH; i++)
        {
            color pixel_color(double(i)/(IMAGE_WIDTH - 1), double(j)/(IMAGE_HEIGHT - 1), 0.25);
            write_color(std::cout, pixel_color);
        }
    }

}