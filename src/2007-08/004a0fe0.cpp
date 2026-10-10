// from server: 51% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct Element {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct Container {
    Element* begin;
    Element* end;
    Element* cap;
};

void __stdcall assign_range(Container* dest, Container* src);

void __stdcall assign_range(Container* dest, Container* src)
{
    Element* d = dest->begin;
    Element* s = src->begin;
    if (d == s)
        return;
    Element* dend = dest->end;
    Element* send = src->end;
    while (s != send) {
        s -= 1;
        d -= 1;
        d->vptr = s->vptr;
        d->refCount = s->refCount;
        Element* newWeak = s->weakCount ? (Element*)s->weakCount : 0;
        if (newWeak) {
            _InterlockedExchangeAdd(&((RefCounted*)newWeak)->refCount, 1);
        }
        Element* oldWeak = (Element*)d->weakCount;
        if (oldWeak) {
            if (_InterlockedExchangeAdd(&((RefCounted*)oldWeak)->refCount, -1) == 1) {
                void (__stdcall *dtor)(void*) = *(void (__stdcall **)(void*))((*(void***)oldWeak)[1]);
                dtor(oldWeak);
                if (_InterlockedExchangeAdd(&((RefCounted*)oldWeak)->weakCount, -1) == 1) {
                    void (__stdcall *del)(void*) = *(void (__stdcall **)(void*))((*(void***)oldWeak)[2]);
                    del(oldWeak);
                }
            }
        }
        d->weakCount = (volatile long)newWeak;
    }
    dest->begin = d;
}
