// from server: 50% by atomic.potato
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

struct SharedPtr {
    void* ptr;
    void* ref;
};

struct RefCounted {
    virtual ~RefCounted();
    virtual void destroy();
    virtual void dealloc();
};

struct UnifiedImageWidget {
    void* field0;
    void* field4;
    char pad8[0x30];
    std_string imageName;
    unsigned imageState;
    SharedPtr result;

    SharedPtr* construct(const std_string& name, int state, int arg3);
};

extern "C" void* __cdecl getVector3();
extern "C" void __cdecl func601db0(void*);
extern "C" SharedPtr* __cdecl func602650(SharedPtr*, void*, int, int);
extern "C" SharedPtr* __cdecl func6026e0(SharedPtr*, float, float);
extern "C" void __cdecl func600f10(RefCounted*);

extern "C" void __stdcall stringCtor(std_string*, const char*);
extern void stringDtor(std_string*);

extern float g_81ccbc;

SharedPtr* __thiscall UnifiedImageWidget::construct(const std_string& name, int state, int arg3)
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

    void* obj = field0;
    void** vt = *(void***)obj;
    void (*fn)(void*, std_string*) = (void (*)(void*, std_string*))vt[1];
    fn(obj, &str);

    destroyString(&str);

    SharedPtr r1;
    func602650(&r1, field0, arg3, 1);
    RefCounted* p1b = (RefCounted*)r1.ref;
    if (p1b) {
        _InterlockedExchangeAdd((volatile long*)((char*)p1b + 4), 1);
    }
    func600f10((RefCounted*)r1.ptr);
    RefCounted* old = (RefCounted*)r1.ref;
    if (old) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old + 4), -1) == 1) {
            old->destroy();
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                old->dealloc();
            }
        }
    }

    float g = g_81ccbc;
    SharedPtr r2;
    func6026e0(&r2, g, g);
    RefCounted* p2b = (RefCounted*)r2.ref;
    if (p2b) {
        _InterlockedExchangeAdd((volatile long*)((char*)p2b + 4), 1);
    }
    func600f10((RefCounted*)r2.ptr);
    RefCounted* old2 = (RefCounted*)r2.ref;
    if (old2) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old2 + 4), -1) == 1) {
            old2->destroy();
            if (_InterlockedExchangeAdd((volatile long*)((char*)old2 + 8), -1) == 1) {
                old2->dealloc();
            }
        }
    }

    SharedPtr r3;
    func602650(&r3, field0, arg3, 2);
    RefCounted* p3b = (RefCounted*)r3.ref;
    if (p3b) {
        _InterlockedExchangeAdd((volatile long*)((char*)p3b + 4), 1);
    }
    func600f10((RefCounted*)r3.ptr);
    RefCounted* old3 = (RefCounted*)r3.ref;
    if (old3) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old3 + 4), -1) == 1) {
            old3->destroy();
            if (_InterlockedExchangeAdd((volatile long*)((char*)old3 + 8), -1) == 1) {
                old3->dealloc();
            }
        }
    }

    result.ptr = r1.ptr;
    result.ref = r1.ref;
    RefCounted* rb = (RefCounted*)result.ref;
    if (rb) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)rb + 4), -1) == 1) {
            rb->destroy();
            if (_InterlockedExchangeAdd((volatile long*)((char*)rb + 8), -1) == 1) {
                rb->dealloc();
            }
        }
    }

    return &result;
}
