#include <iostream>

int main()
{
    int nx = 100;
    int ny = 100;
    std::cout << "P3" << std::endl << nx << " " << ny << std::endl << "255" << std::endl;

    for (int j = ny - 1; j >= 0; --j)
        for (int i = 0; i < nx; ++i)
        {
            float r = (float)i / (float)(nx);
            float g = (float)j / (float)(ny);
            float b = 0.2f;

            int ir = (int)(255.99f * r);
            int ig = (int)(255.99f * g);
            int ib = (int)(255.99f * b);

            std::cout << ir << " " << ig << " " << ib << std::endl;
        }

    return 0;
}

