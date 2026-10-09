// roc 2008-06 006d4e00  unit: CXTPReportColumn  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d4e00
//
// 006d4e00  56                   push esi
// 006d4e01  8bf1                 mov esi, ecx
// 006d4e03  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 006d4e06  85c9                 test ecx, ecx
// 006d4e08  740e                 je 0x6d4e18
// 006d4e0a  8b01                 mov eax, dword ptr [ecx]
// 006d4e0c  8b5068               mov edx, dword ptr [eax + 0x68]
// 006d4e0f  ffd2                 call edx
// 006d4e11  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 006d4e18  5e                   pop esi
// 006d4e19  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00000b@CXTPReportColumn@ns_ROCX00000b@@QAEXXZ)

namespace ns_ROCX00000b {
struct CXTPReportColumn
{
    void fn_ROCX00000b();
};

void CXTPReportColumn::fn_ROCX00000b()
{
    if (*(void**)((char*)this + 0x2c) != 0)
    {
        void* p = *(void**)((char*)this + 0x2c);
        (*(void (__thiscall**)(void*))(*(int*)p + 0x68))(p);
        *(int*)((char*)this + 0x2c) = 0;
    }
}
}
