// roc 2009-06 007c8400  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c8400
//
// 007c8400  8b442404             mov eax, dword ptr [esp + 4]
// 007c8404  83c020               add eax, 0x20
// 007c8407  89442404             mov dword ptr [esp + 4], eax
// 007c840b  83c120               add ecx, 0x20
// 007c840e  e97dfeffff           jmp 0x7c8290
// copied from an identical function in another client (function ?f@CXTPReportHyperlink@ns_ROCX00000a@@QAEXPAH@Z)

namespace ns_ROCX00000a {
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
