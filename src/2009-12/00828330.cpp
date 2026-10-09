// roc 2009-12 00828330  unit: CXTPReportColumn  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00828330
//
// 00828330  56                   push esi
// 00828331  8bf1                 mov esi, ecx
// 00828333  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00828336  85c9                 test ecx, ecx
// 00828338  740e                 je 0x828348
// 0082833a  8b01                 mov eax, dword ptr [ecx]
// 0082833c  8b5068               mov edx, dword ptr [eax + 0x68]
// 0082833f  ffd2                 call edx
// 00828341  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 00828348  5e                   pop esi
// 00828349  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000008@CXTPReportColumn@ns_ROCX000008@@QAEXXZ)

namespace ns_ROCX000008 {
struct CXTPReportColumn
{
    void fn_ROCX000008();
};

void CXTPReportColumn::fn_ROCX000008()
{
    if (*(void**)((char*)this + 0x2c) != 0)
    {
        void* p = *(void**)((char*)this + 0x2c);
        (*(void (__thiscall**)(void*))(*(int*)p + 0x68))(p);
        *(int*)((char*)this + 0x2c) = 0;
    }
}
}
