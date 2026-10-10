// from server: 40% by colin
struct CXTButtonThemeFactory
{
    char pad0[0x14];
    int field14;
    int field18;
    int field1c;
    char field20[0xc];
    char field2c[0xc];
    char field38[0xc];
    char field44[0xc];
    char field50[0xc];
    char field5c[0xc];
    char field68[0xc];
    char field74[0x8];

    CXTButtonThemeFactory();
};

extern "C" void __stdcall sub_00691950();
extern "C" void __stdcall sub_006684a0();
extern "C" void __stdcall sub_0069e7a0();

CXTButtonThemeFactory::CXTButtonThemeFactory()
{
    sub_00691950();
    field1c = 0;
    field14 = 1;
    field18 = 1;
    *(void**)this = (void*)0x7e232c;
    sub_006684a0();
    sub_006684a0();
    sub_006684a0();
    sub_006684a0();
    sub_006684a0();
    sub_006684a0();
    sub_006684a0();
    sub_0069e7a0();
}
