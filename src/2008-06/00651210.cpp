// from server: 69% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void destroy();
    virtual void release();
    volatile long ref1;
    volatile long ref2;
};

void RefCounted_release(RefCounted* p) {
    if (p) {
        if (_InterlockedExchangeAdd(&p->ref1, -1) == 1) {
            p->destroy();
            if (_InterlockedExchangeAdd(&p->ref2, -1) == 1) {
                p->release();
            }
        }
    }
}

struct ScoreHud {
    void func(int a, int b, RefCounted* p);
};

void ScoreHud::func(int a, int b, RefCounted* p) {
    RefCounted_release(p);
}
