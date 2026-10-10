// from server: 23% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct GuiDrawImage {
    char pad0[0x20];
};

struct UnifiedWidget {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};

struct UnifiedImageWidget : UnifiedWidget {
    GuiDrawImage guiImageDraw;
    char pad_str[0x1c];
    unsigned imageState;
    UnifiedImageWidget(const char* imageName, int state);
};

extern "C" void __cdecl func_005d65c0(void* a, void* b);
extern "C" void* __cdecl func_005d6be0(void* a);
extern "C" void __cdecl func_005d56f0(void* a);
extern "C" void* __cdecl func_00736ed0();

extern "C" void __stdcall func_0077e698(void* a, const char* b);
extern "C" void __stdcall func_0077e6ac(void* a);

extern const char str_007bbd18[];

UnifiedImageWidget::UnifiedImageWidget(const char* imageName, int state)
{
    float* v = (float*)func_00736ed0();
    float f0 = v[0];
    float f1 = v[1];
    float f2 = v[2];
    float f3 = v[3];

    struct {
        int a;
        int b;
        short c;
        short d;
        int e;
        float f0;
        float f1;
        float f2;
        float f3;
    } local;
    local.a = 3;
    local.b = 0;
    local.c = 0x3c;
    local.d = 0xc8;
    local.e = 1;
    local.f0 = f0;
    local.f1 = f1;
    local.f2 = f2;
    local.f3 = f3;

    func_005d65c0(&local, &local);

    char buf[0x1c];
    func_0077e698(buf, str_007bbd18);

    void* vtbl = *(void**)this;
    void (*fn)(void*, void*) = *(void (**)(void*, void*))((char*)vtbl + 8);
    fn(this, buf);

    func_0077e6ac(buf);

    void* tmp = func_005d6be0(&buf);
    void* obj = *(void**)tmp;
    if (obj) {
        long* ref = (long*)((char*)obj + 4);
        _InterlockedExchangeAdd(ref, 1);
    }

    func_005d56f0(obj);

    if (obj) {
        long old = _InterlockedExchangeAdd((long*)((char*)obj + 4), -1);
        if (old == 1) {
            void (*d)(void*) = *(void (**)(void*))((char*)(*(void**)obj) + 4);
            d(obj);
            long old2 = _InterlockedExchangeAdd((long*)((char*)obj + 8), -1);
            if (old2 == 1) {
                void (*d2)(void*) = *(void (**)(void*))((char*)(*(void**)obj) + 8);
                d2(obj);
            }
        }
    }

    this->imageState = state;
}
