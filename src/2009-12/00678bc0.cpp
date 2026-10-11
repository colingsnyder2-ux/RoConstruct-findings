// from server: 31% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void slot4();
    virtual void slot8();
    long ref1;
    long ref2;
};

struct ClearBackpack {
    void* vptr;
    char pad[0x14];
    RefCounted* field18;
    void clear();
};

void ClearBackpack::clear()
{
    this->vptr = (void*)0x9cfba0;
    RefCounted* p = this->field18;
    if (p) {
        if (_InterlockedExchangeAdd(&p->ref1, -1) == 1) {
            p->slot4();
        }
        if (_InterlockedExchangeAdd(&p->ref2, -1) == 1) {
            p->slot8();
        }
    }
    ((void (__thiscall*)(ClearBackpack*))0x67deb0)(this);
}
