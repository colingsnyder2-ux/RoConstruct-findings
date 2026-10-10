// from server: 55% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
};

struct Inner {
    void* vptr;
    void (__thiscall *dtor)(void*);
    void (__thiscall *deleter)(void*);
};

struct Holder {
    void* ptr;
};

struct VInstance {
    char pad[0xf8];
    void* field_f8;
    void* slot_fc;
    Holder slot_100;
};

extern "C" void __cdecl sub_5e49e0(void* out, void* in);
extern "C" void __cdecl sub_402a60(void* dst, void* src);

struct S {
    char pad[0xf8];
    void* f8;
    void* fc;
    void* f100;
    void method(void* a, int b);
};

void S::method(void* a, int b)
{
    void* ebx = a;
    int edi = b;
    S* esi = this;

    void** slot = (void**)((char*)esi + edi * 8 + 0xfc);
    if (*slot == ebx)
        return;

    Holder tmp;
    sub_5e49e0(&tmp, ebx);
    *slot = tmp.ptr;
    tmp.ptr = 0;
    sub_402a60((char*)esi + edi * 8 + 0x100, &tmp);

    void* old = tmp.ptr;
    if (old) {
        RefCounted* rc = (RefCounted*)old;
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            Inner* inner = (Inner*)old;
            inner->dtor(old);
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                Inner* inner2 = (Inner*)old;
                inner2->deleter(old);
            }
        }
    }

    void* v;
    if (ebx)
        v = *(void**)((char*)ebx + 0x1d8);
    else
        v = 0;

    void* f8 = *(void**)((char*)esi + 0xf8);
    void** vt = *(void***)f8;
    void (__thiscall *fn)(void*, void*, int) = (void (__thiscall *)(void*, void*, int))vt[4];
    fn(f8, v, edi);
}
