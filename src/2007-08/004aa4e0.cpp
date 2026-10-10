// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long refCount1;
    volatile long refCount2;
};

struct NewInstanceItem {
    void* vtable;
    RefCounted* ptr;
    void destroy();
};

void NewInstanceItem::destroy()
{
    RefCounted* p = this->ptr;
    if (p != 0) {
        if (_InterlockedExchangeAdd(&p->refCount1, -1) == 1) {
            p->unknown1();
            if (_InterlockedExchangeAdd(&p->refCount2, -1) == 1) {
                p->unknown2();
            }
        }
    }
    this->vtable = (void*)0x79d1f8;
}
