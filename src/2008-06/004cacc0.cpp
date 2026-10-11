// from server: 20% by colin
struct Inner {
    char pad0[0x60];
    unsigned int flags;
    unsigned int field64;
    unsigned int field68;
};

struct Outer {
    char pad0[4];
    Inner* inner;
};

struct S {
    char pad0[4];
    Outer* outer;
    void f();
};

void S::f()
{
    Outer* o = this ? (Outer*)((char*)this - 0xc) : 0;
    Inner* in = o->inner;
    in->flags &= 0xfffffffe;
    in->flags &= 1;
    in->field64 = (unsigned int)&in->flags;
    in->field68 = (unsigned int)&in->flags;
}
