// from server: 26% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S {
    void f();
};

extern void g_405d80();
extern void g_411b40();
extern void g_4663c0();
extern void g_5773c0();
extern void g_5e5a80();
extern void g_718a20();

void S::f()
{
    *(int*)((char*)this + 0) = 0x81bbc4;
    *(int*)((char*)this + 0x54) = 0x81bbb0;
    *(int*)((char*)this + 0x190) = 0x81bba8;
    *(int*)((char*)this + 0x194) = 0x81bb90;

    int v1 = *(int*)((char*)this + 0x1b8);
    int v2 = *(int*)((char*)this + 0x1bc);

    if (v2 != 0) {
        _InterlockedExchangeAdd((volatile long*)(v2 + 4), 1);
    }

    g_411b40();

    int v3 = *(int*)((char*)this + 0x1c0);
    if (v3 != 0) {
        g_5e5a80();
    }

    g_5773c0();

    int v4 = *(int*)((char*)this + 0x1c4);
    if (v4 != 0) {
        if (_InterlockedExchangeAdd((volatile long*)(v4 + 4), -1) == 1) {
            (*(void(**)(int))(*(int*)v4 + 4))(v4);
            if (_InterlockedExchangeAdd((volatile long*)(v4 + 8), -1) == 1) {
                (*(void(**)(int))(*(int*)v4 + 8))(v4);
            }
        }
    }

    int v5 = *(int*)((char*)this + 0x1bc);
    if (v5 != 0) {
        if (_InterlockedExchangeAdd((volatile long*)(v5 + 4), -1) == 1) {
            (*(void(**)(int))(*(int*)v5 + 4))(v5);
            if (_InterlockedExchangeAdd((volatile long*)(v5 + 8), -1) == 1) {
                (*(void(**)(int))(*(int*)v5 + 8))(v5);
            }
        }
    }

    g_4663c0();
    g_405d80();
    g_718a20();
}
