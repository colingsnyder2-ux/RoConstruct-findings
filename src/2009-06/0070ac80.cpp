// from server: 0% by atomic.potato
extern "C" void* __stdcall sub_718A38(unsigned int size);

struct Inner {
    void* vtbl;
    int refcount;
    int weakref;
    void* data;
};

struct Outer {
    Inner* ptr;
    Outer(void* arg);
};

Outer::Outer(void* arg) {
    ptr = 0;
    Inner* p = (Inner*)sub_718A38(0x10);
    if (p) {
        p->refcount = 1;
        p->weakref = 1;
        p->vtbl = (void*)0x8efa94;
        p->data = arg;
    } else {
        p = 0;
    }
    ptr = p;
}
