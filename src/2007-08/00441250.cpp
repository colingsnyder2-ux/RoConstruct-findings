// from server: 36% by colin
struct Descriptor {
    Descriptor(const char*, int);
};

struct EnumDescriptor;

struct Item : Descriptor {
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;
    Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner);
};

struct EnumDescriptor {
    void addItem(const Item* item);
};

struct Name {
    Name(const char*);
    ~Name();
};

extern "C" void __stdcall sub_77DD74(void*, const char*);
extern "C" void __stdcall sub_77DDBC(void*);
extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __stdcall sub_698700(void*);
extern "C" void __stdcall sub_440440(void*, const Item*);

Item::Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner)
    : Descriptor(name, attributes), owner(owner), value(value), index(index)
{
    Name n(name);
    sub_698700(this);
    const Item* self = this;
    sub_440440((void*)&owner, self);
    sub_77E6AC(&n);
}
