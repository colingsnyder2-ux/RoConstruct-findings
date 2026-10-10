// from server: 52% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long refCount;
};

struct Elem {
    void* a;
    void* b;
    RefCounted* ptr;
};

void copy_elems(Elem* dst, Elem* src, Elem* end);

void copy_elems(Elem* dst, Elem* src, Elem* end)
{
    if (dst == end)
        return;
    do {
        dst->a = src->a;
        dst->b = src->b;
        RefCounted* nb = (RefCounted*)src->ptr;
        if (nb != dst->ptr) {
            if (nb)
                _InterlockedExchangeAdd(&nb->refCount, 1);
            RefCounted* ob = dst->ptr;
            if (ob) {
                if (_InterlockedExchangeAdd(&ob->refCount, -1) == 1) {
                    ((void (__thiscall*)(RefCounted*))ob->vptr[1])(ob);
                    if (_InterlockedExchangeAdd(&ob->refCount, -1) == 1)
                        ((void (__thiscall*)(RefCounted*))ob->vptr[2])(ob);
                }
            }
            dst->ptr = nb;
        }
        dst = (Elem*)((char*)dst + 0xc);
        src = (Elem*)((char*)src + 0xc);
    } while (src != end);
}
