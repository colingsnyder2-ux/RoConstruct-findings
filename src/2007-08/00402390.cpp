// from server: 100% by colin
// roc 2007-08 00402390  unit: VCWorkspace::?$CComObject  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00402390
//
// 00402390  8bc1                 mov eax, ecx
// 00402392  c70000000000         mov dword ptr [eax], 0
// 00402398  c7400400000000       mov dword ptr [eax + 4], 0
// 0040239f  c74008ffffffff       mov dword ptr [eax + 8], 0xffffffff
// 004023a6  c3                   ret 

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
