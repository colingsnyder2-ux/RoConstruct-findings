// from server: 45% by colin
struct S_func_0060b8a0 {
    char pad0[0x24];
    void* m_p24;
    char pad28[0x0c];
    void* m_p34;
    int m_n38;
    char pad3c[0x04];
    void* m_p40;
    void* m_p44;
    float f();
};

extern float g_797e9c;

extern "C" void __stdcall sub_005e2090(void*);
extern "C" void __stdcall sub_00530100(void*);
extern "C" void __stdcall sub_005ab780(void*, void*);
extern "C" void __stdcall sub_00627240(void*);
extern "C" void __stdcall sub_0077e6d8();

float S_func_0060b8a0::f()
{
    if (m_n38 == 1) {
        float* p = (float*)((char*)m_p24 + 0x60);
        float x = p[1] * g_797e9c;
        float y = p[2] * g_797e9c;
        float z = p[3] * g_797e9c;
        return (float)(x * y + x * y + z * z);
    }

    float best = 0.0f;
    float tmp[4];
    sub_005e2090(tmp);

    void** begin = (void**)((char*)this + 0x30);
    void* node = *(void**)m_p34;
    void** cur = begin;

    while (node != *(void**)((char*)this + 0x34)) {
        if (cur != 0 && cur != begin) {
            sub_0077e6d8();
        }
        if (node == *(void**)((char*)cur + 4)) {
            sub_0077e6d8();
        }
        node = *(void**)((char*)node + 0xc);
        void* obj = *(void**)((char*)node + 0x64);
        sub_00530100(obj);

        float dx = *(float*)((char*)obj + 0xac) - tmp[0];
        float dy = *(float*)((char*)obj + 0xb0) - tmp[1];
        float dz = *(float*)((char*)obj + 0xa8) - tmp[2];

        float out[3];
        sub_005ab780(out, &dx);

        float* p = (float*)((char*)node + 0x60);
        float x = p[1] * g_797e9c;
        float y = p[2] * g_797e9c;
        float z = p[3] * g_797e9c;

        float d = (float)((x + out[0]) * (x + out[0]) +
                          (y + out[1]) * (y + out[1]) +
                          (z + out[2]) * (z + out[2]));

        float* sel = &d;
        if (!(d < best)) {
            sel = &best;
        }
        best = *sel;

        sub_00627240(&cur);
    }

    return best;
}
