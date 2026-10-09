// roc 2009-06 00406860  unit: VCApp::?$CComObject  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00406860
//
// 00406860  8bc1                 mov eax, ecx
// 00406862  c70000000000         mov dword ptr [eax], 0
// 00406868  c7400400000000       mov dword ptr [eax + 4], 0
// 0040686f  c74008ffffffff       mov dword ptr [eax + 8], 0xffffffff
// 00406876  c3                   ret 
// copied from an identical function in another client (function ?init@S@ns_ROCX000056@@QAEPAU12@XZ)

namespace ns_ROCX000056 {
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
