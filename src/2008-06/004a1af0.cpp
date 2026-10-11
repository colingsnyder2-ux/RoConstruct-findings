// from server: 66% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
};

struct Elem {
    void* ptr;
    RefCounted* ref;
};

typedef bool (__stdcall *Pred)(Elem*);

int CountIf(Elem* first, Elem* last, Pred pred)
{
    int count = 0;
    while (first != last) {
        Elem tmp;
        tmp.ptr = first->ptr;
        tmp.ref = first->ref;
        if (tmp.ref) {
            _InterlockedExchangeAdd(&tmp.ref->refcount, 1);
        }
        if (pred(&tmp)) {
            ++count;
        }
        ++first;
    }
    return count;
}
