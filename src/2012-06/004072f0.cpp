// roc 2012-06 004072f0  unit: ATL::VCComClassFactory::?$CComObjectNoLock  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004072f0
//
// 004072f0  8bc1                 mov eax, ecx
// 004072f2  c70000000000         mov dword ptr [eax], 0
// 004072f8  c7400400000000       mov dword ptr [eax + 4], 0
// 004072ff  c74008ffffffff       mov dword ptr [eax + 8], 0xffffffff
// 00407306  c3                   ret 
// copied from an identical function in another client (function ?init@S@ns_ROCX000057@@QAEPAU12@XZ)

namespace ns_ROCX000057 {
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
