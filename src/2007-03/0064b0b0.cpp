// roc 2007-03 0064b0b0  unit: seg_00640000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064b0b0
//
// 0064b0b0  56                   push esi
// 0064b0b1  8bf1                 mov esi, ecx
// 0064b0b3  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0064b0b6  85c9                 test ecx, ecx
// 0064b0b8  740e                 je 0x64b0c8
// 0064b0ba  8b01                 mov eax, dword ptr [ecx]
// 0064b0bc  8b5068               mov edx, dword ptr [eax + 0x68]
// 0064b0bf  ffd2                 call edx
// 0064b0c1  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 0064b0c8  5e                   pop esi
// 0064b0c9  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000001@CXTPReportColumn@ns_ROCX000001@@QAEXXZ)

namespace ns_ROCX000001 {
struct CXTPReportColumn
{
    void fn_ROCX000001();
};

void CXTPReportColumn::fn_ROCX000001()
{
    if (*(void**)((char*)this + 0x2c) != 0)
    {
        void* p = *(void**)((char*)this + 0x2c);
        (*(void (__thiscall**)(void*))(*(int*)p + 0x68))(p);
        *(int*)((char*)this + 0x2c) = 0;
    }
}
}
