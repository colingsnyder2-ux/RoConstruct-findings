// from server: 29% by colin
extern "C" void* __cdecl malloc(unsigned int size);

struct Obj {
    void init();
};

struct ICreator {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
};

struct Creator : ICreator {
    void construct();
};

struct FactoryProduct {
    Creator* creator;
    void setCreator(Creator* c);
};

void Creator::construct()
{
    void* mem = malloc(0x10c);
    if (mem) {
        ((Obj*)mem)->init();
    }
    else {
        mem = 0;
    }
    FactoryProduct* self = (FactoryProduct*)((char*)this - 8);
    self->setCreator((Creator*)mem);
}
