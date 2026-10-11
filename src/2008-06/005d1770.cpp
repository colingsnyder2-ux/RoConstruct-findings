// from server: 44% by colin
// roc 2008-06 005d1770  unit: RBX::VHopperBin::?$FactoryProduct  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d1770

struct RBXName {
    char data[0x18];
};

struct Creator {
    bool createByName(const RBXName* name, void* out);
};

struct FactoryProduct {
    void setValue(void* value);
    void createByName(const RBXName* name);
};

extern "C" void __cdecl sub_557330(const char* a, const char* b);
extern "C" void* __cdecl sub_5d0300();
extern "C" void* __cdecl sub_554290(void* a, const RBXName* b);

bool sub_5ed300(Creator* self, void* a);

void FactoryProduct::createByName(const RBXName* name)
{
    const char* p;
    if (*(int*)((char*)name + 0x18) < 0x10)
        p = (char*)name + 4;
    else
        p = *(const char**)name;

    sub_557330((const char*)0x979cb4, (const char*)0x5d0360);
    Creator* creator = (Creator*)sub_5d0300();

    void* tmp;
    void* result = sub_554290(&tmp, name);

    if (sub_5ed300(creator, result)) {
        setValue(*(void**)((char*)name + 0xc));
    } else {
        setValue(0);
    }
}
