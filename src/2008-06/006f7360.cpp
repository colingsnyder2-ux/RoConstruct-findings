// from server: 75% by colin
struct CXTPPrintPageHeaderFooter
{
    char pad0[0x20];
    char field20[0x3c];
    int field5c;
    char field60[4];
    char field64[4];
    char field68[4];
    char field6c[4];
    int field70;
    int field74;

    void* construct(int a, int b);
};

extern "C" void __stdcall sub_007bbfaa();
extern "C" void __stdcall sub_00803f04();
extern "C" int __stdcall SystemParametersInfoA(unsigned int, unsigned int, void*, unsigned int);

void* CXTPPrintPageHeaderFooter::construct(int a, int b)
{
    sub_007bbfaa();
    *(int*)this = 0x85a50c;
    sub_00803f04();
    sub_00803f04();
    sub_00803f04();
    sub_00803f04();
    this->field70 = b;
    this->field74 = a;
    SystemParametersInfoA(0x1f, 0x3c, this->field20, 0);
    this->field5c = 0;

    return this;
}
