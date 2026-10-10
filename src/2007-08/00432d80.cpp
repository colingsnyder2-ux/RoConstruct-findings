// from server: 23% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
};

struct SharedPtr {
    void* ptr;
    RefCounted* ctrl;
};

struct Creator {
    SharedPtr* getShared();
};

struct FactoryProduct {
    SharedPtr* getCreator(SharedPtr* out);
};

SharedPtr* FactoryProduct::getCreator(SharedPtr* out)
{
    SharedPtr local;
    local.ptr = 0;
    local.ctrl = 0;

    SharedPtr* src = ((Creator*)this)->getShared();

    out->ptr = src->ptr;
    RefCounted* c = src->ctrl;
    out->ctrl = c;
    if (c) {
        _InterlockedExchangeAdd(&c->refCount, 1);
    }

    RefCounted* old = local.ctrl;
    if (old) {
        if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
            void (*dtor)(void*) = *(void (**)(void*))((*(void***)old)[1]);
            dtor(old);
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                void (*dtor2)(void*) = *(void (**)(void*))((*(void***)old)[2]);
                dtor2(old);
            }
        }
    }

    return out;
}
