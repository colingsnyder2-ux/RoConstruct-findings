// from server: 21% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall G1_func_0098b6f0(void*);
extern "C" void __stdcall G1_func_0098b6e4(void*);

struct S {
    void* field0;
    char pad4[4];
    void* field8;
    void method_740ce0(void*, void*);
    void f(void*, void*, void*, void*, void*, void*, void*, void*, void*);
};

void S::f(void* a1, void* a2, void* a3, void* a4, void* a5, void* a6, void* a7, void* a8, void* a9)
{
    void* local = a1;
    void* local2 = a2;
    if (a3 != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)a3 + 4), 1);
    }
    method_740ce0(a1, a2);
    G1_func_0098b6f0(&local);
    if (local != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)local + 4), -1) == 1) {
            (*(void(__thiscall**)(void*))local)(local);
            if (_InterlockedExchangeAdd((volatile long*)((char*)local + 8), -1) == 1) {
                (*(void(__thiscall**)(void*))(*(void**)local))(local);
            }
        }
    }
    G1_func_0098b6e4(&local);
}
