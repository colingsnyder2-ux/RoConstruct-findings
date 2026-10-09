// roc 2008-06 00568430  unit: boost::lock_error  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568430
//
// 00568430  56                   push esi
// 00568431  8bf1                 mov esi, ecx
// 00568433  ff1598288000         call dword ptr [0x802898]
// 00568439  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00568440  c706d4048100         mov dword ptr [esi], 0x8104d4
// 00568446  8bc6                 mov eax, esi
// 00568448  5e                   pop esi
// 00568449  c3                   ret 
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
