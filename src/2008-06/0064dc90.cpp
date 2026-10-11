// from server: 62% by tester
struct Point {
    char pad0[0xc];
    float x;
    float y;
    float z;
    float rx;
    float ry;
    float rz;
    float wx;
    float wy;
    float wz;
    void compute();
};

extern float g_96f044;
extern float g_96f048;
extern float g_96f04c;
extern unsigned int g_96f050;

void Point::compute()
{
    float* m = *(float**)((char*)this + 0xc);
    float* base = m + 0x25;

    float a = base[2] * z + base[1] * y + base[0] * x + base[9];
    float b = base[5] * z + base[3] * x + base[4] * y + base[10];
    float c = base[8] * z + base[6] * x + base[7] * y + base[11];

    rx = a;
    ry = b;
    rz = c;

    if (!(g_96f050 & 1))
    {
        g_96f050 |= 1;
        g_96f044 = 0.0f;
        g_96f048 = 0.0f;
        g_96f04c = 0.0f;
    }

    wx = g_96f044;
    wy = g_96f048;
    wz = g_96f04c;
}
