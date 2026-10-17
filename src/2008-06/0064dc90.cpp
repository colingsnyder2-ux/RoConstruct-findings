// from server: 88% by colin
struct Point {
    char padding0[0x0C];
    void* link;
    float x;
    float y;
    float z;
    float out0;
    float out1;
    float out2;
    float out3;
    float out4;
    float out5;

    void update();
};

extern float g_96f044;
extern float g_96f048;
extern float g_96f04c;
extern unsigned int g_96f050;

void Point::update()
{
    float* m = (float*)((char*)link + 0x94);

    out0 = m[2] * m[1] + z * y + m[0] * x + m[9];
    out1 = m[5] * z + m[3] * x + m[4] * y + m[10];
    out2 = m[8] * z + m[6] * x + m[7] * y + m[11];

    if (!(g_96f050 & 1))
    {
        g_96f050 |= 1;
        g_96f044 = 0.0f;
        g_96f048 = 0.0f;
        g_96f04c = 0.0f;
    }

    out3 = g_96f044;
    out4 = g_96f048;
    out5 = g_96f04c;
}
