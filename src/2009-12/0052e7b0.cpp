// from server: 52% by atomic.potato
extern "C" void* __cdecl operator_new(unsigned int size);

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
    Inner* p;
    ptr = 0;
    p = (Inner*)operator_new(0x10);
    if (p) {
        p->refcount1 = 1;
        p->refcount2 = 1;
        p->vtable = (void*)0x9bcc84;
        p->value = v;
    } else {
        p = 0;
    }
    ptr = p;
}
