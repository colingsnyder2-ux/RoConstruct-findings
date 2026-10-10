// from server: 69% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
};

struct Iter {
    RefCounted* ptr;
    void* extra;
};

struct Result {
    void* a;
    void* b;
};

struct ClearBackpack {
    Result clear(Iter* first, Iter* last, void (__cdecl *fn)(Iter*));
};

Result ClearBackpack::clear(Iter* first, Iter* last, void (__cdecl *fn)(Iter*)) {
    Iter tmp;
    while (first != last) {
        tmp.ptr = first->ptr;
        tmp.extra = first->extra;
        if (tmp.extra) {
            _InterlockedExchangeAdd((volatile long*)((char*)tmp.extra + 4), 1);
        }
        fn(&tmp);
        first++;
    }
    Result r;
    r.a = (void*)fn;
    r.b = *(void**)((char*)&last + 4);
    return r;
}
