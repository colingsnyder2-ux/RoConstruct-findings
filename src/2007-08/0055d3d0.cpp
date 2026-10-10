// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl operator_delete(void*);
extern "C" void __stdcall string_dtor(void*);

struct RefCounted {
    void* vptr;
    long refCount;
    long weakCount;
};

struct Holder {
    void* vptr;
    RefCounted* ptr;
};

struct S {
    int field0;
    int field4;
    void* field8;
    void clear();
};

void S::clear()
{
    int state = field4;
    if (state == 2 || state == 3) {
        Holder* h = (Holder*)field8;
        if (h != 0) {
            string_dtor(h);
            operator_delete(h);
        }
        field4 = 0;
        return;
    }
    if (state == 8) {
        Holder* h = (Holder*)field8;
        if (h != 0) {
            RefCounted* r = h->ptr;
            if (r != 0) {
                if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
                    r->vptr = r->vptr;
                    typedef void (__thiscall *Fn)(RefCounted*);
                    ((Fn)((*(void***)r)[1]))(r);
                    if (_InterlockedExchangeAdd(&r->weakCount, -1) == 1) {
                        ((Fn)((*(void***)r)[2]))(r);
                    }
                }
            }
            operator_delete(h);
        }
        field4 = 0;
        return;
    }
    field4 = 0;
}
