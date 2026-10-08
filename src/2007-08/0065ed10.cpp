// from server: 100% by colin
// roc 2007-08 0065ed10  unit: CXTPReportColumn  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065ed10
//
// 0065ed10  56                   push esi
// 0065ed11  8bf1                 mov esi, ecx
// 0065ed13  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0065ed16  85c9                 test ecx, ecx
// 0065ed18  740e                 je 0x65ed28
// 0065ed1a  8b01                 mov eax, dword ptr [ecx]
// 0065ed1c  8b5068               mov edx, dword ptr [eax + 0x68]
// 0065ed1f  ffd2                 call edx
// 0065ed21  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 0065ed28  5e                   pop esi
// 0065ed29  c3                   ret 

struct CXTPReportColumn
{
    void func_0065ed10();
};

void CXTPReportColumn::func_0065ed10()
{
    if (*(void**)((char*)this + 0x2c) != 0)
    {
        void* p = *(void**)((char*)this + 0x2c);
        (*(void (__thiscall**)(void*))(*(int*)p + 0x68))(p);
        *(int*)((char*)this + 0x2c) = 0;
    }
}
