// from server: 35% by colin
struct Descriptor {
    Descriptor(const char* name, int attributes);
};

struct EnumDescriptor;

struct Item : Descriptor {
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;
    Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner);
    void construct(const char* name, int attributes);
    void setFlag1(unsigned int v);
    void setFlag2(unsigned int v);
    void finish();
};

extern "C" void __stdcall sub_77DDB8(void*);

Item::Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner)
    : Descriptor(name, attributes), owner(owner), value(value), index(index)
{
    this->construct(name, attributes);
    this->setFlag1(2);
    this->setFlag2(0);
    sub_77DDB8(0);
    this->finish();
}
