// from server: 69% by colin
struct GetSet {
    virtual void unused0();
    virtual void unused1();
    virtual int getValue(const void* instance);
};

struct DescribedBase {
};

struct SurfaceEnumPropDescriptor {
    char pad[0x1c];
    GetSet* getset;
    int getValue(const DescribedBase* instance) const;
};

struct EnumDesc {
    static EnumDesc& singleton();
    int convertToValue(int v);
};

struct Item {
};

struct EnumDescriptor {
    struct Item* convertToItem(int v);
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __cdecl sub_557330(int a, int b);
extern "C" EnumDesc* __cdecl sub_5ed630();

struct Container {
    char pad[0xdc];
    Item** begin;
    Item** end;
};

int SurfaceEnumPropDescriptor::getValue(const DescribedBase* instance) const {
    int v = getset->getValue(instance);
    sub_557330(0x97b120, 0x5ed690);
    Container* c = (Container*)sub_5ed630();
    unsigned int count = (unsigned int)((char*)c->end - (char*)c->begin) >> 2;
    if ((unsigned int)v < count) {
        return -1;
    }
    unsigned int count2 = (unsigned int)((char*)c->end - (char*)c->begin) >> 2;
    if ((unsigned int)v >= count2) {
        _invalid_parameter_noinfo();
    }
    return (int)c->begin[v];
}
