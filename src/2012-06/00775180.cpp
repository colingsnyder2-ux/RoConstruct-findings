// from server: 0% by atomic.potato
extern "C" void* __cdecl sub_98211a(unsigned int size);

struct Inner {
    void* vtbl;
    int refcount1;
    int refcount2;
    int field_c;
};

struct Outer {
    Inner* ptr;
    Outer(int arg);
};

Outer::Outer(int arg) {
    ptr = 0;
    Inner* p = (Inner*)sub_98211a(0x14);
    if (p) {
        p->refcount1 = 1;
        p->refcount2 = 1;
        p->vtbl = (void*)0xbafcb0;
        p->field_c = arg;
    } else {
        p = 0;
    }
    ptr = p;
}
