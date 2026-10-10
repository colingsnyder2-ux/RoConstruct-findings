// from server: 50% by colin
struct S {
    char pad[0xfc];
    int field_fc;
    void sub_5f90a0();
    void setMaxItems(int value);
};

extern "C" void __stdcall sub_444710(const char* msg);
extern "C" void __cdecl sub_412dc0(void* a, void* b);
extern "C" void __cdecl sub_630b9e(void* a, void* b);
extern "C" void __stdcall sub_77e698(void* a);

void S::setMaxItems(int value) {
    if (value == this->field_fc)
        return;
    if (value < 0) {
        char buf[0x44];
        sub_77e698((void*)0x7c1de0);
        *(int*)(buf + 0x50) = 0;
        sub_412dc0(buf + 4, buf + 0x20);
        sub_630b9e(buf + 0x20, (void*)0x8410c0);
    }
    this->field_fc = value;
    sub_444710((const char*)0x8c7f2c);
    this->sub_5f90a0();
}
