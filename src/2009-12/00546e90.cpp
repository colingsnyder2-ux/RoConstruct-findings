// from server: 52% by atomic.potato
extern "C" void* __cdecl sub_7F3860(unsigned int);

struct Inner {
    void* vtable;
    int refcount1;
    int refcount2;
    int value;
};

struct Outer {
    Inner* ptr;
    Outer(int v);
};

Outer::Outer(int v) {
    ptr = 0;
    Inner* p = (Inner*)sub_7F3860(0x10);
    if (p) {
        p->refcount1 = 1;
        p->refcount2 = 1;
        p->vtable = (void*)0x9BD0FC;
        p->value = v;
    } else {
        p = 0;
    }
    ptr = p;
}
