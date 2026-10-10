// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long refCount;
    volatile long weakRefCount;
};

struct CameraThing {
    char pad[0x228];
    virtual void unknown0();
    virtual void* unknown1();
    virtual void unknown2();
};

struct CameraCenterCommand {
    char pad[0xc];
    CameraThing* camera;
    bool isEnabled() const;
};

struct SomeContainer {
    char pad[0xf8];
    int* begin;
    int* end;
};

extern "C" SomeContainer* __cdecl sub_5623C0(int);

bool CameraCenterCommand::isEnabled() const
{
    SomeContainer* c = sub_5623C0(1);
    int count;
    if (c->begin == 0)
        count = 0;
    else
        count = (int)(((char*)c->end - (char*)c->begin) >> 2);
    bool result = (count >= 1);

    RefCounted* rc = *(RefCounted**)((char*)this + 0x10);
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            rc->unknown0();
            if (_InterlockedExchangeAdd(&rc->weakRefCount, -1) == 1)
                rc->unknown2();
        }
    }

    if (result) {
        CameraThing* cam = this->camera;
        CameraThing* v = (CameraThing*)((char*)cam + 0x228);
        void* r = v->unknown1();
        if (r != 0) {
            if (*(int*)((char*)r + 0x18c) == 0)
                return true;
        }
    }
    return false;
}
