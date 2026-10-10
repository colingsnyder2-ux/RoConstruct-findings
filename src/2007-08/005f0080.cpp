// from server: 59% by colin
struct BaseClass {
    void construct();
};

extern "C" void __stdcall sub_5EFF80(int);
extern "C" void __stdcall sub_77E6A4();

struct FactoryProduct : BaseClass {
    FactoryProduct();
};

FactoryProduct::FactoryProduct()
{
    sub_5EFF80(0x7bbd28);
    *(int*)((char*)this + 0xe8) = 0x7a4c8c;
    *(int*)((char*)this + 0xec) = -1;
    *(int*)((char*)this + 0xf0) = -1;
    *(int*)((char*)this + 0xf4) = 0;
    *(int*)((char*)this + 0x00) = 0x7c0094;
    *(int*)((char*)this + 0x04) = 0x7c008c;
    *(int*)((char*)this + 0x10) = 0x7c0084;
    *(int*)((char*)this + 0x14) = 0x7c0074;
    *(int*)((char*)this + 0x2c) = 0x7c0064;
    *(int*)((char*)this + 0x44) = 0x7c0054;
    *(int*)((char*)this + 0x5c) = 0x7c0044;
    *(int*)((char*)this + 0x74) = 0x7c0034;
    *(int*)((char*)this + 0x8c) = 0x7c0024;
    *(int*)((char*)this + 0xe8) = 0x7c000c;
    sub_77E6A4();
}
