// from server: 60% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CRobloxModule {
    void __cdecl method_44a270(void* arg);
};

void CRobloxModule::method_44a270(void* arg) {
    struct Local {
        int a;
        int b;
    };
    Local local;
    int* p = (int*)arg;
    local.a = p[1];
    int v = p[2];
    local.b = v;
    if (v != 0) {
        _InterlockedExchangeAdd((volatile long*)(v + 4), 1);
    }
    typedef void (__thiscall *Fn)(void*, Local*);
    Fn fn = (Fn)p[0];
    fn(this, &local);
}
