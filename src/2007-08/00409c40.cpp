// from server: 94% by colin
struct Inner {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void f(int);
};

struct Obj {
    char pad[0x1c];
    Inner inner;
    char pad2[0x28 - 0x20];
    int refcount;
};

int __stdcall sub_409c40(Obj* p) {
    int result = --p->refcount;
    if (result == 0) {
        if (p != 0) {
            Inner* inner = &p->inner;
            inner->f(1);
        }
    }
    return result;
}
