// from server: 21% by colin
extern "C" void* __stdcall malloc(unsigned int);

struct ICreator {
    virtual void v0();
    virtual void v1();
};

struct Creator : ICreator {
    void construct(void* p);
    void init(void* a, void* b);
};

struct FactoryProduct {
    Creator* creator;
    void FactoryProductCtor();
};

void Creator::construct(void* p) {
    if (p) {
        init(p, 0);
    }
}

void Creator::init(void* a, void* b) {
}

void FactoryProduct::FactoryProductCtor() {
    void* mem = malloc(0x10c);
    Creator* c = 0;
    if (mem) {
        c = (Creator*)mem;
        c->construct(mem);
    }
    creator = c;
    creator->init(0, 0);
}
