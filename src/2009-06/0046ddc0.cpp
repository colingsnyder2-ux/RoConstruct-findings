// roc 2009-06 0046ddc0  unit: VCContent::?$CComObject  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046ddc0
//
// 0046ddc0  8b442404             mov eax, dword ptr [esp + 4]
// 0046ddc4  ff4008               inc dword ptr [eax + 8]
// 0046ddc7  8b4008               mov eax, dword ptr [eax + 8]
// 0046ddca  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000023@@QAEHPAH@Z)

namespace ns_ROCX000023 {
struct S {
    int f(int* p);
};

int S::f(int* p)
{
    p[2] = p[2] + 1;
    return p[2];
}
}
