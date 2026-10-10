// from server: 92% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    int refcount;
};

struct Element {
    int a;
    int b;
    RefCounted* ptr;
};

void copy_elements(Element* dst, const Element* src, unsigned int count)
{
    while (count > 0) {
        if (dst != 0) {
            dst->a = src->a;
            dst->b = src->b;
            RefCounted* p = src->ptr;
            dst->ptr = p;
            if (p != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
            }
        }
        count--;
        dst++;
    }
}
