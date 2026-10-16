// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* (__cdecl *allocate)(unsigned int);
inline void* __cdecl operator new(unsigned int size) { return allocate(size); }
void __cdecl operator delete(void*);

struct std_string {
    char storage[28];
    std_string(const char*);
    ~std_string();
};

extern "C" void __stdcall constructString(std_string*, const char*);
extern "C" void __stdcall destroyString(std_string*);

struct Product168 {
    unsigned char storage[0x168];
    Product168(void**);
};

struct Product164 {
    unsigned char storage[0x164];
    Product164(void*, void*, void*);
};

struct UnifiedImageWidget {
    char pad0[4];
    void* field4;
    char pad8[0x30];
    std_string imageName;
    unsigned imageState;

    void __thiscall construct(const std_string& name, int state, int arg3);
};

extern "C" void* __cdecl getVector3();
extern "C" void __cdecl func601db0(void*);
extern "C" void* __cdecl func602650(void*, void*, int, int);
extern "C" void* __cdecl func6026e0(void*, float, float);
extern "C" void __cdecl func600f10(void*);
extern "C" void __cdecl func7baf10();

extern "C" void* __stdcall func802458();
extern "C" void* __stdcall func802468();

extern float g_81ccbc;

void __thiscall UnifiedImageWidget::construct(const std_string& name, int state, int arg3)
{
    void* v = getVector3();
    float f0 = *(float*)((char*)v + 0);
    float f1 = *(float*)((char*)v + 4);
    float f2 = *(float*)((char*)v + 8);
    float f3 = *(float*)((char*)v + 12);

    struct { int a; int b; int c; int d; float e; float f; float g; float h; } local;
    local.a = 3;
    local.b = 0;
    local.c = state;
    local.d = 1;
    local.e = f3;
    local.f = f1;
    local.g = f2;
    local.h = f0;

    func601db0(&local);

    std_string str("ControlHud");

    void* obj = *(void**)this;
    void** vt = *(void***)obj;
    void (*fn)(void*, std_string*) = (void (*)(void*, std_string*))vt[1];
    fn(obj, &str);

    destroyString(&str);

    void* self = *(void**)this;
    void* r1 = func602650(&str, self, arg3, 1);
    void* p1 = *(void**)r1;
    void* p1b = *(void**)((char*)r1 + 4);
    if (p1b) {
        _InterlockedExchangeAdd((volatile long*)((char*)p1b + 4), 1);
    }
    func600f10(*(void**)((char*)&str + 0));
    void* old = *(void**)((char*)&str + 4);
    if (old) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old + 4), -1) == 1) {
            void** ovt = *(void***)old;
            ((void (*)(void*))ovt[1])(old);
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                void** ovt2 = *(void***)old;
                ((void (*)(void*))ovt2[2])(old);
            }
        }
    }

    float g = g_81ccbc;
    void* r2 = func6026e0(&str, g, g);
    void* p2 = *(void**)r2;
    void* p2b = *(void**)((char*)r2 + 4);
    if (p2b) {
        _InterlockedExchangeAdd((volatile long*)((char*)p2b + 4), 1);
    }
    func600f10(*(void**)((char*)&str + 0));
    void* old2 = *(void**)((char*)&str + 4);
    if (old2) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old2 + 4), -1) == 1) {
            void** ovt = *(void***)old2;
            ((void (*)(void*))ovt[1])(old2);
            if (_InterlockedExchangeAdd((volatile long*)((char*)old2 + 8), -1) == 1) {
                void** ovt2 = *(void***)old2;
                ((void (*)(void*))ovt2[2])(old2);
            }
        }
    }

    void* self2 = *(void**)this;
    void* r3 = func602650(&str, self2, arg3, 2);
    void* p3 = *(void**)r3;
    void* p3b = *(void**)((char*)r3 + 4);
    if (p3b) {
        _InterlockedExchangeAdd((volatile long*)((char*)p3b + 4), 1);
    }
    func600f10(*(void**)((char*)&str + 0));
    void* old3 = *(void**)((char*)&str + 4);
    if (old3) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old3 + 4), -1) == 1) {
            void** ovt = *(void***)old3;
            ((void (*)(void*))ovt[1])(old3);
            if (_InterlockedExchangeAdd((volatile long*)((char*)old3 + 8), -1) == 1) {
                void** ovt2 = *(void***)old3;
                ((void (*)(void*))ovt2[2])(old3);
            }
        }
    }

    void* dst = *(void**)((char*)&str + 0x40);
    *(void**)dst = p1;
    *(void**)((char*)dst + 4) = p1b;
    if (p1b) {
        _InterlockedExchangeAdd((volatile long*)((char*)p1b + 4), 1);
    }
    if (p1b) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p1b + 4), -1) == 1) {
            void** ovt = *(void***)p1b;
            ((void (*)(void*))ovt[1])(p1b);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p1b + 8), -1) == 1) {
                void** ovt2 = *(void***)p1b;
                ((void (*)(void*))ovt2[2])(p1b);
            }
        }
    }
}
