// roc 2010-06 00406430  unit: VCApp::?$CComObject  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00406430
//
// 00406430  8bc1                 mov eax, ecx
// 00406432  c70000000000         mov dword ptr [eax], 0
// 00406438  c7400400000000       mov dword ptr [eax + 4], 0
// 0040643f  c74008ffffffff       mov dword ptr [eax + 8], 0xffffffff
// 00406446  c3                   ret 
// copied from an identical function in another client (function ?init@S@ns_ROCX000060@@QAEPAU12@XZ)

namespace ns_ROCX000060 {
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
