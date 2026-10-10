// from server: 72% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl memcpy_s(void*, unsigned int, const void*, unsigned int);

struct RefCounted {
    void* vptr;
    int refcount;
};

struct SharedPtr {
    void* ptr;
    int* refcount;
};

struct Inner {
    void* vptr;
    int refcount;
};

struct Outer {
    Inner* ptr;
    int refcount;
};

struct S {
    void* field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    void* method();
};

void* S::method()
{
    Inner* p = *(Inner**)this;
    void* (__thiscall *fn)(Inner*) = *(void* (__thiscall **)(Inner*))(*(void***)p);
    void* result = ((void* (__thiscall *)(Inner*))fn)(p);

    if (*(int*)((char*)this + 0xc) >= 0 && result == *(void**)this) {
        _InterlockedExchangeAdd((volatile long*)((char*)this + 0xc), 1);
        return this;
    }

    void* p4 = *(void**)((char*)this + 4);
    void* (__thiscall *fn2)(void*, void*, int) = *(void* (__thiscall **)(void*, void*, int))(*(void***)result);
    void* r = ((void* (__thiscall *)(void*, void*, int))fn2)(result, p4, 1);
    if (r == 0) {
        extern void __cdecl fail();
        fail();
    }
    *(void**)((char*)r + 4) = *(void**)((char*)this + 4);
    int n = *(int*)((char*)this + 4) + 1;
    memcpy_s((char*)r + 0x10, n, (char*)this + 0x10, n);
    return r;
}
