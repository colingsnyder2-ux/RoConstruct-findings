// from server: 56% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBX_Name {
    void* data;
};

struct RefCountedBase {
    void* vptr;
    volatile long refCount;
};

struct SharedPtr {
    void* px;
    RefCountedBase* pn;
};

struct Creator {
    void* vptr;
};

struct CreatorsMap {
    void* tree;
};

struct FactoryProductBase {
    static CreatorsMap* getCreators();
    static const RBX_Name& declareName();
};

extern "C" void* __cdecl sub_459570(void* outPtr);

struct FactoryProduct {
    SharedPtr* create(Creator* creator);
};

SharedPtr* FactoryProduct::create(Creator* creator) {
    SharedPtr* result = (SharedPtr*)creator;
    void* tmp = 0;
    void* raw = sub_459570(&tmp);
    result->px = *(void**)raw;
    result->pn = *(RefCountedBase**)((char*)raw + 4);
    if (result->pn) {
        _InterlockedExchangeAdd(&result->pn->refCount, 1);
    }
    if (tmp) {
        RefCountedBase* pn = (RefCountedBase*)tmp;
        if (_InterlockedExchangeAdd(&pn->refCount, -1) == 1) {
            void** vt = *(void***)pn;
            ((void (__thiscall*)(RefCountedBase*))vt[1])(pn);
            if (_InterlockedExchangeAdd((volatile long*)((char*)pn + 8), -1) == 1) {
                void** vt2 = *(void***)pn;
                ((void (__thiscall*)(RefCountedBase*))vt2[2])(pn);
            }
        }
    }
    return result;
}
