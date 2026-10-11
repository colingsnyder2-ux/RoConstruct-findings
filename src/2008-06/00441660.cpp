// from server: 39% by colin
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

extern "C" void __stdcall sub_803ED4(void*, const char*);
extern "C" void __stdcall sub_803F14(void*);

struct EnumDescriptor {
    void sub_711AC0();
    void* sub_43FF70(void*);
    Item* createItem(const char* name, int attributes, int value, unsigned int index);
};

Item* EnumDescriptor::createItem(const char* name, int attributes, int value, unsigned int index) {
    char buf[16];
    sub_803ED4(buf, name);
    sub_711AC0();
    void* p = (this->*(void* (EnumDescriptor::*)(void*))0)(buf);
    return (Item*)sub_43FF70(p);
}
