#include <iostream>
#include "vec3.h"

int main()
{
    int nx = 200;
    int ny = 100;
    std::cout << "P3" << std::endl << nx << " " << ny << std::endl << "255" << std::endl;

    for (int j = ny - 1; j >= 0; --j)
        for (int i = 0; i < nx; ++i)
        {
            vec3 color((float)i / (float)(nx), (float)j / (float)(ny), 0.2f);
            int ir = (int)(255.99f * color[0]);
            int ig = (int)(255.99f * color[1]);
            int ib = (int)(255.99f * color[2]);

            std::cout << ir << " " << ig << " " << ib << std::endl;
        }

    return 0;
}

