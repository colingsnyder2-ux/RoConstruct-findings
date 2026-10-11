// from server: 50% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S
{
    int (**vtable)();
    long value;

    void unused();
};

struct T
{
    S* object;
    long* reference;
};

void S::unused()
{
}

void func_00668d80(T* p)
{
    T t;
    t.object = p->object;
    t.reference = p->reference;
    if (t.reference != 0)
        _InterlockedExchangeAdd((volatile long*)(t.reference + 1), 1);
    t.object->vtable[0]();
}
