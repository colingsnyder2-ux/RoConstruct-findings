// from server: 100% by king_originala
// roc 2008-06 00601d00  unit: RBX::VTool::?$BoundPropGetSet  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00601d00
//
// 00601d00  8b442408             mov eax, dword ptr [esp + 8]
// 00601d04  56                   push esi
// 00601d05  8bf1                 mov esi, ecx
// 00601d07  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00601d0b  50                   push eax
// 00601d0c  51                   push ecx
// 00601d0d  8bce                 mov ecx, esi
// 00601d0f  e83cffffff           call 0x601c50
// 00601d14  c7062c238400         mov dword ptr [esi], 0x84232c
// 00601d1a  c746101c238400       mov dword ptr [esi + 0x10], 0x84231c
// 00601d21  c7461414238400       mov dword ptr [esi + 0x14], 0x842314
// 00601d28  c746200c238400       mov dword ptr [esi + 0x20], 0x84230c
// 00601d2f  c74624fc228400       mov dword ptr [esi + 0x24], 0x8422fc
// 00601d36  c74644ec228400       mov dword ptr [esi + 0x44], 0x8422ec
// 00601d3d  c74664dc228400       mov dword ptr [esi + 0x64], 0x8422dc
// 00601d44  c78684000000cc228400 mov dword ptr [esi + 0x84], 0x8422cc
// 00601d4e  c786a4000000bc228400 mov dword ptr [esi + 0xa4], 0x8422bc
// 00601d58  c786c4000000ac228400 mov dword ptr [esi + 0xc4], 0x8422ac
// 00601d62  c78630010000a4228400 mov dword ptr [esi + 0x130], 0x8422a4
// 00601d6c  8bc6                 mov eax, esi
// 00601d6e  5e                   pop esi
// 00601d6f  c20800               ret 8

struct S {
    unsigned int words[77];
    void init(int a, int b);
    S* f(int a, int b);
};

S* S::f(int a, int b)
{
    init(a, b);
    words[0]  = 0x0084232c;
    words[4]  = 0x0084231c;
    words[5]  = 0x00842314;
    words[8]  = 0x0084230c;
    words[9]  = 0x008422fc;
    words[17] = 0x008422ec;
    words[25] = 0x008422dc;
    words[33] = 0x008422cc;
    words[41] = 0x008422bc;
    words[49] = 0x008422ac;
    words[76] = 0x008422a4;
    return this;
}
