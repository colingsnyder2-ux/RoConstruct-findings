// from server: 25% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
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

struct CreatorMap {
    void* tree;
};

struct FactoryProduct {
    static CreatorMap* getCreators();
    static RBXName* getClassNameUnconstructed();
    static SharedPtr* createInstance(SharedPtr* result);
    static void releaseRef(RefCountedBase* pn);

    SharedPtr* __thiscall create(SharedPtr* result);
};

CreatorMap* FactoryProduct::getCreators() {
    return 0;
}

RBXName* FactoryProduct::getClassNameUnconstructed() {
    return 0;
}

SharedPtr* FactoryProduct::createInstance(SharedPtr* result) {
    return 0;
}

void FactoryProduct::releaseRef(RefCountedBase* pn) {
    if (pn) {
        if (_InterlockedExchangeAdd(&pn->refCount, -1) == 1) {
            void** vt = *(void***)pn;
            typedef void (__thiscall *Fn)(RefCountedBase*);
            ((Fn)vt[1])(pn);
            if (_InterlockedExchangeAdd((volatile long*)((char*)pn + 8), -1) == 1) {
                ((Fn)vt[2])(pn);
            }
        }
    }
}

SharedPtr* __thiscall FactoryProduct::create(SharedPtr* result) {
    SharedPtr tmp;
    tmp.px = 0;
    tmp.pn = 0;

    SharedPtr* created = createInstance(&tmp);

    result->px = created->px;
    result->pn = created->pn;
    if (result->pn) {
        _InterlockedExchangeAdd(&result->pn->refCount, 1);
    }

    releaseRef(tmp.pn);

    return result;
}
