// roc 2011-06 0083bc30  unit: CXTPReportControl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083bc30
//
// 0083bc30  56                   push esi
// 0083bc31  8bf1                 mov esi, ecx
// 0083bc33  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0083bc36  85c9                 test ecx, ecx
// 0083bc38  740e                 je 0x83bc48
// 0083bc3a  8b01                 mov eax, dword ptr [ecx]
// 0083bc3c  8b5068               mov edx, dword ptr [eax + 0x68]
// 0083bc3f  ffd2                 call edx
// 0083bc41  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 0083bc48  5e                   pop esi
// 0083bc49  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00000d@CXTPReportColumn@ns_ROCX00000d@@QAEXXZ)

namespace ns_ROCX00000d {
struct CXTPReportColumn
{
    void fn_ROCX00000d();
};

void CXTPReportColumn::fn_ROCX00000d()
{
    if (*(void**)((char*)this + 0x2c) != 0)
    {
        void* p = *(void**)((char*)this + 0x2c);
        (*(void (__thiscall**)(void*))(*(int*)p + 0x68))(p);
        *(int*)((char*)this + 0x2c) = 0;
    }
}
}
