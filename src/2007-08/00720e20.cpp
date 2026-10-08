// from server: 100% by colin
// roc 2007-08 00720e20  unit: CXTCaptionButtonThemeOfficeXP  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720e20
//
// 00720e20  56                   push esi
// 00720e21  6a00                 push 0
// 00720e23  8bf1                 mov esi, ecx
// 00720e25  e896fdffff           call 0x720bc0
// 00720e2a  8b442408             mov eax, dword ptr [esp + 8]
// 00720e2e  89467c               mov dword ptr [esi + 0x7c], eax
// 00720e31  c7061c247e00         mov dword ptr [esi], 0x7e241c
// 00720e37  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00720e3e  c7868000000000000000 mov dword ptr [esi + 0x80], 0
// 00720e48  c7868400000000000000 mov dword ptr [esi + 0x84], 0
// 00720e52  8bc6                 mov eax, esi
// 00720e54  5e                   pop esi
// 00720e55  c20400               ret 4

struct CXTCaptionButtonThemeOfficeXP {
    char pad0[0x18];
    int field18;
    char pad1[0x60];
    int field7c;
    int field80;
    int field84;
    void sub_720bc0(int);
    CXTCaptionButtonThemeOfficeXP* construct(int);
};

CXTCaptionButtonThemeOfficeXP* CXTCaptionButtonThemeOfficeXP::construct(int arg)
{
    sub_720bc0(0);
    field7c = arg;
    *(int*)this = 0x7e241c;
    field18 = 0;
    field80 = 0;
    field84 = 0;
    return this;
}
