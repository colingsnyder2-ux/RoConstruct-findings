// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
    long weakCount;
};

struct SubObject {
    void* vptr;
};

struct VCRobloxViewVerbBinder {
    void* vptr0;
    char pad0[0x60];
    SubObject sub64;
    char pad1[0x10];
    SubObject sub78;
    SubObject sub7c;
    SubObject sub80;
    char pad2[0x04];
    SubObject sub88;
    char pad3[0x110];
    SubObject sub19c;
    SubObject sub1a0;
    SubObject sub1a4;
    SubObject sub1a8;
    SubObject sub1ac;

    void destroy();
};

void VCRobloxViewVerbBinder::destroy()
{
    this->vptr0 = (void*)0x792d74;
    this->sub64.vptr = (void*)0x792d68;
    this->sub78.vptr = (void*)0x792d5c;
    this->sub7c.vptr = (void*)0x792d50;
    this->sub80.vptr = (void*)0x792d44;

    if (this->sub1ac.vptr) {
        void** vt = (void**)this->sub1ac.vptr;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[1];
        fn(this->sub1ac.vptr, 1);
    }
    if (this->sub1a8.vptr) {
        void** vt = (void**)this->sub1a8.vptr;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[1];
        fn(this->sub1a8.vptr, 1);
    }
    if (this->sub1a4.vptr) {
        void** vt = (void**)this->sub1a4.vptr;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[1];
        fn(this->sub1a4.vptr, 1);
    }
    if (this->sub1a0.vptr) {
        void** vt = (void**)this->sub1a0.vptr;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[1];
        fn(this->sub1a0.vptr, 1);
    }
    if (this->sub19c.vptr) {
        void** vt = (void**)this->sub19c.vptr;
        void (*fn)(void*, int) = (void (*)(void*, int))vt[1];
        fn(this->sub19c.vptr, 1);
    }

    {
        void* p = (char*)this + 0x140;
        void (*fn)(void*) = (void (*)(void*))0x433bc0;
        fn(p);
    }

    {
        void* p = (char*)this + 0x138;
        *(void**)p = (void*)0x788318;
        void (*fn)(void*) = (void (*)(void*))0x63046c;
        fn(p);
    }

    {
        RefCounted* rc = *(RefCounted**)((char*)this + 0x134);
        if (rc) {
            if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
                void** vt = (void**)rc->vptr;
                void (*fn)(void*) = (void (*)(void*))vt[1];
                fn(rc);
                if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                    void** vt2 = (void**)rc->vptr;
                    void (*fn2)(void*) = (void (*)(void*))vt2[2];
                    fn2(rc);
                }
            }
        }
    }

    {
        void* p = (char*)this + 0x88;
        void (*fn)(void*) = (void (*)(void*))0x45ba60;
        fn(p);
    }

    this->sub80.vptr = (void*)0x792ac8;
    this->sub7c.vptr = (void*)0x792abc;
    this->sub78.vptr = (void*)0x792ab0;

    {
        void* p = (char*)this + 0x64;
        void (*fn)(void*) = (void (*)(void*))0x564aa0;
        fn(p);
    }

    {
        void (*fn)(void*) = (void (*)(void*))0x456bd0;
        fn(this);
    }
}
