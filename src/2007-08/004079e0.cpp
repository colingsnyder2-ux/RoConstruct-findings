// from server: 46% by colin
struct ICreator {
    void* vtable;
    int refcount;
    int refcount2;
    void* name;
};

struct Creator : ICreator {
    Creator(const void* name);
};

extern "C" void* __cdecl operator_new(unsigned int size);

Creator::Creator(const void* name)
{
    this->vtable = 0;
    ICreator* p = (ICreator*)operator_new(0x14);
    if (p) {
        p->refcount = 1;
        p->refcount2 = 1;
        p->vtable = (void*)0x7850b0;
        p->name = (void*)name;
    } else {
        p = 0;
    }
    this->vtable = p;
}
