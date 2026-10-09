// roc 2008-06 0074f100  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074f100
//
// 0074f100  8b442404             mov eax, dword ptr [esp + 4]
// 0074f104  83c020               add eax, 0x20
// 0074f107  89442404             mov dword ptr [esp + 4], eax
// 0074f10b  83c120               add ecx, 0x20
// 0074f10e  e95dfd0300           jmp 0x78ee70
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
