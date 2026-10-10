// from server: 46% by colin
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
    void setSomething(int);
    void addItem(int, const char*, int);
};

extern "C" void __stdcall sub_689740();
extern "C" void __stdcall sub_697A10(int);

Item::Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner)
    : Descriptor(name, attributes), owner(owner), value(value), index(index)
{
    *(void**)this = (void*)0x78eeb4;
    *(void**)((char*)this + 0x20) = (void*)0x78ee54;
    *(void**)((char*)this + 0x100) = (void*)0x78ee4c;
    int flags = 0;
    sub_689740();
    sub_697A10(flags | 4);
    void* p = *(void**)((char*)this + 0xbc);
    void** vtbl = *(void***)p;
    ((void (__stdcall*)(const char*, int, int))vtbl[0x16])((const char*)0x78ee3c, 0, 0xe101);
    p = *(void**)((char*)this + 0xbc);
    vtbl = *(void***)p;
    ((void (__stdcall*)(const char*, int, int))vtbl[0x16])((const char*)0x78ee34, 1, 0xe120);
}
