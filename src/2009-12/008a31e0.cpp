// roc 2009-12 008a31e0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a31e0
//
// 008a31e0  8b442404             mov eax, dword ptr [esp + 4]
// 008a31e4  83c020               add eax, 0x20
// 008a31e7  89442404             mov dword ptr [esp + 4], eax
// 008a31eb  83c120               add ecx, 0x20
// 008a31ee  e96dfeffff           jmp 0x8a3060
// copied from an identical function in another client (function ?f@CXTPReportHyperlink@ns_ROCX000018@@QAEXPAH@Z)

namespace ns_ROCX000018 {
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
