// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    char pad0[0xc];
    int* begin;
    int* end;
};

struct RefCounted {
    void** vptr;
    long refcount;
};

struct Outer {
    char pad0[0x154];
    Inner* inner;
};

struct Holder {
    int* first;
    RefCounted* second;
};

struct S {
    void* field0;
    Holder* get(Holder* out);
};

void* __fastcall sub_5587c0(Inner* self);

Holder* S::get(Holder* out) {
    Inner* inner = *(Inner**)((char*)this + 0x154);
    int* b = inner->begin;
    int* e = inner->end;
    int count = (int)(e - b);
    int flag = 0;
    RefCounted* rc = 0;
    if (count > 0) {
        rc = (RefCounted*)sub_5587c0(inner);
        flag = 1;
    } else {
        rc = 0;
        flag = 1;
    }
    out->first = b;
    out->second = rc;
    if (rc) {
        _InterlockedExchangeAdd(&rc->refcount, 1);
    }
    flag |= 2;
    if (flag & 1) {
        flag &= ~1;
        if (rc) {
            if (_InterlockedExchangeAdd(&rc->refcount, -1) != 1) {
                void** vt = rc->vptr;
                void (*fn)(RefCounted*) = (void (*)(RefCounted*))vt[1];
                fn(rc);
                if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
                    void** vt2 = rc->vptr;
                    void (*fn2)(RefCounted*) = (void (*)(RefCounted*))vt2[2];
                    fn2(rc);
                }
            }
        }
    }
    return out;
}
