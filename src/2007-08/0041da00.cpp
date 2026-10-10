// from server: 49% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct CNameItem {
    void* field0;
    RefCounted* field4;
    RefCounted* field8;
    RefCounted* fieldC;
    void destructor();
};

void CNameItem::destructor()
{
    RefCounted* p = fieldC;
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            void** vt = p->vptr;
            ((void (__thiscall*)(RefCounted*))vt[1])(p);
            if (_InterlockedExchangeAdd(&p->weakCount, -1) == 1) {
                void** vt2 = p->vptr;
                ((void (__thiscall*)(RefCounted*))vt2[2])(p);
            }
        }
    }
    p = field4;
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            void** vt = p->vptr;
            ((void (__thiscall*)(RefCounted*))vt[1])(p);
            if (_InterlockedExchangeAdd(&p->weakCount, -1) == 1) {
                void** vt2 = p->vptr;
                ((void (__thiscall*)(RefCounted*))vt2[2])(p);
            }
        }
    }
}
