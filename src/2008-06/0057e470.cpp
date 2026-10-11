// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
};

struct Elem {
    void* ptr;
    RefCounted* ref;
};

typedef void (__cdecl *Callback)(Elem);

void __cdecl ForEach(Elem* begin, Elem* end, Callback cb)
{
    if (begin == end)
        return;
    do {
        Elem tmp;
        tmp.ptr = begin->ptr;
        tmp.ref = begin->ref;
        if (tmp.ref)
            _InterlockedExchangeAdd(&tmp.ref->refcount, 1);
        cb(tmp);
        ++begin;
    } while (begin != end);
}
