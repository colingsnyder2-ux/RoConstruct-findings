// from server: 39% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
};

struct Holder {
    RefCounted* ptr;
    void addRef();
    void release();
};

struct Creator {
    void* field0;
    Holder holder;
    Creator(void* a, void* b);
};

void Holder::addRef() {
    if (ptr) {
        _InterlockedExchangeAdd(&ptr->refCount, 1);
    }
}

void Holder::release() {
    if (ptr) {
        if (_InterlockedExchangeAdd(&ptr->refCount, -1) == 1) {
            void** vt = *(void***)ptr;
            typedef void (__thiscall *Fn)(void*);
            ((Fn)vt[2])(ptr);
        }
    }
}

Creator::Creator(void* a, void* b) {
    field0 = a;
    holder.ptr = 0;
    if (a) {
        RefCounted* p = (RefCounted*)((char*)a + 0xa4);
        if (p) {
            p->vptr = a;
            RefCounted* old = holder.ptr;
            if (old) {
                _InterlockedExchangeAdd(&old->refCount, 1);
            }
            RefCounted* old2 = *(RefCounted**)((char*)p + 4);
            if (old2) {
                if (_InterlockedExchangeAdd(&old2->refCount, -1) == 1) {
                    void** vt = *(void***)old2;
                    typedef void (__thiscall *Fn)(void*);
                    ((Fn)vt[2])(old2);
                }
            }
            *(RefCounted**)((char*)p + 4) = old;
        }
    }
}
