// from server: 52% by atomic.potato
extern "C" void* __cdecl operator_new(unsigned int size);

struct Inner {
    void* vtable;
    int refcount1;
    int refcount2;
    int field_c;
};

struct Outer {
    Inner* ptr;
    Outer(int arg1, int arg2);
};

Outer::Outer(int arg1, int arg2) {
    ptr = 0;
    Inner* p = (Inner*)operator_new(0x14);
    if (p) {
        p->refcount1 = 1;
        p->refcount2 = 1;
        p->vtable = (void*)0x824c10;
        p->field_c = arg1;
    } else {
        p = 0;
    }
    ptr = p;
}
