// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCountedBase {
    long refCount;
    long weakRefCount;
};

struct SharedPtr {
    void* px;
    RefCountedBase* pn;
};

struct Creator {
    SharedPtr create() const;
};

struct CreatorHolder {
    void* ptr;
    RefCountedBase* ref;
};

extern "C" void __cdecl helper_427350(SharedPtr* out);

SharedPtr Creator::create() const {
    SharedPtr result;
    helper_427350(&result);
    SharedPtr ret;
    ret.px = result.px;
    ret.pn = result.pn;
    if (ret.pn) {
        _InterlockedExchangeAdd(&ret.pn->refCount, 1);
    }
    if (result.pn) {
        if (_InterlockedExchangeAdd(&result.pn->refCount, -1) == 1) {
            void** vtbl = *(void***)result.pn;
            typedef void (__thiscall *Fn)(void*);
            ((Fn)vtbl[1])(result.pn);
            if (_InterlockedExchangeAdd(&result.pn->weakRefCount, -1) == 1) {
                void** vtbl2 = *(void***)result.pn;
                ((Fn)vtbl2[2])(result.pn);
            }
        }
    }
    return ret;
}
