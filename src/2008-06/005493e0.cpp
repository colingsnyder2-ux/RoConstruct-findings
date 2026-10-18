// from server: 29% by atomic.potato
struct S0x9738f0 { char pad[4]; int m_x; int f(); };
struct S0x9738b8 { char pad[4]; };
struct S0x973934 { char pad[4]; };
struct S0x9738fc { char pad[4]; };

int S0x9738f0::f() { return m_x; }

typedef int (__thiscall *FnPtr_0x804cac)(S0x9738b8*);
typedef int (__thiscall *FnPtr_0x804ca0)(S0x9738b8*, int);
typedef void (__thiscall *FnPtr_0x804ca4)(void*);
typedef int (__thiscall *FnPtr_0x804cb4)(S0x9738b8*, const char*, int, int);
typedef int (__thiscall *FnPtr_0x804ca8)(int);
typedef int (__stdcall *FnPtr_0x802458)(void*, const char*);
typedef int (__stdcall *FnPtr_0x8024a8)(void*, int);
typedef int (__stdcall *FnPtr_0x8023e4)(void*, int);
typedef void (__thiscall *FnPtr_0x802468)(void*);
typedef int (__stdcall *FnPtr_0x804e74)(int);
typedef void (__thiscall *FnPtr_0x804e78)(int);

extern FnPtr_0x804cac pfn_0x804cac;
extern FnPtr_0x804ca0 pfn_0x804ca0;
extern FnPtr_0x804ca4 pfn_0x804ca4;
extern FnPtr_0x804cb4 pfn_0x804cb4;
extern FnPtr_0x804ca8 pfn_0x804ca8;
extern FnPtr_0x802458 pfn_0x802458;
extern FnPtr_0x8024a8 pfn_0x8024a8;
extern FnPtr_0x8023e4 pfn_0x8023e4;
extern FnPtr_0x802468 pfn_0x802468;
extern FnPtr_0x804e74 pfn_0x804e74;
extern FnPtr_0x804e78 pfn_0x804e78;

typedef int (__thiscall *FnPtr_0x4dc3c0)(S0x973934*, int);
typedef int (__thiscall *FnPtr_0x518b80)(S0x9738fc*, int);
typedef int (__thiscall *FnPtr_0x518b80b)(S0x9738f0*, int);
typedef void (__thiscall *FnPtr_0x679e70)(void*, int, int, int, int, int, int);
typedef int (__thiscall *FnPtr_0x67bcc0)(void*, void*, const char*, const char*, int, int, int, int, int);

extern FnPtr_0x4dc3c0 pfn_0x4dc3c0;
extern FnPtr_0x518b80 pfn_0x518b80;
extern FnPtr_0x518b80b pfn_0x518b80b;
extern FnPtr_0x679e70 pfn_0x679e70;
extern FnPtr_0x67bcc0 pfn_0x67bcc0;

extern unsigned char g_0x942ebc;

struct S_func_005493e0 {
    char pad[4];
    void f();
};

void S_func_005493e0::f() {
    S0x9738f0* o1 = (S0x9738f0*)0x9738f0;
    S0x9738b8* o2 = (S0x9738b8*)0x9738b8;
    S0x973934* o3 = (S0x973934*)0x973934;
    S0x9738fc* o4 = (S0x9738fc*)0x9738fc;

    if (!g_0x942ebc) goto end;
    if (!o1->f()) goto end;
    if (pfn_0x804cac(o2)) {
        if (!pfn_0x804cac(o2)) goto end;
        int a1 = pfn_0x4dc3c0(o3, 0);
        int a2 = pfn_0x518b80(o4, 0);
        int a3 = o1->f();
        int a4 = pfn_0x518b80b(o1, 0);
        int r1 = pfn_0x67bcc0((void*)this, (void*)(char*)0, (const char*)0x82cf4c, (const char*)0x82cf54, a4, a3, a2, a1, 0);
        pfn_0x804ca0(o2, r1);
        int v1 = pfn_0x804cb4(o2, (const char*)0x82cf5c, 2, 0);
        int v2 = pfn_0x804ca8(v1);
        int v3 = pfn_0x802458((void*)(char*)0, (const char*)0x82cf60);
        int v4 = pfn_0x8024a8((void*)(char*)0, v3);
        int v5 = pfn_0x8023e4((void*)(char*)0, v4);
        int v6 = pfn_0x804e74(v5);
        pfn_0x804e78(v6);
        pfn_0x802468((void*)(char*)0);
        pfn_0x802468((void*)(char*)0);
    } else {
        int a1 = pfn_0x4dc3c0(o3, 0);
        int a2 = pfn_0x518b80(o4, 0);
        int a3 = o1->f();
        int a4 = pfn_0x518b80b(o1, 0);
        pfn_0x679e70((void*)this, 0x9738b8, a4, 0, a3, a2, a1);
        g_0x942ebc = 0;
    }
end:
    return;
}
