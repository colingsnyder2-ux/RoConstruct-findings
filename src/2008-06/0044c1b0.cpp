// from server: 52% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    char pad[0x1c];
    String();
    ~String();
    String& operator+=(const char*);
    const char* c_str() const;
};

struct RefCounted {
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    volatile long ref1;
    volatile long ref2;
};

struct Inner {
    void* p0;
    char pad[8];
    int i0;
    int i1;
    int i2;
};

struct Target {
    char pad[0x28];
    char b28, b29, b2a, b2b, b2c, b2d, b2e, b2f;
    Inner inner;
    void ctor();
};

extern "C" void __cdecl sub_6a1262();
extern "C" void* __cdecl sub_6a0920(int);
extern "C" void* __cdecl sub_569620(void*);
extern "C" void __cdecl sub_5693a0(void*, int, void*);

extern int* g_802820;
extern int* g_802824;
extern char g_812e58;
extern void* g_816a44;

extern "C" void __stdcall mfc_802460(void*);
extern "C" void __stdcall mfc_802448(void*, const char*);
extern "C" void* __stdcall mfc_802464(void*);
extern "C" void __stdcall mfc_802468(void*);

struct CRobloxModule {
    void f();
};

void CRobloxModule::f()
{
    sub_6a1262();
    *(void**)this = &g_816a44;
    char* base = (char*)this;
    base[0x28] = 0;
    base[0x29] = 0;
    base[0x2a] = 0;
    base[0x2b] = 0;
    base[0x2c] = 0;
    base[0x2d] = 0;
    base[0x2e] = 0;
    base[0x2f] = 0;
    Inner* inner = (Inner*)(base + 0x30);
    void* r = sub_6a0920(4);
    if (r != 0) {
        *(void**)r = inner;
    } else {
        r = 0;
    }
    inner->p0 = r;
    inner->i0 = 0;
    inner->i1 = 0;
    inner->i2 = 0;

    if (*g_802820 > 0) {
        String s;
        int i = 0;
        if (*g_802820 > 0) {
            do {
                if (i != 0) {
                    s += &g_812e58;
                }
                s += *(const char**)(*g_802824 + i * 4);
                i++;
            } while (i < *g_802820);
        }
        void* tmp = sub_569620(&s);
        RefCounted* rc = *(RefCounted**)tmp;
        const char* cs = s.c_str();
        sub_5693a0(rc, 1, (void*)cs);
        if (rc != 0) {
            if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1) {
                rc->slot2();
                if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1) {
                    rc->slot3();
                }
            }
        }
        mfc_802468(&s);
    }
}
