#pragma once

struct vec3
{
    float e[3];

    vec3(float x, float y, float z)
    { e[0] = x; e[1] = y; e[2] = z; }

    float operator [] (int i) const { return e[i]; }
    float& operator [] (int i) { return e[i]; }
};

