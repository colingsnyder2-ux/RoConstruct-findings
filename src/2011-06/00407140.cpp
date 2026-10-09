// roc 2011-06 00407140  unit: VCApp::?$CComObject  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00407140
//
// 00407140  8b442404             mov eax, dword ptr [esp + 4]
// 00407144  ff4018               inc dword ptr [eax + 0x18]
// 00407147  8b4018               mov eax, dword ptr [eax + 0x18]
// 0040714a  c20400               ret 4
// copied from an identical function in another client (function ?sub_0040b800@ns_ROCX000019@@YGJPAUS@1@@Z)

namespace ns_ROCX000019 {
struct S { int pad[6]; long m; };

long __stdcall sub_0040b800(S* p)
{
    ++p->m;
    return p->m;
}
}
