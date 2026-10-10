// from server: 25% by colin
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

extern "C" void* __stdcall sub_77DD98();
extern "C" void __stdcall sub_77DDBC(void*);
extern "C" void __stdcall sub_77E698(void*, void*);
extern "C" void* __stdcall sub_438E50(void*);

Item::Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner)
    : Descriptor(name, attributes), owner(owner), value(value), index(index)
{
}
