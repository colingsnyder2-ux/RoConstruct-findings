// roc 2008-06 005683f0  unit: RBX::Selection  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005683f0
//
// 005683f0  56                   push esi
// 005683f1  8bf1                 mov esi, ecx
// 005683f3  ff1598288000         call dword ptr [0x802898]
// 005683f9  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00568400  c706a8b48000         mov dword ptr [esi], 0x80b4a8
// 00568406  8bc6                 mov eax, esi
// 00568408  5e                   pop esi
// 00568409  c3                   ret 
// copied from an identical function in another client (function ?init@S@ns_ROCX000001@@QAEPAU12@XZ)

namespace ns_ROCX000001 {
struct S {
    void* vfptr;
    int pad[2];
    int field_c;
    S* init();
};

extern "C" void (__stdcall *sub_77e6f8)();
extern void* sub_78527c;

S* S::init()
{
    sub_77e6f8();
    field_c = 0;
    vfptr = &sub_78527c;
    return this;
}
}
