// from server: 32% by colin
struct RenderScene {
    char pad0[0x24];
    float f24;
    float f28;
    char pad2c[0x2f4 - 0x2c];
    char sub2f4[0x308 - 0x2f4];
    char f308[0x30c - 0x308];
    char f30c[0x310 - 0x30c];
    unsigned char b310;
    char pad311[0x314 - 0x311];
    float f314;
    char pad318[0x3a0 - 0x318];
    char f3a0[0x498 - 0x3a0];
    char f498[0x4a0 - 0x498];
    void func(float, unsigned char, float, float, float);
};

extern "C" int __stdcall InterlockedDecrement(int*);
extern "C" void __stdcall sub_7afce0();
extern "C" void __stdcall sub_598fa0();
extern "C" void __stdcall sub_45ad90();

extern float g_8163a4;

void RenderScene::func(float a, unsigned char b, float c, float d, float e)
{
    float v;
    if (a == 0.0f) {
        v = g_8163a4;
        if (v == 0.0f) {
            v = 0.0f;
        }
    } else {
        v = a;
    }

    if (f24 == c && f28 == d && b310 == b && f314 == e) {
        return;
    }

    f24 = c;
    f28 = d;
    f314 = e;
    b310 = b;

    sub_7afce0();
    sub_598fa0();
    sub_45ad90();
}
