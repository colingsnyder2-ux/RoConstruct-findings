// from server: 24% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct GuiDrawImage {
    char pad[0x20];
};

struct UnifiedWidget {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
};

struct UnifiedImageWidget : UnifiedWidget {
    GuiDrawImage guiImageDraw;
    void* imageName_repr[4];
    unsigned imageState;

    UnifiedImageWidget(const void* imageName, int imageState);
};

extern "C" void* __cdecl sub_736ED0();
extern "C" void __cdecl sub_5D65C0(void*, void*);
extern "C" void* __cdecl sub_5D6E70(void*, void*, int, int);
extern "C" void* __cdecl sub_5D6F00(void*, float, float);
extern "C" void __cdecl sub_5D56F0(void*);
extern "C" void __cdecl sub_77E698(void*, const char*);
extern "C" void __cdecl sub_77E6AC(void*);

extern float g_7A836C;
extern const char g_7BBD30[];

UnifiedImageWidget::UnifiedImageWidget(const void* imageName, int imageState)
{
    void* p = sub_736ED0();
    float f0 = ((float*)p)[0];
    float f1 = ((float*)p)[1];
    float f2 = ((float*)p)[2];
    float f3 = ((float*)p)[3];

    struct Local {
        int a;
        int b;
        int c;
        int d;
        float e;
        float f;
        float g;
        float h;
    } local;
    local.a = 3;
    local.b = 0;
    local.c = *(int*)((char*)&local + 0x10);
    local.d = 1;
    local.e = f3;
    local.f = f1;
    local.g = f2;
    local.h = f0;

    sub_5D65C0(&local, (char*)&local + 0x20);

    void* str = (char*)&local + 0x10;
    sub_77E698(str, g_7BBD30);

    void* vtable = *(void**)this;
    void (*fn)(void*, void*) = *(void (**)(void*, void*))((char*)vtable + 8);
    fn(this, str);

    sub_77E6AC(str);

    void* tmp = sub_5D6E70((char*)&local + 0x10, (void*)this->imageName_repr[0], 1, 1);
    void* ref = *(void**)tmp;
    void* ref2 = *(void**)((char*)tmp + 4);
    *(void**)&local = ref;
    *(void**)((char*)&local + 4) = ref2;
    if (ref2) {
        _InterlockedExchangeAdd((volatile long*)((char*)ref2 + 4), 1);
    }

    sub_5D56F0((char*)&local + 0x10);

    void* old = *(void**)((char*)&local + 0x10);
    if (old) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old + 4), -1) == 1) {
            void (*d)(void*) = *(void (**)(void*))((char*)*(void**)old + 4);
            d(old);
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                void (*d2)(void*) = *(void (**)(void*))((char*)*(void**)old + 8);
                d2(old);
            }
        }
    }

    float g = g_7A836C;
    void* tmp2 = sub_5D6F00((char*)&local + 0x10, g, g);
    void* ref3 = *(void**)tmp2;
    void* ref4 = *(void**)((char*)tmp2 + 4);
    *(void**)&local = ref3;
    *(void**)((char*)&local + 4) = ref4;
    if (ref4) {
        _InterlockedExchangeAdd((volatile long*)((char*)ref4 + 4), 1);
    }

    sub_5D56F0((char*)&local + 0x10);

    void* old2 = *(void**)((char*)&local + 0x10);
    if (old2) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old2 + 4), -1) == 1) {
            void (*d)(void*) = *(void (**)(void*))((char*)*(void**)old2 + 4);
            d(old2);
            if (_InterlockedExchangeAdd((volatile long*)((char*)old2 + 8), -1) == 1) {
                void (*d2)(void*) = *(void (**)(void*))((char*)*(void**)old2 + 8);
                d2(old2);
            }
        }
    }

    void* tmp3 = sub_5D6E70((char*)&local + 0x10, (void*)this->imageName_repr[0], 2, 2);
    void* ref5 = *(void**)tmp3;
    void* ref6 = *(void**)((char*)tmp3 + 4);
    *(void**)&local = ref5;
    *(void**)((char*)&local + 4) = ref6;
    if (ref6) {
        _InterlockedExchangeAdd((volatile long*)((char*)ref6 + 4), 1);
    }

    sub_5D56F0((char*)&local + 0x10);

    void* old3 = *(void**)((char*)&local + 0x10);
    if (old3) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old3 + 4), -1) == 1) {
            void (*d)(void*) = *(void (**)(void*))((char*)*(void**)old3 + 4);
            d(old3);
            if (_InterlockedExchangeAdd((volatile long*)((char*)old3 + 8), -1) == 1) {
                void (*d2)(void*) = *(void (**)(void*))((char*)*(void**)old3 + 8);
                d2(old3);
            }
        }
    }

    void* dst = *(void**)((char*)&local + 0x20);
    *(void**)dst = *(void**)((char*)&local + 0x10);
    void* r = *(void**)((char*)&local + 0x14);
    *(void**)((char*)dst + 4) = r;
    if (r) {
        _InterlockedExchangeAdd((volatile long*)((char*)r + 4), 1);
    }

    void* old4 = *(void**)((char*)&local + 0x14);
    if (old4) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old4 + 4), -1) == 1) {
            void (*d)(void*) = *(void (**)(void*))((char*)*(void**)old4 + 4);
            d(old4);
            if (_InterlockedExchangeAdd((volatile long*)((char*)old4 + 8), -1) == 1) {
                void (*d2)(void*) = *(void (**)(void*))((char*)*(void**)old4 + 8);
                d2(old4);
            }
        }
    }
}
