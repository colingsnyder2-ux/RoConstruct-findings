// from server: 52% by colin
struct Descriptor {
    Descriptor(const char*, unsigned int);
};

struct EnumDescriptor;

struct Item : Descriptor {
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;
    Item(const char* name, unsigned int attributes, int value, unsigned int index, const EnumDescriptor& owner);
};

struct EnumDescriptor {
    void addItem(const Item* item) const;
};

struct String {
    void assign(const char*);
    ~String();
};

extern "C" {
    void* __stdcall sub_77DD74();
    void __stdcall sub_77DDBC(String*);
}

void __stdcall sub_698700();

Item::Item(const char* name, unsigned int attributes, int value, unsigned int index, const EnumDescriptor& owner)
    : Descriptor(name, attributes), owner(owner), value(value), index(index)
{
    String str;
    sub_77DD74();
    sub_698700();
    owner.addItem(this);
    sub_77DDBC(&str);
}
