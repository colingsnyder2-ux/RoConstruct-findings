// from server: 64% by colin
struct RBX_Name;

struct ICreator {
    virtual ~ICreator();
    virtual void create() = 0;
};

struct Creator : ICreator {
    Creator();
    ~Creator();
    void create();
};

struct FactoryProduct {
    Creator* creator;
    FactoryProduct();
};

extern "C" void* __cdecl malloc(unsigned int size);

struct NameRef {
    void* ptr;
};

struct CreatorsMap {
    void insert(NameRef* name, Creator* c);
};

extern CreatorsMap gCreators;

void* __stdcall sub_5b2580(void* p);

void __fastcall sub_4af240(Creator* self, int, void* a, void* b);

Creator::Creator() {
    void* mem = malloc(0x10c);
    void* obj = 0;
    if (mem) {
        obj = sub_5b2580(mem);
    }
    sub_4af240(this, 0, obj, 0);
}

Creator::~Creator() {
}

void Creator::create() {
}

FactoryProduct::FactoryProduct() {
    this->creator = 0;
}
