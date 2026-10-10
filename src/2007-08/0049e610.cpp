// from server: 29% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refs;
    volatile long weakRefs;
    void Release() {
        if (_InterlockedExchangeAdd(&refs, -1) == 1) {
            void** vt = *(void***)this;
            ((void (__thiscall*)(void*))vt[1])(this);
            if (_InterlockedExchangeAdd(&weakRefs, -1) == 1) {
                void** vt2 = *(void***)this;
                ((void (__thiscall*)(void*))vt2[2])(this);
            }
        }
    }
};

struct S_0049e610 {
    char pad[0x11c];
    RefCounted* m_11c;
    void method(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);
};

extern "C" void* __cdecl func_0062fef6(unsigned int);
extern "C" void __cdecl func_0062fc62(void*);
extern "C" void __cdecl func_0049d320(void*, void*, void*);
extern "C" void* __cdecl func_0049d670(void*, void*);
extern "C" void __cdecl func_0049dd50(void*);
extern "C" void __cdecl func_005713d0(void*);
extern "C" void __cdecl func_00572440(void*, void*, void*);
extern "C" void __cdecl func_0077e69c(void*, void*);
extern "C" void __cdecl func_0077e6ac(void*);

void S_0049e610::method(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15)
{
    char buf1[0x48];
    char buf2[0x1c];
    void* obj = func_0062fef6(0x14);
    if (obj != 0) {
        func_0077e69c(buf2, &a1);
        func_0077e69c(buf2, &a2);
        void* r = func_0049d670(buf1, this);
        *(void**)buf2 = *(void**)r;
        void* p = *(void**)((char*)r + 4);
        *(void**)(buf2 + 4) = p;
        if (p != 0) {
            _InterlockedExchangeAdd((volatile long*)((char*)p + 8), 1);
        }
        func_0049d320(buf1, buf2, (void*)0x49e020);
        func_0049dd50(buf1);
        func_00572440(obj, (void*)0x79ca78, &a3);
    } else {
        obj = 0;
    }

    RefCounted* old = m_11c;
    m_11c = (RefCounted*)obj;
    if (old != 0) {
        old->Release();
        func_0062fc62(old);
    }

    func_0077e6ac(buf1);
    func_0077e6ac(buf2);
}
