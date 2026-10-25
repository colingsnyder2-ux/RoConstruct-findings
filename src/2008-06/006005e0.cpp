// from server: 100% by king_originala
// roc 2008-06 006005e0  unit: RBX::VTool::?$BoundPropGetSet  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006005e0
//
// 006005e0  56                   push esi
// 006005e1  8bf1                 mov esi, ecx
// 006005e3  e8e833f7ff           call 0x5739d0
// 006005e8  d9442408             fld dword ptr [esp + 8]
// 006005ec  c7064c208400         mov dword ptr [esi], 0x84204c
// 006005f2  c746103c208400       mov dword ptr [esi + 0x10], 0x84203c
// 006005f9  c7461434208400       mov dword ptr [esi + 0x14], 0x842034
// 00600600  c746202c208400       mov dword ptr [esi + 0x20], 0x84202c
// 00600607  c746241c208400       mov dword ptr [esi + 0x24], 0x84201c
// 0060060e  c746440c208400       mov dword ptr [esi + 0x44], 0x84200c
// 00600615  c74664fc1f8400       mov dword ptr [esi + 0x64], 0x841ffc
// 0060061c  c78684000000ec1f8400 mov dword ptr [esi + 0x84], 0x841fec
// 00600626  c786a4000000dc1f8400 mov dword ptr [esi + 0xa4], 0x841fdc
// 00600630  c786c4000000cc1f8400 mov dword ptr [esi + 0xc4], 0x841fcc
// 0060063a  c78630010000c41f8400 mov dword ptr [esi + 0x130], 0x841fc4
// 00600644  d99e3c010000         fstp dword ptr [esi + 0x13c]
// 0060064a  d944240c             fld dword ptr [esp + 0xc]
// 0060064e  8bc6                 mov eax, esi
// 00600650  d99e40010000         fstp dword ptr [esi + 0x140]
// 00600656  5e                   pop esi
// 00600657  c20800               ret 8

struct Base
{
    volatile unsigned long words[79];
    Base();
};

struct S : Base
{
    volatile float first;
    volatile float second;
    S(float, float);
};

S::S(float a, float b)
{
    words[0] = 0x0084204c;
    words[4] = 0x0084203c;
    words[5] = 0x00842034;
    words[8] = 0x0084202c;
    words[9] = 0x0084201c;
    words[17] = 0x0084200c;
    words[25] = 0x00841ffc;
    words[33] = 0x00841fec;
    words[41] = 0x00841fdc;
    words[49] = 0x00841fcc;
    words[76] = 0x00841fc4;
    first = a;
    second = b;
}
