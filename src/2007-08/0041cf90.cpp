// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl func_00402a60(void*);
extern "C" void* __cdecl func_00630d36(void*, const char*, const char*, int, int);

struct S_func_0041cf90 {
    void* m_ptr;
    void* m_ref;
    void* construct(void* arg1, void* arg2);
};

void* S_func_0041cf90::construct(void* arg1, void* arg2)
{
    void* p = func_00630d36(*(void**)arg1, (const char*)0x882014, (const char*)0x881f4c, 0, 0);
    m_ptr = p;
    void* r = *(void**)((char*)arg1 + 4);
    m_ref = r;
    if (r != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)r + 4), 1);
    }
    if (m_ptr == 0) {
        void* tmp = 0;
        func_00402a60(&tmp);
    }
    return this;
}
