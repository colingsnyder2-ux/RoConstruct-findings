// from server: 43% by colin
struct Descriptor {
    void* vtable;
    Descriptor(const char* name, unsigned int attributes);
};

struct EnumDescriptor;

struct Item : Descriptor {
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;
    Item(const char* name, unsigned int attributes, int value, unsigned int index, const EnumDescriptor& owner);
};

extern "C" void* __cdecl operator_new(unsigned int size);

Item::Item(const char* name, unsigned int attributes, int value, unsigned int index, const EnumDescriptor& owner)
    : Descriptor(name, attributes), owner(owner), value(value), index(index)
{
}

void* Item_ctor(Item* self, const char* name, unsigned int attributes, int value, unsigned int index, const EnumDescriptor& owner)
{
    self->vtable = 0;
    void* mem = operator_new(0x14);
    if (mem) {
        *(int*)((char*)mem + 4) = 1;
        *(int*)((char*)mem + 8) = 1;
        *(void**)mem = (void*)0x79d40c;
        *(int*)((char*)mem + 0xc) = value;
    } else {
        mem = 0;
    }
    self->vtable = mem;
    return self;
}
