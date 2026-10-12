// from server: 43% by colin
struct SharedPtr {
    void* p;
    void* q;
    void* r;
};

struct TexturePtr {
    char pad[8];
    void* res;
    TexturePtr(const SharedPtr&);
    ~TexturePtr();
};

struct TextureManager {
    static TextureManager& getSingleton();
    void* getByName(const char*, const char*);
};

struct GImage {
    char pad[8];
    void* img;
    void release();
};

extern "C" {
    long __stdcall InterlockedDecrement(long volatile*);
    void* __stdcall sub_804C44();
    void __stdcall sub_804C58(void*, void*);
    void __stdcall sub_804C8C(void*);
}

extern float g_819778;

struct AdornRbxGfx {
    char pad0[4];
    void* field4;
    void method(void* a, void* b);
};

void AdornRbxGfx::method(void* a, void* b)
{
    SharedPtr sp;
    sp.p = 0;
    sp.q = 0;
    sp.r = 0;

    void* vtable = *(void**)a;
    void (*fn)(void*, SharedPtr*, void*) = *(void (**)(void*, SharedPtr*, void*))((char*)vtable + 0x18);
    fn(a, &sp, field4);

    if (sp.p != 0) {
        if (InterlockedDecrement((long*)((char*)sp.p + 4)) != 0) {
            GImage* g = (GImage*)sp.p;
            g->release();
            if (sp.p != 0) {
                void** vt = *(void***)sp.p;
                void (*f2)(void*, int) = (void (*)(void*, int))vt[0];
                f2(sp.p, 1);
            }
        }
    }

    TextureManager& tm = TextureManager::getSingleton();
    void* vt2 = *(void**)&tm;
    void* (*getTex)(void*, SharedPtr*, void*) = *(void* (**)(void*, SharedPtr*, void*))((char*)vt2 + 0x4c);
    SharedPtr texRes;
    getTex(&tm, &texRes, (char*)a + 0xc);

    TexturePtr tex(texRes);
    sub_804C58(&tex, &texRes);

    if (texRes.p != 0) {
        if (InterlockedDecrement((long*)texRes.p) == 0) {
            void** vt3 = *(void***)texRes.p;
            void (*f3)(void*) = (void (*)(void*))vt3[1];
            f3(&texRes);
        }
    }

    void* vt4 = *(void**)&tex;
    int (*getW)(void*) = *(int (**)(void*))((char*)vt4 + 0x64);
    int w = getW(&tex);
    void* vt5 = *(void**)&tex;
    int (*getH)(void*) = *(int (**)(void*))((char*)vt5 + 0x60);
    int h = getH(&tex);

    float fw = (float)w;
    if (w < 0) fw += g_819778;
    float fh = (float)h;
    if (h < 0) fh += g_819778;

    float* out = (float*)b;
    out[0] = 0.0f;
    out[1] = 0.0f;
    out[2] = fw;
    out[3] = fh;

    sub_804C8C(&tex);

    if (sp.p != 0) {
        if (InterlockedDecrement((long*)((char*)sp.p + 4)) == 0) {
            GImage* g2 = (GImage*)sp.p;
            g2->release();
            if (sp.p != 0) {
                void** vt6 = *(void***)sp.p;
                void (*f4)(void*, int) = (void (*)(void*, int))vt6[0];
                f4(sp.p, 1);
            }
        }
    }
}
