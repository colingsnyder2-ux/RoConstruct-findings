// from server: 30% by colin
struct Descriptor {
    void construct(const char* name, int attributes);
};

struct EnumDescriptor {
    void construct(const char* typeName);
};

struct Item : Descriptor {
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;

    Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner);
};

extern "C" const char* __stdcall c_str_helper(const void* str);

extern "C" void __stdcall Descriptor_construct(Descriptor* self, const char* name, int attributes);
extern "C" void __stdcall EnumDescriptor_construct(EnumDescriptor* self, const char* typeName);
extern "C" void __stdcall Item_setName(Item* self, const char* name);

Item::Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner)
    : owner(owner), value(value), index(index)
{
    Descriptor_construct(this, name, attributes);
    EnumDescriptor_construct((EnumDescriptor*)((char*)this + 0x108), name);
    *(int*)((char*)this + 0xf0) = 1;
    *(void**)((char*)this) = (void*)0x78dfd4;
    *(void**)((char*)this + 0x20) = (void*)0x78df74;
    *(void**)((char*)this + 0x108) = (void*)0x78df68;
    *(const EnumDescriptor**)((char*)this + 0x120) = &owner;
    Item_setName(this, name);
}
