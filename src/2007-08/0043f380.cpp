// from server: 50% by colin
struct Descriptor {
    Descriptor(const char* name, int attributes);
};

struct EnumDescriptor;

struct Item : Descriptor {
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;
    Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner);
};

struct EnumDescriptor {
    void construct(const char* name, int attributes);
    void setProperty(int id, int value, const char* name);
};

extern "C" int __stdcall sub_689740();

extern "C" void __fastcall sub_697A10(Item* self, int dummy, int flags);

Item::Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner)
    : Descriptor(name, attributes)
    , owner(owner)
    , value(value)
    , index(index)
{
    *(int*)this = 0x78f01c;
    *(int*)((char*)this + 0x20) = 0x78efbc;
    *(int*)((char*)this + 0x100) = 0x78efb4;
    int flags = sub_689740();
    sub_697A10(this, 0, flags | 4);
    void* p = *(void**)((char*)this + 0xbc);
    (*(void (__thiscall **)(void*, int, int, const char*))(*(int*)p + 0x58))(p, 0, 0xe101, (const char*)0x78ee3c);
    p = *(void**)((char*)this + 0xbc);
    (*(void (__thiscall **)(void*, int, int, const char*))(*(int*)p + 0x58))(p, 1, 0xe120, (const char*)0x78ee34);
}
