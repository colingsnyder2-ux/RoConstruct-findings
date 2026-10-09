// roc 2007-03 0040cc80  unit: seg_00400000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040cc80
//
// 0040cc80  8b442404             mov eax, dword ptr [esp + 4]
// 0040cc84  83401801             add dword ptr [eax + 0x18], 1
// 0040cc88  8b4018               mov eax, dword ptr [eax + 0x18]
// 0040cc8b  c20400               ret 4
// copied from an identical function in another client (function ?sub_0040b800@ns_ROCX000016@@YGJPAUS@1@@Z)

namespace ns_ROCX000016 {
struct S { int pad[6]; long m; };

long __stdcall sub_0040b800(S* p)
{
    ++p->m;
    return p->m;
}
}
