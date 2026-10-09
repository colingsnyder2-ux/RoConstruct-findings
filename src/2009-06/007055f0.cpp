// roc 2009-06 007055f0  unit: boost::lock_error  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007055f0
//
// 007055f0  56                   push esi
// 007055f1  8bf1                 mov esi, ecx
// 007055f3  ff15b8e98900         call dword ptr [0x89e9b8]
// 007055f9  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00705600  c706c8f28a00         mov dword ptr [esi], 0x8af2c8
// 00705606  8bc6                 mov eax, esi
// 00705608  5e                   pop esi
// 00705609  c3                   ret 
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
