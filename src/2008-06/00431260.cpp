// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S_func_0044de00 {
    char pad0[384];
    int m_x;
    int f();
};

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Control* ctrl;
};

struct RefCounted {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Obj {
    char pad0[0x1c8];
};

struct Obj2 {
    char pad0[0x1f0];
};

struct S_func_00430e10 {
    void f(int);
};

struct S_func_004306c0 {
    void* f(void*);
};

struct S_func_005b62a0 {
    void* f(void*);
};

struct S_func_00583380 {
    void* f();
};

struct S_func_005773c0 {
    void f();
};

struct S_func_00411b40 {
    void f();
};

struct S_func_00431260 {
    int f(int, int);
};

extern S_func_00430e10 g_976fa0;
extern int g_976fc0;

int S_func_00431260::f(int a, int b) {
    S_func_0044de00* p = *(S_func_0044de00**)((char*)&a + 0xc);
    unsigned char c0 = (unsigned char)p->f();
    unsigned char c1 = (unsigned char)(p->f() >> 8);
    unsigned char c2 = (unsigned char)(p->f() >> 16);
    unsigned char color[3];
    color[0] = c0;
    color[1] = c1;
    color[2] = c2;
    int* r = (int*)S_func_005b62a0().f(color);
    int v = *r;
    if (g_976fc0 != v) {
        g_976fc0 = v;
        g_976fa0.f(v);
    }
    void* q = S_func_004306c0().f(&a);
    bool bl = (*(int*)q != 0);
    RefCounted* rc = *(RefCounted**)((char*)&a + 8);
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->strong, -1) == 1) {
            rc->dispose();
            if (_InterlockedExchangeAdd(&rc->weak, -1) == 1) {
                rc->destroy();
            }
        }
    }
    if (!bl) {
        *(int*)((char*)&a + 0x44) = 1;
        return 1;
    }
    void* q2 = S_func_004306c0().f(&a);
    int* src = (int*)q2;
    int v0 = src[0];
    int v1 = src[1];
    *(int*)((char*)&a + 0x40) = 0;
    *(int*)((char*)&a + 0x48) = (int)&a;
    *(int*)((char*)&a + 0x4) = v0;
    *(int*)((char*)&a + 0x8) = v1;
    if (v1) {
        _InterlockedExchangeAdd((volatile long*)(v1 + 4), 1);
    }
    S_func_00411b40().f();
    RefCounted* rc2 = *(RefCounted**)((char*)&a + 0x10);
    *(unsigned char*)((char*)&a + 0x38) = 2;
    if (rc2) {
        if (_InterlockedExchangeAdd(&rc2->strong, -1) == 1) {
            rc2->dispose();
            if (_InterlockedExchangeAdd(&rc2->weak, -1) == 1) {
                rc2->destroy();
            }
        }
    }
    char buf[0x1c];
    S_func_00583380* str = (S_func_00583380*)buf;
    str->f();
    void* q3 = S_func_004306c0().f(&a);
    int* o = (int*)q3;
    Obj* obj = (Obj*)(*o);
    void* res = S_func_00583380().f();
    *(unsigned char*)((char*)&a + 0x54) = 3;
    RefCounted* rc3 = *(RefCounted**)((char*)&a + 0x18);
    *(unsigned char*)((char*)&a + 0x38) = 2;
    if (rc3) {
        if (_InterlockedExchangeAdd(&rc3->strong, -1) == 1) {
            rc3->dispose();
            if (_InterlockedExchangeAdd(&rc3->weak, -1) == 1) {
                rc3->destroy();
            }
        }
    }
    void* q4 = S_func_004306c0().f(&a);
    int* o2 = (int*)q4;
    int* obj2 = (int*)(*o2);
    *(unsigned char*)((char*)&a + 0x38) = 4;
    int* arg;
    if (obj2) {
        arg = (int*)((char*)obj2 + 0x1f0);
    } else {
        arg = 0;
    }
    void** vt = *(void***)res;
    void (*fn)(void*, int*) = (void (*)(void*, int*))vt[4];
    fn(res, arg);
    RefCounted* rc4 = *(RefCounted**)((char*)&a + 0x20);
    *(unsigned char*)((char*)&a + 0x38) = 2;
    if (rc4) {
        if (_InterlockedExchangeAdd(&rc4->strong, -1) == 1) {
            rc4->dispose();
            if (_InterlockedExchangeAdd(&rc4->weak, -1) == 1) {
                rc4->destroy();
            }
        }
    }
    S_func_005773c0().f();
    *(int*)((char*)&a + 0x44) = 1;
    return 1;
}
