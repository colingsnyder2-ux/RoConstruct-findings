// roc 2011-06 008b8670  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8670
//
// 008b8670  8b442404             mov eax, dword ptr [esp + 4]
// 008b8674  83c020               add eax, 0x20
// 008b8677  89442404             mov dword ptr [esp + 4], eax
// 008b867b  83c120               add ecx, 0x20
// 008b867e  e96dfeffff           jmp 0x8b84f0
// copied from an identical function in another client (function ?f@CXTPReportHyperlink@ns_ROCX000015@@QAEXPAH@Z)

namespace ns_ROCX000015 {
struct CXTPReportHyperlink {
    void f(int* p);
};

extern "C" void __cdecl target();

void CXTPReportHyperlink::f(int* p)
{
    p = (int*)((char*)p + 0x20);
    ((void (__thiscall*)(void*, int*))&target)((char*)this + 0x20, p);
}
}
