// from server: 86% by colin
// roc 2007-08 006d1d90  unit: CXTPReportInplaceList  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d1d90
//
// 006d1d90  8b442404             mov eax, dword ptr [esp + 4]
// 006d1d94  56                   push esi
// 006d1d95  8bf1                 mov esi, ecx
// 006d1d97  50                   push eax
// 006d1d98  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 006d1d9f  e83cf4ffff           call 0x6d11e0
// 006d1da4  8d4e24               lea ecx, [esi + 0x24]
// 006d1da7  c7462800000000       mov dword ptr [esi + 0x28], 0
// 006d1dae  ff1558d57700         call dword ptr [0x77d558]
// 006d1db4  5e                   pop esi
// 006d1db5  c20400               ret 4

struct CXTPReportInplaceList {
    void sub_6D11E0(int);
    void sub_6D1D90(int);
};

extern "C" void __stdcall sub_77D558();

void CXTPReportInplaceList::sub_6D1D90(int a) {
    *(int*)((char*)this + 0x2c) = 0;
    this->sub_6D11E0(a);
    *(int*)((char*)this + 0x28) = 0;
    (*(void (__stdcall**)())0x77d558)();
}
