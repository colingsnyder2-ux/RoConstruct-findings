// from server: 26% by colin
struct VColor3Value {
    char pad[0xe8];
    int field_e8;
};

struct FactoryProduct {
    char pad[0xe8];
    int field_e8;
    void method();
};

extern "C" void __stdcall sub_5f57f0();
extern "C" void __stdcall sub_541bf0();
extern "C" void __stdcall sub_77e698();
extern "C" void __stdcall sub_77e6ac();

void FactoryProduct::method()
{
    sub_5f57f0();
    this->field_e8 = 0;
    sub_77e698();
    sub_541bf0();
    sub_77e6ac();
}
