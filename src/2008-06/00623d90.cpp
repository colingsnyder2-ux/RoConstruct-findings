// from server: 75% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl sub_65F600(void* a, void* b);
extern "C" void __cdecl sub_6606F0(void* a, void* b, int c, int d);

struct Inner {
    virtual void v1();
    virtual void v2();
    volatile long ref1;
    volatile long ref2;
};

struct Obj {
    char pad0[0x20];
    void* field20;
    char pad24[0x04];
    void* field28;
    int field2c;
    int field30;
};

struct Holder {
    int count;
    Inner* inner;
};

void __cdecl target(Obj* obj, Holder* holder)
{
    sub_65F600(obj, obj->field20);

    Inner* p = holder->inner;
    if (p != 0) {
        if (_InterlockedExchangeAdd(&p->ref1, -1) == 1) {
            p->v1();
            if (_InterlockedExchangeAdd(&p->ref2, -1) == 1) {
                p->v2();
            }
        }
    }

    int n = obj->field30;
    int sz = n * 12;
    sub_6606F0(holder, obj->field28, sz, 0);
    sub_6606F0(holder, obj->field20, obj->field2c * 16, 0);
    sub_6606F0(holder, &holder->inner, 0x84, 0);
}
