// roc 2010-06 00857350  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00857350
//
// 00857350  8b442404             mov eax, dword ptr [esp + 4]
// 00857354  83c020               add eax, 0x20
// 00857357  89442404             mov dword ptr [esp + 4], eax
// 0085735b  83c120               add ecx, 0x20
// 0085735e  e9addffeff           jmp 0x845310
// copied from an identical function in another client (function ?f@CXTPReportHyperlink@ns_ROCX000014@@QAEXPAH@Z)

namespace ns_ROCX000014 {
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
