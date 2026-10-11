// from server: 30% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct Item {
    int value;
};

struct Holder {
    void* ptr;
};

struct Arg {
    int a;
    int b;
    float c;
};

extern "C" void* __cdecl sub_40A500(void*);
extern "C" void* __cdecl sub_409EF0(void*);

struct VNetworkSettings {
    void* field0;
    void BoundPropGetSet(int, int, float, void*);
};

void VNetworkSettings::BoundPropGetSet(int a, int b, float c, void* d) {
    if (field0 == 0) {
        void* tmp = sub_409EF0((char*)this + 4);
        sub_40A500(tmp);
    }
    RefCounted* rc = (RefCounted*)d;
    if (rc != 0) {
        _InterlockedExchangeAdd(&rc->refcount, 1);
    }
    void** vtbl = *(void***)this;
    typedef void (__thiscall *Fn)(void*, int, int, float, void*);
    Fn fn = (Fn)vtbl[1];
    fn((char*)this + 8, a, b, c, d);
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            void** v = *(void***)rc;
            typedef void (__thiscall *Dtor)(void*);
            ((Dtor)v[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                void** v2 = *(void***)rc;
                ((Dtor)v2[2])(rc);
            }
        }
    }
}
