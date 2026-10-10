// from server: 24% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
    volatile long refCount;
    volatile long weakRefCount;
};

struct FuncDescBase {
    char pad[0x130];
    int state;
    int prevState;
    void* funcPtr;
    void setFunction(void*);
};

struct BoundFuncDesc : FuncDescBase {
    void assign(void*);
};

void FuncDescBase::setFunction(void* f) {
    funcPtr = f;
}

void BoundFuncDesc::assign(void* f) {
    if (funcPtr != f) {
        RefCounted* old = (RefCounted*)funcPtr;
        funcPtr = f;
        if (f) {
            _InterlockedExchangeAdd((volatile long*)((char*)f + 4), 1);
        }
        if (old) {
            if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
                old->Release();
            }
            if (_InterlockedExchangeAdd(&old->weakRefCount, -1) == 1) {
                old->Release();
            }
        }
        setFunction(f);
    }
    int s = state - 1;
    int newState = (s != 0) ? 2 : 0;
    state = newState;
    prevState = (newState == 2) ? 0 : 0xf0;
}
