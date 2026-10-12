// from server: 82% by king_originala
#pragma float_control(precise, off)

extern float g_84b04c;
extern float g_84b048;

struct RBX_Ball
{
    float f_0, f_4, f_8;
    float f_c, f_10, f_14;
    float f_18, f_1c, f_20;
    float f_24, f_28, f_2c;

    void func(float* a, float* c, float* d, float* b);
};

void RBX_Ball::func(float* a, float* c, float* d, float* b)
{
    *d = g_84b04c;
    *b = g_84b048;

    float x = f_0 - a[0];
    float y = f_4 - a[1];
    float z = f_8 - a[2];
    float t = x * c[0] + y * c[1] + z * c[2];
    *d = *(t < *d ? &t : d);
    *b = *(t > *b ? &t : b);

    x = f_c - a[0];
    y = f_10 - a[1];
    z = f_14 - a[2];
    t = x * c[0] + y * c[1] + z * c[2];
    *d = *(t < *d ? &t : d);
    *b = *(t > *b ? &t : b);

    x = f_18 - a[0];
    y = f_1c - a[1];
    z = f_20 - a[2];
    t = x * c[0] + y * c[1] + z * c[2];
    *d = *(t < *d ? &t : d);
    *b = *(t > *b ? &t : b);

    x = f_24 - a[0];
    y = f_28 - a[1];
    z = f_2c - a[2];
    t = x * c[0] + y * c[1] + z * c[2];
    *d = *(t < *d ? &t : d);
    *b = *(t > *b ? &t : b);
}
