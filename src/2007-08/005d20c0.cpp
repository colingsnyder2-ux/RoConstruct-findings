// from server: 52% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct GetSetImpl {
    void* get;
    int offset;
    RefCounted* set;
    void invoke(int a, int b, int c);
};

void GetSetImpl::invoke(int a, int b, int c) {
    RefCounted* p = set;
    if (p) {
        _InterlockedExchangeAdd(&p->refcount, 1);
    }
    int off = *(int*)((char*)this + 8);
    int base = *(int*)((char*)this + 4);
    void* fn = *(void**)this;
    int vtbl = *(int*)((char*)p + 0x168);
    int delta = *(int*)(vtbl + off);
    int target = delta + base;
    char* obj = (char*)p + 0x168 + target;
    ((void (__thiscall*)(void*, int, int, int))fn)(obj, a, b, c);
    if (p) {
        if (_InterlockedExchangeAdd(&p->refcount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))*(void**)((char*)p->vptr + 4))(p);
            if (_InterlockedExchangeAdd(&p->weakrefcount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))*(void**)((char*)p->vptr + 8))(p);
            }
        }
    }
}
