// roc 2010-06 0047ccc0  unit: VCContent::?$CComObject  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047ccc0
//
// 0047ccc0  8b442404             mov eax, dword ptr [esp + 4]
// 0047ccc4  ff4008               inc dword ptr [eax + 8]
// 0047ccc7  8b4008               mov eax, dword ptr [eax + 8]
// 0047ccca  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX00000e@@QAEHPAH@Z)

namespace ns_ROCX00000e {
struct S {
    int f(int* p);
};

int S::f(int* p)
{
    p[2] = p[2] + 1;
    return p[2];
}
}
