// from server: 54% by colin
struct FactoryProduct {
    struct Creator {
        int isConstructed;
        int field_4;
        int field_8;
        int field_c;
        Creator(int arg);
    };
    Creator* creator;
    FactoryProduct(int arg);
};

extern "C" void* __cdecl operator_new(unsigned int size);

FactoryProduct::Creator::Creator(int arg) {
    isConstructed = 0;
    field_4 = 1;
    field_8 = 1;
    field_c = arg;
}

FactoryProduct::FactoryProduct(int arg) {
    creator = 0;
    Creator* c = (Creator*)operator_new(0x14);
    if (c) {
        c->isConstructed = 0;
        c->field_4 = 1;
        c->field_8 = 1;
        c->field_c = arg;
    } else {
        c = 0;
    }
    creator = c;
}
