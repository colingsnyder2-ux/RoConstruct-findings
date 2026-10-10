// from server: 24% by colin
extern "C" void* __stdcall malloc(unsigned int size);

struct ICreator {
    virtual void* create() const;
    virtual ~ICreator();
};

struct Creator : ICreator {
    void* create() const;
    Creator();
    ~Creator();
};

struct FactoryProduct {
    Creator* creator;
    void construct(Creator* c);
};

void* Creator::create() const {
    return 0;
}

Creator::Creator() {
    void* p = malloc(0x10c);
    if (p) {
        *(void**)p = 0;
        *(void**)((char*)p + 4) = 0;
        *(void**)((char*)p + 8) = 0;
        *(void**)((char*)p + 12) = 0;
    }
    this->create();
}

Creator::~Creator() {
}

void FactoryProduct::construct(Creator* c) {
    creator = c;
}
