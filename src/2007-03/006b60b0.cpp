// roc 2007-03 006b60b0  unit: seg_006b0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b60b0
//
// 006b60b0  8b442404             mov eax, dword ptr [esp + 4]
// 006b60b4  83c020               add eax, 0x20
// 006b60b7  89442404             mov dword ptr [esp + 4], eax
// 006b60bb  83c120               add ecx, 0x20
// 006b60be  e9adfeffff           jmp 0x6b5f70
// copied from an identical function in another client (function ?f@CXTPReportHyperlink@ns_ROCX00001e@@QAEXPAH@Z)

namespace ns_ROCX00001e {
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
