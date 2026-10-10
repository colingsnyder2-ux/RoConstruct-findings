// from server: 19% by colin
extern "C" void* __stdcall malloc(unsigned int);

struct ICreator {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct Creator : ICreator {
    void construct(void* p);
};

struct FactoryProduct {
    void init(Creator* c, void* p);
};

void Creator::construct(void* p) {
    if (p) {
        char* q = (char*)p;
        *(int*)(q + 0) = 0;
    }
}

void FactoryProduct::init(Creator* c, void* p) {
    void* mem = malloc(0x128);
    Creator* obj = 0;
    if (mem) {
        obj = (Creator*)mem;
        obj->construct(mem);
    }
    c->v0();
    c->v1();
    c->v2();
}
