// roc 2009-06 0074d570  unit: CXTPReportColumn  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074d570
//
// 0074d570  56                   push esi
// 0074d571  8bf1                 mov esi, ecx
// 0074d573  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0074d576  85c9                 test ecx, ecx
// 0074d578  740e                 je 0x74d588
// 0074d57a  8b01                 mov eax, dword ptr [ecx]
// 0074d57c  8b5068               mov edx, dword ptr [eax + 0x68]
// 0074d57f  ffd2                 call edx
// 0074d581  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 0074d588  5e                   pop esi
// 0074d589  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000009@CXTPReportColumn@ns_ROCX000009@@QAEXXZ)

namespace ns_ROCX000009 {
struct CXTPReportColumn
{
    void fn_ROCX000009();
};

void CXTPReportColumn::fn_ROCX000009()
{
    if (*(void**)((char*)this + 0x2c) != 0)
    {
        void* p = *(void**)((char*)this + 0x2c);
        (*(void (__thiscall**)(void*))(*(int*)p + 0x68))(p);
        *(int*)((char*)this + 0x2c) = 0;
    }
}
}
