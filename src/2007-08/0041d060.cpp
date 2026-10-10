// from server: 1% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCounted {
    void AddRef();
    void Release();
};

struct InsertDecal {
    int f();
};

int InsertDecal::f()
{
    return 0;
}
