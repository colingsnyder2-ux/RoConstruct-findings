// roc 2007-03 00726b70  unit: seg_00720000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00726b70
//
// 00726b70  56                   push esi
// 00726b71  8bf1                 mov esi, ecx
// 00726b73  ff1560e97700         call dword ptr [0x77e960]
// 00726b79  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00726b80  c7068c6d7e00         mov dword ptr [esi], 0x7e6d8c
// 00726b86  8bc6                 mov eax, esi
// 00726b88  5e                   pop esi
// 00726b89  c3                   ret 
// copied from an identical function in another client (function ?init@S@ns_ROCX000005@@QAEPAU12@XZ)

namespace ns_ROCX000005 {
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
