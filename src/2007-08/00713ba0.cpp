// from server: 100% by colin
// roc 2007-08 00713ba0  unit: CXTCaptionButtonThemeFactory  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00713ba0
//
// 00713ba0  56                   push esi
// 00713ba1  6a00                 push 0
// 00713ba3  8bf1                 mov esi, ecx
// 00713ba5  e816d00000           call 0x720bc0
// 00713baa  c7066ceb7d00         mov dword ptr [esi], 0x7deb6c
// 00713bb0  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 00713bba  c7868000000000000000 mov dword ptr [esi + 0x80], 0
// 00713bc4  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00713bcb  8bc6                 mov eax, esi
// 00713bcd  5e                   pop esi
// 00713bce  c3                   ret 

struct CXTCaptionButtonThemeFactory
{
    char pad[0x18];
    int field_18;
    char pad2[0x64];
    int field_80;
    int field_84;
    CXTCaptionButtonThemeFactory();
};

extern "C" void __stdcall sub_720bc0(int);

CXTCaptionButtonThemeFactory::CXTCaptionButtonThemeFactory()
{
    sub_720bc0(0);
    *(int*)this = 0x7deb6c;
    field_84 = 0;
    field_80 = 0;
    field_18 = 0;
}
