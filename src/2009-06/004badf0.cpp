// from server: 94% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl operator_new(unsigned int);

struct Holder {
    void* vptr;
    void* field4;
    void* field8;
};

struct VDescribedBase {
    Holder* makeHolder();
};

Holder* VDescribedBase::makeHolder() {
    Holder* h = (Holder*)operator_new(0xc);
    if (h) {
        h->vptr = (void*)0x8c4634;
        h->field4 = *(void**)((char*)this + 4);
        void* p = *(void**)((char*)this + 8);
        h->field8 = p;
        if (p) {
            _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
        }
        return h;
    }
    return 0;
}
