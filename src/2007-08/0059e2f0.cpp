// from server: 47% by colin
struct EnumPropDescriptor {
    char pad[0x138];
    char field_138[0x1c];
    int field_154;
    void checkFlags();
    void setValue(const EnumPropDescriptor& other);
};

extern "C" int __stdcall sub_544FC0(void*, void*);
extern "C" int __stdcall sub_48E0D0(void*);
extern "C" void __stdcall sub_558B60(void*, int);
extern "C" void __stdcall sub_444710(void*, void*);
extern "C" void* __stdcall sub_77E690();

void EnumPropDescriptor::setValue(const EnumPropDescriptor& other) {
    if (sub_544FC0((void*)&other, (void*)field_138)) {
        sub_77E690();
        field_154 = other.field_154;
        void* p = (void*)sub_48E0D0((void*)this);
        if (p) {
            int zero = 0;
            sub_558B60((void*)((char*)p + 0x2d4), zero);
        }
        sub_444710((void*)this, (void*)0x8c51d8);
    }
}
