// from server: 44% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* ptr;
};

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct CreatorBase {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
};

struct Creator : CreatorBase {
    void* field4;
};

struct FactoryProduct {
    void* field0;
    RefCounted* field4;
};

extern "C" void* __cdecl sub_5f70c0(void* out, const RBXName* name);

void __stdcall sub_5f7b50(FactoryProduct* out, const RBXName* name);

void __stdcall sub_5f7b50(FactoryProduct* out, const RBXName* name)
{
    void* tmp[3];
    tmp[0] = 0;
    sub_5f70c0(tmp, name);
    out->field0 = *(void**)tmp;
    RefCounted* p = *(RefCounted**)((char*)tmp + 4);
    out->field4 = p;
    if (p) {
        _InterlockedExchangeAdd(&p->refCount, 1);
    }
    RefCounted* q = *(RefCounted**)((char*)tmp + 8);
    if (q) {
        if (_InterlockedExchangeAdd(&q->refCount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)q->vptr)[1])(q);
            if (_InterlockedExchangeAdd(&q->weakCount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)q->vptr)[2])(q);
            }
        }
    }
}
