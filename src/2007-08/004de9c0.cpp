// from server: 55% by colin
struct Level {
    float x;
    float y;
    bool b0;
    bool b1;
    Level();
};

extern "C" int __cdecl rand(void);

extern float g_79f2bc;
extern double g_79f2c8;
extern double g_78fee0;
extern float g_797e9c;

Level::Level()
{
    x = 0.0f;
    y = 0.0f;

    float f = g_79f2bc;
    float neg = -f;
    int r = rand();
    x = (float)((double)((float)r * (f - neg)) / g_79f2c8 + (double)neg);

    f = g_79f2bc;
    neg = -f;
    r = rand();
    y = (float)((double)((float)r * (f - neg)) / g_79f2c8 + (double)neg);

    double d = 1.0 - g_78fee0;
    r = rand();
    float v = (float)((double)((float)r * d) / g_79f2c8 + g_78fee0);
    b0 = (v > g_797e9c);

    r = rand();
    v = (float)((double)((float)r * d) / g_79f2c8 + g_78fee0);
    b1 = (v > g_797e9c);
}
