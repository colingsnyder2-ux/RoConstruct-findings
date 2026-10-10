// from server: 18% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void (__stdcall *vtable)(void);
    volatile long refCount;
    volatile long weakRefCount;
};

struct Helper {
    void addRef();
    void release();
};

struct S_func_005d1620 {
    char pad0[0x120];
    char m_120[4];
    char m_124[4];
    char pad128[0x10];
    void* m_138;
    char m_13c[4];
    void f(void* a, void* b);
};

extern "C" void __cdecl func_005d0910(void*);
extern "C" void __cdecl func_0057aa50(void);
extern "C" void __cdecl func_005d12d0(void);
extern "C" void __cdecl func_0049d670(void);
extern "C" void __cdecl func_00402a60(void);
extern "C" void __cdecl func_00423240(void);

void S_func_005d1620::f(void* a, void* b)
{
    if (a != 0) {
        func_005d0910(a);
    }
    func_0057aa50();
    if (b != 0) {
        func_005d12d0();
        func_0049d670();
        func_00402a60();
        if (m_138 != 0) {
            func_00423240();
        }
        if (m_138 != 0) {
            func_00423240();
        }
    }
}
