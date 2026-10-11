// from server: 48% by colin
// roc 2008-06 007b2520  unit: RBX::RenderNew::TextureProxy  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b2520

extern "C" void* __stdcall sub_503960(void*);

struct Scene {
    void copyFrom(void*);
};

extern float g_828380;
extern int g_96bf30;

struct TextureProxy {
    char pad0[0x14];
    unsigned char flag14;
    void apply(void* a, void* b);
};

void TextureProxy::apply(void* a, void* b)
{
    double scale;
    if (flag14 == 0 && g_96bf30 != 0)
        scale = (double)g_828380;
    else
        scale = 1.0;

    void* p = sub_503960(a);
    void* q = *(void**)b;
    Scene* r = (Scene*)*(void**)p;
    r->copyFrom(q);

    float f = (float)scale;
    float* m = *(float**)p;
    m[0x34/4] *= f;
    m[0x38/4] *= f;
    m[0x3c/4] *= f;

    m = *(float**)p;
    m[0x0c/4] *= f;
    m[0x10/4] *= f;
    m[0x14/4] *= f;

    m = *(float**)p;
    m[0x18/4] *= f;
    m[0x1c/4] *= f;
    m[0x20/4] *= f;

    m = *(float**)p;
    m[0x24/4] *= f;
    m[0x28/4] *= f;
    m[0x2c/4] *= f;

    int n = *(int*)((char*)p + 0x44);
    if (n > 0) {
        char* base = *(char**)((char*)p + 0x40);
        int i = 0;
        int off = 0;
        do {
            float* e = (float*)(base + off + 0x40);
            e[0] *= f;
            e[1] *= f;
            e[2] *= f;
            i++;
            off += 0x50;
            p = *(void**)p;
            n = *(int*)((char*)p + 0x44);
        } while (i < n);
    }

    int n2 = *(int*)((char*)p + 0x50);
    if (n2 > 0) {
        char* base = *(char**)((char*)p + 0x4c);
        int i = 0;
        int off = 0;
        do {
            float* e = (float*)(base + off + 0x40);
            e[0] *= f;
            e[1] *= f;
            e[2] *= f;
            i++;
            off += 0x50;
            p = *(void**)p;
            n2 = *(int*)((char*)p + 0x50);
        } while (i < n2);
    }
}
