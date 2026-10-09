// roc 2008-06 0074f120  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074f120
//
// 0074f120  8b442404             mov eax, dword ptr [esp + 4]
// 0074f124  83c020               add eax, 0x20
// 0074f127  89442404             mov dword ptr [esp + 4], eax
// 0074f12b  83c120               add ecx, 0x20
// 0074f12e  e96dfeffff           jmp 0x74efa0
// copied from an identical function in another client (function ?f@CXTPReportHyperlink@ns_ROCX000022@@QAEXPAH@Z)

namespace ns_ROCX000022 {
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
