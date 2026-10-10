// from server: 56% by colin
struct EnumDescriptor;

struct Descriptor {
    Descriptor(const char* name, int attributes);
    virtual ~Descriptor();
    virtual bool convertToValue(void* value) const;
    virtual bool convertToString(void* value) const;
};

struct Item : Descriptor {
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;
    Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner);
};

struct EnumDescriptor {
    void construct(const char* typeName, const Item* item) const;
    void setValue(bool b) const;
};

extern "C" {
    int __stdcall MultiByteToWideChar(unsigned int CodePage, unsigned long dwFlags, const char* lpMultiByteStr, int cbMultiByte, void* lpWideCharStr, int cchWideChar);
}

Item::Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner)
    : Descriptor(name, attributes), owner(owner), value(value), index(index)
{
    this->owner.construct(name, this);
    this->owner.setValue(true);
}
