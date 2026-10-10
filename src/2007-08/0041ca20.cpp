// from server: 18% by colin
extern "C" void* __stdcall malloc(unsigned int);

struct ICreator {
    virtual void v0();
    virtual void v1();
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
    void* mem = malloc(0x144);
    if (mem) {
        ((Creator*)mem)->construct(mem);
    } else {
        mem = 0;
    }
    c->v0();
    c->v1();
}
