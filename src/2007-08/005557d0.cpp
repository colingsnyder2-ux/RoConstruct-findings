// from server: 90% by colin
// roc 2007-08 005557d0  unit: RBX::GuiTarget  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005557d0
//
// 005557d0  56                   push esi
// 005557d1  8bf1                 mov esi, ecx
// 005557d3  c7860c01000000000000 mov dword ptr [esi + 0x10c], 0
// 005557dd  e8ee161e00           call 0x736ed0
// 005557e2  d900                 fld dword ptr [eax]
// 005557e4  d99efc000000         fstp dword ptr [esi + 0xfc]
// 005557ea  d94004               fld dword ptr [eax + 4]
// 005557ed  d99e00010000         fstp dword ptr [esi + 0x100]
// 005557f3  d94008               fld dword ptr [eax + 8]
// 005557f6  d99e04010000         fstp dword ptr [esi + 0x104]
// 005557fc  d9400c               fld dword ptr [eax + 0xc]
// 005557ff  d99e08010000         fstp dword ptr [esi + 0x108]
// 00555805  c6861001000001       mov byte ptr [esi + 0x110], 1
// 0055580c  5e                   pop esi
// 0055580d  c3                   ret 

struct RBX_GuiTarget {
    char pad[0xfc];
    float field_fc;
    float field_100;
    float field_104;
    float field_108;
    int field_10c;
    unsigned char field_110;
    void init();
};

extern "C" float* __cdecl sub_736ed0();

void RBX_GuiTarget::init()
{
    field_10c = 0;
    float* p = sub_736ed0();
    field_fc = p[0];
    field_100 = p[1];
    field_104 = p[2];
    field_108 = p[3];
    field_110 = 1;
}
