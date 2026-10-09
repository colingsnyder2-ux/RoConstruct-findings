// roc 2011-06 00407120  unit: VCRbxObject::?$CComObjectNoLock  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00407120
//
// 00407120  8bc1                 mov eax, ecx
// 00407122  c70000000000         mov dword ptr [eax], 0
// 00407128  c7400400000000       mov dword ptr [eax + 4], 0
// 0040712f  c74008ffffffff       mov dword ptr [eax + 8], 0xffffffff
// 00407136  c3                   ret 
// copied from an identical function in another client (function ?init@S@ns_ROCX000034@@QAEPAU12@XZ)

namespace ns_ROCX000034 {
struct S {
    int a;
    int b;
    int c;
    S* init();
};

S* S::init()
{
    a = 0;
    b = 0;
    c = -1;
    return this;
}
}
