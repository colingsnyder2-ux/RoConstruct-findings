// roc 2009-12 00406530  unit: VCApp::?$CComObject  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00406530
//
// 00406530  8bc1                 mov eax, ecx
// 00406532  c70000000000         mov dword ptr [eax], 0
// 00406538  c7400400000000       mov dword ptr [eax + 4], 0
// 0040653f  c74008ffffffff       mov dword ptr [eax + 8], 0xffffffff
// 00406546  c3                   ret 
// copied from an identical function in another client (function ?init@S@ns_ROCX000064@@QAEPAU12@XZ)

namespace ns_ROCX000064 {
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
