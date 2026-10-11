// from server: 31% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
};

struct ClearBackpack {
    void clear(void (*fn)(RefCounted*), RefCounted* begin, RefCounted* end);
};

void ClearBackpack::clear(void (*fn)(RefCounted*), RefCounted* begin, RefCounted* end)
{
    if (begin == end) {
        return;
    }
    do {
        RefCounted* p = begin;
        RefCounted tmp;
        tmp.vptr = p->vptr;
        tmp.refcount = p->refcount;
        if (tmp.refcount != 0) {
            _InterlockedExchangeAdd(&tmp.refcount, 1);
        }
        fn(&tmp);
        begin = (RefCounted*)((char*)begin + 8);
    } while (begin != end);
}
