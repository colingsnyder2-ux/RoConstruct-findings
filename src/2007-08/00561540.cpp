// from server: 31% by colin
extern "C" void* __stdcall malloc(unsigned int size);

struct Creator {
    void construct(void* arg);
};

struct FactoryProduct {
    void init(void* a, void* b, void* c);
};

void FactoryProduct::init(void* a, void* b, void* c) {
    void* p = malloc(0x108);
    if (p) {
        Creator* cr = (Creator*)p;
        cr->construct(0);
    } else {
        p = 0;
    }
    Creator* cr2 = (Creator*)this;
    cr2->construct(p);
}
