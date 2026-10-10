// from server: 59% by colin
extern "C" void* __cdecl malloc(unsigned int);

struct RBXName {
    static RBXName* declare(const char*);
};

struct ICreator {
    virtual void dummy();
};

struct Creator : ICreator {
    Creator(const RBXName&);
};

struct FactoryProduct {
    void* operator new(unsigned int);
    FactoryProduct(const RBXName&);
};

void* FactoryProduct::operator new(unsigned int size) {
    return malloc(size);
}

FactoryProduct::FactoryProduct(const RBXName& name) {
    Creator* c = new Creator(name);
    (void)c;
}
