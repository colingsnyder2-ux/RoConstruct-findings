// from server: 61% by colin
struct Name {
    char pad[0x100];
};

struct VInstance {
    char pad0[0xe8];
    void* vtable_e8;
    int field_ec;
    int field_f0;
    int field_f4;
    int field_f8;
    int field_fc;
    int field_100;
    int field_104;
};

struct NonFactoryProduct : VInstance {
    NonFactoryProduct();
};

extern "C" void __stdcall sub_5dd510();
extern "C" void __stdcall sub_541bf0();
extern "C" void* __stdcall sub_77e698();
extern "C" void __stdcall sub_77e6ac();

extern "C" void __stdcall basic_string_ctor(void* self, const char* str);
extern "C" void __stdcall basic_string_dtor(void* self);

NonFactoryProduct::NonFactoryProduct()
{
    char buf[0x1c];
    sub_5dd510();
    this->field_f8 = 0;
    this->vtable_e8 = (void*)0x7a4c8c;
    this->field_ec = -1;
    this->field_f0 = -1;
    this->field_f4 = 0;
    *(void**)this = (void*)0x7bc1c4;
    *(void**)((char*)this + 4) = (void*)0x7bc1bc;
    *(void**)((char*)this + 0x10) = (void*)0x7bc1b4;
    *(void**)((char*)this + 0x14) = (void*)0x7bc1a4;
    *(void**)((char*)this + 0x2c) = (void*)0x7bc194;
    *(void**)((char*)this + 0x44) = (void*)0x7bc184;
    *(void**)((char*)this + 0x5c) = (void*)0x7bc174;
    *(void**)((char*)this + 0x74) = (void*)0x7bc164;
    *(void**)((char*)this + 0x8c) = (void*)0x7bc154;
    this->vtable_e8 = (void*)0x7bc13c;
    this->field_f8 = 0;
    this->field_fc = 1;
    this->field_100 = 1;
    this->field_104 = 2;
    basic_string_ctor(buf, (const char*)0x7a903c);
    sub_541bf0();
    basic_string_dtor(buf);
}
