// from server: 53% by colin
struct GetSetImpl {
    void* vtable;
    int refcount1;
    int refcount2;
    void* arg;
};

struct Holder {
    GetSetImpl* ptr;
    Holder(void* a, void* b);
};

extern "C" void* __cdecl operator_new(unsigned int size);

Holder::Holder(void* a, void* b)
{
    this->ptr = 0;
    GetSetImpl* p = (GetSetImpl*)operator_new(0x14);
    if (p) {
        p->refcount1 = 1;
        p->refcount2 = 1;
        p->vtable = (void*)0x7aea00;
        p->arg = a;
    } else {
        p = 0;
    }
    this->ptr = p;
}
