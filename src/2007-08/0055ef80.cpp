// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    long refCount;
    long weakCount;
};

struct Backpack {
    void* vptr;
    char pad[0x0c];
    RefCounted* field10;
    char pad2[0x08];
    RefCounted* field1c;
    void destroy();
};

void __fastcall sub_564BB0(Backpack* self);

void Backpack::destroy()
{
    this->vptr = (void*)0x7a91e4;

    RefCounted* p = this->field1c;
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount, -1) == 1) {
            void** vt = (void**)p->vptr;
            ((void (__fastcall*)(RefCounted*))vt[1])(p);
            if (_InterlockedExchangeAdd(&p->weakCount, -1) == 1) {
                void** vt2 = (void**)p->vptr;
                ((void (__fastcall*)(RefCounted*))vt2[2])(p);
            }
        }
    }

    RefCounted* q = this->field10;
    if (q) {
        if (_InterlockedExchangeAdd(&q->refCount, -1) == 1) {
            void** vt = (void**)q->vptr;
            ((void (__fastcall*)(RefCounted*))vt[1])(q);
            if (_InterlockedExchangeAdd(&q->weakCount, -1) == 1) {
                void** vt2 = (void**)q->vptr;
                ((void (__fastcall*)(RefCounted*))vt2[2])(q);
            }
        }
    }

    sub_564BB0(this);
}
