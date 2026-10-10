// from server: 30% by colin
struct RBXName;

struct ICreator {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    virtual void unknown3();
};

struct CreatorImpl {
    void construct(RBXName* name);
};

extern "C" void* __cdecl malloc(unsigned int size);

void __stdcall sub_5A2AF0(void* p);

struct FactoryProductCreator : public ICreator {
    void construct(RBXName* name);
};

void FactoryProductCreator::construct(RBXName* name) {
    void* mem = malloc(0x100);
    CreatorImpl* impl = 0;
    if (mem) {
        impl = (CreatorImpl*)mem;
        impl->construct(name);
    }
    this->unknown0();
}
