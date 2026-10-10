// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct Item {
    void* vptr;
    void* field4;
    void* field8;
};

struct TypedStatsItem : Item {
    void construct(void* func, RefCounted* rc);
};

void __stdcall sub_4B16F0();

void TypedStatsItem::construct(void* func, RefCounted* rc)
{
    this->vptr = 0;
    this->field4 = 0;
    this->field8 = 0;

    void* local[2];
    local[0] = func;
    local[1] = rc;
    if (rc != 0) {
        _InterlockedExchangeAdd(&rc->refCount, 1);
    }

    sub_4B16F0();

    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            typedef void (__stdcall *Fn)(RefCounted*);
            Fn fn = *(Fn*)(*(void***)rc + 1);
            fn(rc);
            if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                Fn fn2 = *(Fn*)(*(void***)rc + 2);
                fn2(rc);
            }
        }
    }
}
