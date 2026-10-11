// from server: 29% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Obj;

struct Vtbl {
    void (__stdcall *dummy)(Obj*);
    void (__stdcall *fn1)(Obj*);
    void (__stdcall *fn2)(Obj*);
};

struct Obj {
    Vtbl* vtbl;
    volatile long ref1;
    volatile long ref2;
};

struct S {
    int field0;
    int f(int a, int b, int c, int d, Obj* o);
};

extern "C" void __cdecl sub_4d59d0(S* self);

int S::f(int a, int b, int c, int d, Obj* o) {
    int local[4];
    local[0] = a;
    local[1] = b;
    local[2] = c;
    local[3] = d;
    this->field0 = 0;
    if (o) {
        _InterlockedExchangeAdd(&o->ref1, 1);
    }
    sub_4d59d0(this);
    if (o) {
        if (_InterlockedExchangeAdd(&o->ref1, -1) == 1) {
            o->vtbl->fn1(o);
            if (_InterlockedExchangeAdd(&o->ref2, -1) == 1) {
                o->vtbl->fn2(o);
            }
        }
    }
    return (int)this;
}
