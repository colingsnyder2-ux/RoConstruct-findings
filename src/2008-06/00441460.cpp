// from server: 21% by colin




extern "C" {
    int __stdcall mfc_300();
    int __stdcall mfc_601();
}

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
    virtual int getEnumCount() const;
};

Item::Item(const char* name, unsigned int attributes, int value_, unsigned int index_, const EnumDescriptor& owner_)
    : Descriptor(name, attributes)
    , owner(owner_)
    , value(value_)
    , index(index_)
{
    owner.addItem(this);
}
