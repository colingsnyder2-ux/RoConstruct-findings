// roc 2009-12 0040e6e0  unit: VCApp::?$CComObject  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040e6e0
//
// 0040e6e0  8b442404             mov eax, dword ptr [esp + 4]
// 0040e6e4  ff4018               inc dword ptr [eax + 0x18]
// 0040e6e7  8b4018               mov eax, dword ptr [eax + 0x18]
// 0040e6ea  c20400               ret 4
// copied from an identical function in another client (function ?sub_0040b800@ns_ROCX000000@@YGJPAUS@1@@Z)

namespace ns_ROCX000000 {
struct S { int pad[6]; long m; };

long __stdcall sub_0040b800(S* p)
{
    ++p->m;
    return p->m;
}
}
