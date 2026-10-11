// from server: 51% by colin
struct ICreator {
    void* vftable;
    int refcount1;
    int refcount2;
    void* field_c;
};

struct Creator {
    void* vftable;
    void* field4;
    void* field8;
    void* fieldc;
    void* field10;
};

extern "C" void* __cdecl operator_new(unsigned int size);

struct FactoryProductCreator : ICreator {
    FactoryProductCreator(void* arg);
};

FactoryProductCreator::FactoryProductCreator(void* arg) {
    this->vftable = 0;
    Creator* p = (Creator*)operator_new(0x14);
    if (p != 0) {
        p->field4 = (void*)1;
        p->field8 = (void*)1;
        p->vftable = (void*)0x821b14;
        p->fieldc = arg;
    } else {
        p = 0;
    }
    this->vftable = p;
}
