// from server: 37% by colin
struct Descriptor {
    void* vtable;
    char pad[0x1c];
    void* name;
};

struct EnumDescriptor;

struct Item : Descriptor {
    char pad0[0xcc];
    int field_f0;
    char pad1[0x24];
    void* field_118;
    const EnumDescriptor* owner;
    const int value;
    const unsigned int index;
    Item(const char* name, unsigned int attributes, int value, unsigned int index, const EnumDescriptor* owner);
};

struct EnumDescriptor {
    void* vtable;
    char pad[0x1c];
    void* name;
    char pad2[0xcc];
    int field_f0;
    char pad3[0x0c];
    void* field_100;
    char pad4[0x14];
    void* field_118;

    EnumDescriptor(const char* typeName);
    void convertToValue(unsigned int index, void* variant);
    void convertToString(unsigned int index, void* str);
};

extern "C" {
    const char* __stdcall c_str_std_string(void* str);
}

void __stdcall sub_69a040(void* self, const char* s, void* a, void* b);
void __stdcall sub_43b5d0(void* self, void* a, void* b);
void __stdcall sub_698cc0(void* self, unsigned char a);

Item::Item(const char* name, unsigned int attributes, int value, unsigned int index, const EnumDescriptor* owner)
    : Descriptor()
    , owner(owner)
    , value(value)
    , index(index)
{
    const char* s = c_str_std_string((char*)name + 4);
    sub_69a040(this, s, 0, 0);

    sub_43b5d0((char*)this + 0x100, (void*)owner, (void*)index);

    this->field_f0 = 1;
    *(void**)this = (void*)0x78dd04;
    *(void**)((char*)this + 0x20) = (void*)0x78dca4;
    *(void**)((char*)this + 0x100) = (void*)0x78dc9c;
    this->field_118 = (void*)owner;

    void** vt = *(void***)owner;
    unsigned char r = ((unsigned char (__thiscall*)(void*))vt[1])((void*)owner);
    sub_698cc0(this, r);
}
