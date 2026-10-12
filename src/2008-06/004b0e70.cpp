// from server: 66% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    long ref1;
    long ref2;
};

struct Holder {
    int a;
    int b;
    int c;
    int d;
    RefCounted* p;
};

extern "C" int __cdecl type_info_equals(void*, void*);

int __cdecl sub_4b0e70(int arg0, Holder* src, Holder* dst, int op)
{
    if (op == 0) {
        if (dst == 0)
            return 0;
        dst->a = src->a;
        dst->b = src->b;
        dst->c = src->c;
        dst->d = src->d;
        dst->p = src->p;
        if (dst->p == 0)
            return 0;
        _InterlockedExchangeAdd(&dst->p->ref1, 1);
        return 0;
    }
    if (op == 1) {
        RefCounted* p = src->p;
        if (p == 0)
            return 0;
        if (_InterlockedExchangeAdd(&p->ref1, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))p->vptr[1])(p);
            if (_InterlockedExchangeAdd(&p->ref2, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))p->vptr[2])(p);
            }
        }
        return 0;
    }
    {
        int r = type_info_equals(*(void**)src, (void*)0x93b378);
        int v = -r;
        dst->a = v & arg0;
    }
    return 0;
}
