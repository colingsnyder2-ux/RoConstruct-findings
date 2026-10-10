// from server: 35% by colin
struct EnumDescriptor;

struct Descriptor {
    Descriptor(const char* name, int attributes);
};

struct Item : Descriptor {
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;
    Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner);
};

struct EnumDescriptor {
    void addItem(const Item* item);
    int convertToIndex(const Item* item);
};

extern "C" void* __stdcall sub_77DD74(void*);
extern "C" void __stdcall sub_77DDBC(void*);

Item::Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner)
    : Descriptor(name, attributes), owner(owner), value(value), index(index)
{
    void* local;
    sub_77DD74(&local);
    EnumDescriptor* ed = (EnumDescriptor*)this;
    ed->addItem(this);
    int idx = ed->convertToIndex(this);
    sub_77DDBC(&local);
}
