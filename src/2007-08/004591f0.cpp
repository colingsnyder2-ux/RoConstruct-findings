// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CRobloxWnd {
    void* vptr;
    void* field_4;
    void construct(void* a, void* b);
};

struct RefCounted {
    void* vptr;
    long refcount;
};

struct Holder {
    void* owner;
    RefCounted* ptr;
};

void CRobloxWnd::construct(void* a, void* b) {
    this->vptr = a;
    this->field_4 = 0;
    ((void (__thiscall*)(void*, void*, void*))0x458840)(&this->field_4, a, b);
    if (a != 0) {
        Holder* h = (Holder*)((char*)a + 0xa4);
        if (h != 0) {
            h->owner = a;
            RefCounted* old = (RefCounted*)this->field_4;
            if (old != 0) {
                _InterlockedExchangeAdd(&old->refcount, 1);
            }
            RefCounted* prev = h->ptr;
            if (prev != 0) {
                if (_InterlockedExchangeAdd(&prev->refcount, -1) == 1) {
                    ((void (__thiscall*)(RefCounted*))prev->vptr)(prev);
                }
            }
            h->ptr = old;
        }
    }
}
