// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall G1_00802468();
extern "C" void __stdcall G1_0080245c();

extern "C" void __cdecl G1_005bd600();
extern "C" void __cdecl G1_00557330(void*, void*);
extern "C" void __cdecl G1_005bb2c0();
extern "C" void __cdecl G1_00448360();
extern "C" void __cdecl G1_0055c500();
extern "C" void __cdecl G1_005bd360();
extern "C" void __cdecl G1_0055a8f0();
extern "C" void __cdecl G1_005baa70();
extern "C" void __cdecl G1_004025b0();

struct S {
    void f(int, int, int, int, int, int, int, int);
};

void S::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    char buf[0x2c];
    int v;
    void* p;
    void* q;
    void* r;
    void* s;
    void* t;
    void* u;
    void* w;
    void* x;
    void* y;
    void* z;

    v = 0;
    G1_005bd600();
    p = *(void**)(buf + 4);
    G1_00557330((void*)0x5bb320, (void*)0x977524);
    G1_005bb2c0();
    G1_00448360();
    (*(void(__thiscall**)(void*, void*))(*(int*)p + 4))(p, q);
    G1_00802468();
    G1_0055c500();
    G1_005bd360();
    G1_00802468();
    G1_0055a8f0();
    G1_005baa70();
    G1_004025b0();
    if (r != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)r + 4), -1) == 1) {
            (*(void(__thiscall**)(void*))(*(int*)r + 4))(r);
            if (_InterlockedExchangeAdd((volatile long*)((char*)r + 8), -1) == 1) {
                (*(void(__thiscall**)(void*))(*(int*)r + 8))(r);
            }
        }
    }
    G1_00802468();
}
