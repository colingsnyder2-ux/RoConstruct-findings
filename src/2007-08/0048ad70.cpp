// from server: 37% by colin
struct RBXName {
    static const RBXName& declare(const char* const&);
};

struct ICreator {
    virtual void dummy();
};

struct Creator : public ICreator {
    Creator();
};

extern "C" void* __stdcall malloc(unsigned int);

struct CreatorsMap {
    void* data[8];
    void insert(const RBXName* name, Creator* c);
};

extern CreatorsMap gCreators;

const char* const sHopperBin = "HopperBin";

struct FactoryProduct {
    Creator* creator;
    FactoryProduct();
};

struct HopperBin : public FactoryProduct {
    HopperBin();
};

extern void constructCreator(void*);

Creator::Creator() {
    void* mem = malloc(0x120);
    if (mem) {
        constructCreator(mem);
    } else {
        mem = 0;
    }
    gCreators.insert(&RBXName::declare(sHopperBin), this);
}

FactoryProduct::FactoryProduct() {
    creator = 0;
}

HopperBin::HopperBin() {
}
