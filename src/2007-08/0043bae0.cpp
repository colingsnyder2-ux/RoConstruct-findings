// from server: 39% by colin
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

struct EnumDescriptor {
    void addItem(const char* name, int attributes, int value, unsigned int index, const Item* item);
    void setValue(bool value);
};

struct String {
    const char* c_str() const;
};

extern "C" void* __stdcall sub_77e6a8(void*);

void sub_69a040();
void sub_698cc0();

Item::Item(const char* name, int attributes, int value, unsigned int index, const EnumDescriptor& owner)
    : Descriptor(name, attributes)
    , owner(owner)
    , value(value)
    , index(index)
{
    String* s = (String*)((char*)this + 4);
    const char* str = s->c_str();
    sub_69a040();
    ((EnumDescriptor*)((char*)this + 0x100))->addItem(name, attributes, value, index, this);
    *(int*)((char*)this + 0xf0) = 1;
    *(void**)((char*)this) = (void*)0x78d754;
    *(void**)((char*)this + 0x20) = (void*)0x78d6f4;
    *(void**)((char*)this + 0x100) = (void*)0x78d6ec;
    *(const EnumDescriptor**)((char*)this + 0x118) = &owner;
    bool b = ((const Item*)&owner)->value != 0;
    ((EnumDescriptor*)this)->setValue(b);
}
