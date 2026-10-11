// from server: 51% by colin
struct GetSet {
    void* vfptr;
    int refcount1;
    int refcount2;
    void* get;
};

struct GetImpl {
    void* ptr;
    GetImpl(void* get);
};

extern "C" void* __cdecl operator_new(unsigned int size);

GetImpl::GetImpl(void* get)
{
    this->ptr = 0;
    GetSet* p = (GetSet*)operator_new(0x14);
    if (p) {
        p->refcount1 = 1;
        p->refcount2 = 1;
        p->vfptr = (void*)0x8233b0;
        p->get = get;
    } else {
        p = 0;
    }
    this->ptr = p;
}
