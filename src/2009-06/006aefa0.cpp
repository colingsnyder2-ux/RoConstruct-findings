// from server: 63% by atomic.potato
struct GeoPair {
    int f0;
    int f4;
    int f8;
    int fC;
    int f10;
    void init();
};

struct NormalBreakConnector {
    int f0;
    int f4;
    char pad8[0x24];
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    void ctor(float a, float b, float c);
};

extern float g_a3c6ec;
extern float g_a3c6f0;
extern float g_a3c6f4;
extern unsigned int g_a3c6f8;

void GeoPair::init()
{
    fC = 0;
    f10 = 0;
    f4 = 0;
    f8 = 0;
}

void NormalBreakConnector::ctor(float a, float b, float c)
{
    f4 = -1;
    ((GeoPair*)((char*)this + 8))->init();
    f0 = 0x8eaa84;
    f44 = 0.0f;
    f48 = 0.0f;
    f4c = 0.0f;
    f2c = a;
    f34 = b;
    f30 = c;
    if (!(g_a3c6f8 & 1)) {
        g_a3c6f8 |= 1;
        g_a3c6ec = 0.0f;
        g_a3c6f0 = 0.0f;
        g_a3c6f4 = 0.0f;
    }
    f44 = g_a3c6ec;
    f48 = g_a3c6f0;
    f4c = g_a3c6f4;
    f38 = g_a3c6ec;
    f3c = g_a3c6f0;
    f40 = g_a3c6f4;
}
