// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* data;
};

struct CreatorBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct FactoryProductCreator : CreatorBase {
    void* field4;
};

struct RefCounted {
    long refcount;
};

struct SharedPtr {
    void* px;
    RefCounted* pn;
};

struct CreatorMap {
    void* dummy;
};

extern "C" void* __cdecl sub_58e8c0(void* out, void* name);

struct FactoryProduct {
    static void* getCreators();
    static void* getClassNameUnconstructed();
    void* construct(SharedPtr* out);
};

void* FactoryProduct::construct(SharedPtr* out) {
    SharedPtr tmp;
    tmp.px = 0;
    tmp.pn = 0;
    sub_58e8c0(&tmp, getClassNameUnconstructed());
    out->px = tmp.px;
    out->pn = tmp.pn;
    if (out->pn) {
        _InterlockedExchangeAdd((volatile long*)((char*)out->pn + 4), 1);
    }
    if (tmp.pn) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)tmp.pn + 4), -1) == 1) {
            void** vt = *(void***)tmp.pn;
            ((void (__thiscall*)(void*))vt[1])(tmp.pn);
            if (_InterlockedExchangeAdd((volatile long*)((char*)tmp.pn + 8), -1) == 1) {
                void** vt2 = *(void***)tmp.pn;
                ((void (__thiscall*)(void*))vt2[2])(tmp.pn);
            }
        }
    }
    return out;
}
