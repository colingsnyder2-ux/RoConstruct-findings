// roc 2008-06 00402370  unit: VCWorkspace::?$CComObject  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00402370
//
// 00402370  8bc1                 mov eax, ecx
// 00402372  c70000000000         mov dword ptr [eax], 0
// 00402378  c7400400000000       mov dword ptr [eax + 4], 0
// 0040237f  c74008ffffffff       mov dword ptr [eax + 8], 0xffffffff
// 00402386  c3                   ret 
// copied from an identical function in another client (function ?init@S@ns_ROCX000003@@QAEPAU12@XZ)

namespace ns_ROCX000003 {
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
