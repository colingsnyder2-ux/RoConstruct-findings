// from server: 89% by colin
struct UnifiedWidget {
    char pad[0xf4];
    float f4;
    float f8;
    char pad2[0x118 - 0xf8 - 4];
    int i118;
    float f11c;
    float f120;
    float f124;
    float f128;
    float f12c;
    float f130;
    float f134;
    float f138;
    int i13c;
    void init();
};

extern float g_7a8374;
extern float g_7a8370;

extern "C" float* __cdecl sub_50b0e0();
extern "C" float* __cdecl sub_736ed0();

void UnifiedWidget::init()
{
    f4 = g_7a8374;
    f8 = g_7a8370;
    i118 = 0x12;

    float* p = sub_50b0e0();
    f11c = p[0];
    f120 = p[1];
    f124 = p[2];
    f128 = 1.0f;

    float* q = sub_736ed0();
    f12c = q[0];
    f130 = q[1];
    f134 = q[2];
    f138 = q[3];
    i13c = 1;
}
