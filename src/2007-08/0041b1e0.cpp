// from server: 39% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct CreatorBase {
    void* field0;
    void* field4;
};

struct VDHTMLWindowService_FactoryProduct_Creator {
    void* field0;
    void* field4;
    void* field8;
    void* construct(CreatorBase* arg0, RefCounted* arg1);
};

void __stdcall helper_41ae80(CreatorBase* self);

void* VDHTMLWindowService_FactoryProduct_Creator::construct(CreatorBase* arg0, RefCounted* arg1)
{
    this->field0 = 0;
    this->field4 = 0;
    this->field8 = 0;

    CreatorBase local;
    local.field0 = arg0;
    local.field4 = arg1;
    arg0 = 0;

    if (arg1 != 0) {
        _InterlockedExchangeAdd(&arg1->refCount, 1);
    }

    helper_41ae80(&local);

    if (arg1 != 0) {
        if (_InterlockedExchangeAdd(&arg1->refCount, -1) == 1) {
            void** vt = *(void***)arg1;
            void (__stdcall *fn)(RefCounted*) = (void (__stdcall *)(RefCounted*))vt[1];
            fn(arg1);
            if (_InterlockedExchangeAdd(&arg1->weakRefCount, -1) == 1) {
                void** vt2 = *(void***)arg1;
                void (__stdcall *fn2)(RefCounted*) = (void (__stdcall *)(RefCounted*))vt2[2];
                fn2(arg1);
            }
        }
    }

    return this;
}
