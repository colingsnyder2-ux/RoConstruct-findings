// from server: 29% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CNameItem {
    void construct();
};

void CNameItem::construct() {
    // placeholder to satisfy declaration
}

struct RefCounted {
    long refcount;
    virtual void destroy();
    virtual void release();
};

struct RoundRobinPhysicsSender {
    int field0;
    RefCounted* field4;
    char pad8[8];
    CNameItem field10;
    char pad1c[0x24];
    float field40;
    int field44;
    RoundRobinPhysicsSender(int a, RefCounted* b);
};

RoundRobinPhysicsSender::RoundRobinPhysicsSender(int a, RefCounted* b) {
    field0 = a;
    field4 = b;
    if (b) {
        _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
    }
    field10.construct();
    field40 = *(float*)0x93cc40;
    field44 = -1;
    if (b) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)b + 4), -1) == 1) {
            b->destroy();
            if (_InterlockedExchangeAdd((volatile long*)((char*)b + 8), -1) == 1) {
                b->release();
            }
        }
    }
}
