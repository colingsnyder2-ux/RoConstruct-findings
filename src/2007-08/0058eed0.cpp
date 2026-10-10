// from server: 51% by colin
struct ICreator {
    void* vftable;
    int refcount1;
    int refcount2;
    int field_c;
};

struct Creator : ICreator {
    Creator(int arg);
};

extern "C" void* __cdecl operator_new(unsigned int size);

Creator::Creator(int arg) {
    this->vftable = 0;
    ICreator* p = (ICreator*)operator_new(0x14);
    if (p != 0) {
        p->refcount1 = 1;
        p->refcount2 = 1;
        p->vftable = (void*)0x7af728;
        p->field_c = arg;
    } else {
        p = 0;
    }
    this->vftable = p;
}
