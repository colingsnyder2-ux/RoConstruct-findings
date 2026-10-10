// from server: 52% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCountedBase {
    long refCount;
    virtual void unknown0();
    virtual void unknown1();
};

struct SharedPtrStorage {
    void* ptr;
    RefCountedBase* ref;
};

struct CreatorBase {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
};

struct CreatorImpl : CreatorBase {
    SharedPtrStorage* create(SharedPtrStorage* result) const;
};

extern "C" SharedPtrStorage* __cdecl sub_426AB0(SharedPtrStorage* result);

SharedPtrStorage* CreatorImpl::create(SharedPtrStorage* result) const {
    SharedPtrStorage tmp;
    tmp.ptr = 0;
    tmp.ref = 0;

    sub_426AB0(&tmp);

    result->ptr = tmp.ptr;
    result->ref = tmp.ref;

    if (result->ref) {
        _InterlockedExchangeAdd((volatile long*)((char*)result->ref + 4), 1);
    }

    RefCountedBase* old = tmp.ref;
    if (old) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old + 4), -1) == 1) {
            old->unknown0();
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                old->unknown1();
            }
        }
    }

    return result;
}
