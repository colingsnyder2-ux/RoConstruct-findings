// from server: 79% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted
{
    void *vptr;
    volatile long ref1;
    volatile long ref2;
};

struct Inner
{
    char pad0[4];
    void *field4;
    char pad8[0x48];
    void *field50;
    void *field54;
    void *field58;
};

struct Outer
{
    char pad0[4];
    Inner *field4;
};

extern "C" void __cdecl sub_518A40(void *, void *, void *, void *);

struct S
{
    void f(void *);
};

void S::f(void *arg)
{
    Outer *o1 = this ? (Outer *)((char *)this - 0xc) : 0;
    Inner *i1 = o1->field4;
    Outer *o2 = this ? (Outer *)((char *)this - 0xc) : 0;
    Inner *i2 = o2->field4;
    Outer *o3 = this ? (Outer *)((char *)this - 0xc) : 0;
    Inner *i3 = o3->field4;

    void *a = (char *)i3 + 0x50;
    void *b = arg ? (char *)arg + 0x50 : 0;
    void *c = (char *)i1 + 0x58;
    void *d = (char *)i2 + 0x54;

    sub_518A40(b, a, d, c);

    RefCounted *rc = (RefCounted *)((char *)arg + 4);
    if (rc != 0)
    {
        if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1)
        {
            void **vt = (void **)rc->vptr;
            void (*fn)(void *) = (void (*)(void *))vt[1];
            fn(rc);
            if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1)
            {
                void **vt2 = (void **)rc->vptr;
                void (*fn2)(void *) = (void (*)(void *))vt2[2];
                fn2(rc);
            }
        }
    }
}
