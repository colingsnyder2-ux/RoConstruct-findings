// roc 2012-06 00407380  unit: VCApp::?$CComObject  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00407380
//
// 00407380  8b442404             mov eax, dword ptr [esp + 4]
// 00407384  ff4018               inc dword ptr [eax + 0x18]
// 00407387  8b4018               mov eax, dword ptr [eax + 0x18]
// 0040738a  c20400               ret 4
// copied from an identical function in another client (function ?sub_0040b800@ns_ROCX000002@@YGJPAUS@1@@Z)

namespace ns_ROCX000002 {
struct S { int pad[6]; long m; };

long __stdcall sub_0040b800(S* p)
{
    ++p->m;
    return p->m;
}
}
