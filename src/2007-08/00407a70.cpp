// from server: 36% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
};

struct CreatorBase {
    void* vptr;
    void* field4;
};

struct FactoryProduct {
    void* field0;
    CreatorBase base;
};

struct Creator {
    void* vptr;
    FactoryProduct* product;
    CreatorBase base;

    Creator(FactoryProduct* p, void* arg);
};

extern "C" void __stdcall sub_4079E0(CreatorBase* self, void* a, void* b);

Creator::Creator(FactoryProduct* p, void* arg)
{
    this->product = p;
    sub_4079E0(&this->base, p, arg);

    if (p != 0) {
        RefCounted** wr = (RefCounted**)((char*)p + 0xa4);
        if (wr != 0) {
            *wr = (RefCounted*)p;

            RefCounted* old = (RefCounted*)this->base.field4;
            RefCounted* newRef = (RefCounted*)this->product;
            if (newRef != 0) {
                _InterlockedExchangeAdd(&newRef->refCount, 1);
            }
            if (old != 0) {
                if (_InterlockedExchangeAdd(&old->refCount, -1) == 1) {
                    void** vt = (void**)old->vptr;
                    void (*dtor)(RefCounted*) = (void (*)(RefCounted*))vt[2];
                    dtor(old);
                }
            }
            this->base.field4 = newRef;
        }
    }
}
