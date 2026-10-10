// from server: 18% by colin
struct EnumDescriptor;

struct Descriptor {
    void construct(const char* name, int attributes);
};

struct Item : Descriptor {
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;
    Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner);
};

struct EnumDescriptor {
    char pad0[0x20];
    char pad1[0xd0];
    int field_f0;
    char pad2[0x24];
    Item* item_118;
    char pad3[0x100];
    char sub_100[0x100];
    EnumDescriptor(const char* typeName);
    void addItem(const char* name, int attributes, int value, unsigned int index, Item* item);
    void setSomething(bool b);
};

extern "C" {
    const char* __stdcall c_str_std_string(void* s);
    void __stdcall sub_69a040();
    void __stdcall sub_698cc0();
}

void __stdcall sub_43b5d0(void* self, Item* item, const char* name);

Item::Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner_)
    : owner(owner_), value(value), index(index)
{
    ((Descriptor*)this)->construct(name, attributes);
}

EnumDescriptor::EnumDescriptor(const char* typeName)
{
    field_f0 = 1;
    *(void**)this = (void*)0x78de6c;
    *(void**)((char*)this + 0x20) = (void*)0x78de0c;
    *(void**)((char*)this + 0x100) = (void*)0x78de00;
    item_118 = 0;
    setSomething(true);
}
