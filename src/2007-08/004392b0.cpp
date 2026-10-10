// from server: 45% by colin
struct Descriptor
{
    void* vtable;
    void* name;
};

struct EnumDescriptor;

struct Item : Descriptor
{
    const EnumDescriptor* owner;
    const int value;
    const unsigned int index;

    Item(const char* name, unsigned int attributes, int value, unsigned int index, const EnumDescriptor* owner);
};

struct EnumDescriptor
{
    bool convertToString(unsigned int index, void* value) const;
};

extern "C" void* __stdcall getSomething();
extern "C" void* __stdcall getSomething2();
extern "C" void __stdcall releaseSomething(void* p);
extern "C" void __stdcall releaseSomething2(void* p);
extern "C" void __stdcall stringCtor(void* s, const char* str);
extern "C" void __stdcall stringDtor(void* s);

Item::Item(const char* name, unsigned int attributes, int value, unsigned int index, const EnumDescriptor* owner)
    : owner(owner), value(value), index(index)
{
    char buf[8];
    stringCtor(buf, name);
    void* tmp = getSomething();
    getSomething2();
    bool result = this->owner->convertToString(this->index, buf);
    stringDtor(buf);
    releaseSomething(tmp);
    releaseSomething2(buf);
}
