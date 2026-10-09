// roc 2007-03 00402380  unit: seg_00400000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00402380
//
// 00402380  8bc1                 mov eax, ecx
// 00402382  c70000000000         mov dword ptr [eax], 0
// 00402388  c7400400000000       mov dword ptr [eax + 4], 0
// 0040238f  c74008ffffffff       mov dword ptr [eax + 8], 0xffffffff
// 00402396  c3                   ret 
// copied from an identical function in another client (function ?init@S@ns_ROCX000012@@QAEPAU12@XZ)

namespace ns_ROCX000012 {
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
