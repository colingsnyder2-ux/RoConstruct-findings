// from server: 42% by colin
struct FactoryProductBase {
    void construct(void* p);
};

struct Creator {
    char pad[8];
    void* fn;
    void* obj;
    void* result;
    int arg16;
    char arg20;
};

struct FactoryProduct : FactoryProductBase {
    void FactoryProduct_ctor(void* a, void* b, int c, char d);
};

void FactoryProduct::FactoryProduct_ctor(void* a, void* b, int c, char d) {
    Creator cr;
    cr.pad[0] = 0;
    cr.pad[1] = 0;
    cr.pad[2] = 0;
    cr.pad[3] = 0;
    cr.pad[4] = 0;
    cr.pad[5] = 0;
    cr.pad[6] = 0;
    cr.pad[7] = 0;
    cr.fn = 0;
    cr.obj = 0;
    cr.result = 0;
    cr.arg16 = 0;
    cr.arg20 = 0;
    if (b != 0) {
        cr.obj = b;
        cr.fn = a;
        cr.result = ((void* (*)(void*, void*))a)(0, b);
    }
    cr.arg16 = c;
    cr.arg20 = d;
    this->construct(&cr);
    if (b != 0) {
        ((void (*)(void*, void*))a)(&cr, (void*)1);
    }
}
