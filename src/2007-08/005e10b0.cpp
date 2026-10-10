// from server: 74% by colin
struct VMotorFeature {
    void func(void* a, void* b);
};

extern float g_5e10b0_0;
extern float g_5e10b0_1;
extern float g_5e10b0_2;
extern int g_5e10b0_3;

extern "C" void* __cdecl sub_573d40(void*);
extern "C" void __cdecl sub_5ba210(void*, void*);

void VMotorFeature::func(void* a, void* b) {
    if ((g_5e10b0_3 & 1) == 0) {
        g_5e10b0_3 |= 1;
        g_5e10b0_0 = 0.0f;
        g_5e10b0_1 = 0.0f;
        g_5e10b0_2 = 0.0f;
    }

    float* p = (float*)a;
    if (g_5e10b0_0 != p[0] || g_5e10b0_1 != p[1] || g_5e10b0_2 != p[2]) {
        int* q = (int*)b;
        int i = 0;
        if (q[1] > 0) {
            do {
                void* r = sub_573d40(*(void**)(*q + i * 4));
                sub_5ba210(r, a);
                ++i;
            } while (i < q[1]);
        }
    }
}
