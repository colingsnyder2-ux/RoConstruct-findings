// from server: 40% by colin
struct BaseClass {
    BaseClass();
};

struct FactoryProduct : BaseClass {
    char pad[0x90];
    int field_0c;
    FactoryProduct();
};

extern "C" void __stdcall sub_5f04f0();
extern "C" int __stdcall sub_5f3ab0();

FactoryProduct::FactoryProduct()
{
    sub_5f04f0();
    *(int*)((char*)this + 0x00) = 0x7c0e6c;
    *(int*)((char*)this + 0x04) = 0x7c0e64;
    *(int*)((char*)this + 0x10) = 0x7c0e5c;
    *(int*)((char*)this + 0x14) = 0x7c0e4c;
    *(int*)((char*)this + 0x2c) = 0x7c0e3c;
    *(int*)((char*)this + 0x44) = 0x7c0e2c;
    *(int*)((char*)this + 0x5c) = 0x7c0e1c;
    *(int*)((char*)this + 0x74) = 0x7c0e0c;
    *(int*)((char*)this + 0x8c) = 0x7c0dfc;
    this->field_0c = sub_5f3ab0();
}
