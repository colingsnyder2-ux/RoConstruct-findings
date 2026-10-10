// from server: 54% by colin
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

extern "C" void* __cdecl sub_48BD20(void* out);

SharedPtr* Creator::create(SharedPtr* result) {
    void* tmp = 0;
    sub_48BD20(&tmp);
    void** src = (void**)tmp;
    result->px = src[0];
    void* pn = src[1];
    result->pn = pn;
    if (pn) {
        _InterlockedExchangeAdd((volatile long*)((char*)pn + 4), 1);
    }
    void* old = tmp;
    if (old) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old + 4), -1) == 1) {
            void** vt = *(void***)old;
            ((void (__thiscall*)(void*))vt[1])(old);
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                void** vt2 = *(void***)old;
                ((void (__thiscall*)(void*))vt2[2])(old);
            }
        }
    }
    return result;
}
