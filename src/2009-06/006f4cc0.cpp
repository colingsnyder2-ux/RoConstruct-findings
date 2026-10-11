// from server: 100% by atomic.potato
// roc 2009-06 006f4cc0  unit: RBX::HUMAN::GettingUp  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f4cc0
//
// 006f4cc0  8bc1                 mov eax, ecx
// 006f4cc2  33c9                 xor ecx, ecx
// 006f4cc4  894804               mov dword ptr [eax + 4], ecx
// 006f4cc7  c74008ffffffff       mov dword ptr [eax + 8], 0xffffffff
// 006f4cce  894810               mov dword ptr [eax + 0x10], ecx
// 006f4cd1  894814               mov dword ptr [eax + 0x14], ecx
// 006f4cd4  89480c               mov dword ptr [eax + 0xc], ecx
// 006f4cd7  c3                   ret 

struct RBX_HUMAN_GettingUp
{
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    RBX_HUMAN_GettingUp* init();
};

RBX_HUMAN_GettingUp* RBX_HUMAN_GettingUp::init()
{
    field_4 = 0;
    field_8 = -1;
    field_10 = 0;
    field_14 = 0;
    field_c = 0;
    return this;
}
