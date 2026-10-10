// from server: 51% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refCount;
    long weakCount;
    virtual void destroy();
    virtual void destroyWeak();
};

struct CreatorBase {
    virtual void unused0();
    virtual void unused1();
};

struct NameRef {
    void* ptr;
};

struct Creator : CreatorBase {
    NameRef name;
};

extern "C" void __cdecl sub_58EB30(void* out, void* key);

struct FactoryProduct {
    void* field0;
    RefCounted* field4;
};

struct CreatorHolder {
    Creator* creator;
    RefCounted* ref;
};

void __fastcall FactoryProduct_ctor(FactoryProduct* self, void* edx, CreatorHolder* out)
{
    Creator* c;
    RefCounted* r;
    void* tmp[2];
    tmp[0] = 0;
    sub_58EB30(tmp, self);
    c = (Creator*)tmp[0];
    r = (RefCounted*)tmp[1];
    out->creator = c;
    out->ref = r;
    if (r) {
        _InterlockedExchangeAdd(&r->refCount, 1);
    }
    if (r) {
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
            r->destroy();
            if (_InterlockedExchangeAdd(&r->weakCount, -1) == 1) {
                r->destroyWeak();
            }
        }
    }
}
