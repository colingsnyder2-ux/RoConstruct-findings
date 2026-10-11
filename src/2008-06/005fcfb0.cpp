// from server: 51% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBX_Instance {
    virtual ~RBX_Instance();
    char pad[0x100];
    RBX_Instance* next;
};

struct RBX_ServiceProvider : RBX_Instance {
    RBX_ServiceProvider* finish();
};

RBX_ServiceProvider* func_005fcc80(RBX_Instance* p);

struct S_func_005fcfb0 {
    char pad0[0x168];
    char m_168[4];
    char m_16c[4];
    char pad1[0x10];
    int m_180;
    char m_184[4];
    void f(int a, int b);
};

void S_func_005fcfb0::f(int a, int b)
{
    if (a != 0) {
        ((void (__thiscall*)(S_func_005fcfb0*))0x5fc3b0)(this);
    }
    if (b != 0) {
        RBX_ServiceProvider* sp = func_005fcc80((RBX_Instance*)this);
        int* src = (int*)&sp;
        int* dst = (int*)&m_180;
        *dst = *src;
        ((void (__thiscall*)(void*, void*))0x4025b0)(&m_184, (void*)(src + 1));
        int* ref = (int*)sp;
        if (ref != 0) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)ref + 4), -1) == 1) {
                void (__thiscall* fn)(void*) = *(void (__thiscall**)(void*))(*(int*)ref + 4);
                fn(ref);
                if (_InterlockedExchangeAdd((volatile long*)((char*)ref + 8), -1) == 1) {
                    void (__thiscall* fn2)(void*) = *(void (__thiscall**)(void*))(*(int*)ref + 8);
                    fn2(ref);
                }
            }
        }
        void* p1;
        if (this != 0) {
            p1 = (void*)&m_168;
        } else {
            p1 = 0;
        }
        if (m_180 != 0) {
            ((void (__thiscall*)(void*, void*))0x4218a0)((void*)(m_180 + 0x24), p1);
        }
        void* p2;
        if (this != 0) {
            p2 = (void*)&m_16c;
        } else {
            p2 = 0;
        }
        if (m_180 != 0) {
            ((void (__thiscall*)(void*, void*))0x4218a0)((void*)(m_180 + 0x44), p2);
        }
    }
}
