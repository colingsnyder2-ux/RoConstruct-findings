// from server: 22% by colin
extern "C" void* __stdcall malloc(unsigned int size);

struct ICreator {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    virtual void unknown3();
};

struct Creator : ICreator {
    void construct();
    void registerSelf(void* arg);
};

struct FactoryProduct {
    void initCreator(Creator* creator);
};

void Creator::construct() {
    void* mem = malloc(0x118);
    if (mem) {
        Creator* obj = (Creator*)mem;
        obj->unknown0();
    }
}

void FactoryProduct::initCreator(Creator* creator) {
    Creator* c = creator;
    c->construct();
    c->registerSelf(0);
}
