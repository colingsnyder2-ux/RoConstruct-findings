// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* data;
};

struct RefCountedBase {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
};

struct SharedPtr {
    void* px;
    void* pn;
};

struct Creator {
    SharedPtr* create(SharedPtr* result);
};

struct FactoryProduct {
    Creator* getCreator();
};

extern "C" void* __cdecl sub_41C3C0(void* out);

SharedPtr* Creator::create(SharedPtr* result) {
    void* tmp = 0;
    void* src = sub_41C3C0(&tmp);
    result->px = *(void**)src;
    void* pn = *(void**)((char*)src + 4);
    result->pn = pn;
    if (pn) {
        _InterlockedExchangeAdd((volatile long*)((char*)pn + 4), 1);
    }
    if (tmp) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)tmp + 4), -1) != 1) {
            (*(void(__thiscall**)(void*))(*(void**)tmp))(tmp);
            if (_InterlockedExchangeAdd((volatile long*)((char*)tmp + 8), -1) == 1) {
                (*(void(__thiscall**)(void*))((*(void***)tmp)[2]))(tmp);
            }
        }
    }
    return result;
}
