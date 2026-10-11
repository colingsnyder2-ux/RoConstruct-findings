// from server: 44% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct GetSetBase {
    void** vptr;
};

struct GetSetImpl {
    void** vptr;
    int getOffset;
    int setOffset;
    void invoke(int a, int b, int c);
};

void GetSetImpl::invoke(int a, int b, int c)
{
    RefCounted* p = (RefCounted*)c;
    if (p) {
        _InterlockedExchangeAdd(&p->refCount, 1);
    }

    GetSetBase* self = (GetSetBase*)this;
    char* base = (char*)a;
    int off = *(int*)(base + 0x150);
    int idx = *(int*)((char*)self + 8);
    int delta = *(int*)((char*)self + 4);
    int target = *(int*)(off + idx) + delta;
    void (*fn)(void*) = *(void (**)(void*))self;
    fn((void*)(base + 0x150 + target));

    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            void** vt = p->vptr;
            void (*dtor)(void*) = (void (*)(void*))vt[1];
            dtor(p);
            if (_InterlockedExchangeAdd(&p->weakRefCount, -1) == 1) {
                void** vt2 = p->vptr;
                void (*wdtor)(void*) = (void (*)(void*))vt2[2];
                wdtor(p);
            }
        }
    }
}
