// roc 2009-12 004770e0  unit: VCContent::?$CComObject  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004770e0
//
// 004770e0  8b442404             mov eax, dword ptr [esp + 4]
// 004770e4  ff4008               inc dword ptr [eax + 8]
// 004770e7  8b4008               mov eax, dword ptr [eax + 8]
// 004770ea  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000012@@QAEHPAH@Z)

namespace ns_ROCX000012 {
struct S {
    int f(int* p);
};

int S::f(int* p)
{
    p[2] = p[2] + 1;
    return p[2];
}
}
