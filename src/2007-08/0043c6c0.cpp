// from server: 30% by colin
struct Descriptor {
    void construct(const char* name, unsigned int attributes);
};

struct EnumDescriptor;

struct Item : Descriptor {
    const EnumDescriptor& owner;
    const int value;
    const unsigned int index;
    Item(const char* name, unsigned int attributes, int value, unsigned int index, const EnumDescriptor& owner);
};

struct EnumDescriptor {
    void* vtable0;
    void* vtable20;
    unsigned int field_f0;
    unsigned int field_10c;
    unsigned int field_124;
    void construct(const char* typeName);
    void setEnumCount(unsigned char count);
};

struct Name {
    void* stringRep;
    const char* c_str();
};

extern "C" {
    void* __stdcall sub_77E6A8(void*);
    void* __stdcall sub_77DDB8(void*, void*);
}

void EnumDescriptor::construct(const char* typeName)
{
    void* str = sub_77E6A8((char*)this + 4);
    void* tmp = sub_77DDB8(str, 0);
    (void)tmp;
    this->field_f0 = 1;
    this->vtable0 = (void*)0x78db94;
    this->vtable20 = (void*)0x78db34;
    *(void**)((char*)this + 0x10c) = (void*)0x78db2c;
    this->field_124 = (unsigned int)typeName;
    unsigned char b = ((Name*)typeName)->c_str() != 0;
    this->setEnumCount(b);
}
