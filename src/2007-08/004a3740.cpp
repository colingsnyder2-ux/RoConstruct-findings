// from server: 25% by colin
struct Descriptor {
    void* vtable;
    Descriptor(const char* name, int attributes);
};

struct EnumDescriptor;

struct Item : Descriptor {
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;
    Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner);
};

extern "C" void* __cdecl operator_new(unsigned int size);

Item::Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner)
    : Descriptor(name, attributes)
    , owner(owner)
    , value(value)
    , index(index)
{
}
