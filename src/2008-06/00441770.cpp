// from server: 34% by colin
struct Item;

struct Descriptor {
    void construct(const char *name, int attributes);
};

struct EnumDescriptor;

struct Item : Descriptor {
    const EnumDescriptor &owner;
    const int value;
    const unsigned int index;
    Item(const char *name, int attributes, int value, unsigned int index, const EnumDescriptor &owner);
    void setValue(int v);
};

extern "C" {
    void __stdcall sub_803ED4(void *);
    void __stdcall sub_803F14(void *);
}

void __stdcall sub_711AC0(Item *self);
void __stdcall sub_4402D0(Item *self, int *out);

Item::Item(const char *name, int attributes, int value, unsigned int index, const EnumDescriptor &owner)
    : owner(owner), value(value), index(index)
{
    Descriptor::construct(name, attributes);
    int v = this->value;
    sub_4402D0(this, &v);
}
