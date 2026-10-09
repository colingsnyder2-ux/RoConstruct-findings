// from server: 18% by colin
// roc 2007-08 006d1f60  unit: CXTPReportInplaceList  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d1f60
//
// 006d1f60  6aff                 push -1
// 006d1f62  68b86a7600           push 0x766ab8
// 006d1f67  64a100000000         mov eax, dword ptr fs:[0]
// 006d1f6d  50                   push eax
// 006d1f6e  51                   push ecx
// 006d1f6f  56                   push esi
// 006d1f70  a188518b00           mov eax, dword ptr [0x8b5188]
// 006d1f75  33c4                 xor eax, esp
// 006d1f77  50                   push eax
// 006d1f78  8d44240c             lea eax, [esp + 0xc]
// 006d1f7c  64a300000000         mov dword ptr fs:[0], eax
// 006d1f82  8bf1                 mov esi, ecx
// 006d1f84  89742408             mov dword ptr [esp + 8], esi
// 006d1f88  c706d07b7d00         mov dword ptr [esi], 0x7d7bd0
// 006d1f8e  6a00                 push 0
// 006d1f90  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006d1f98  e843f2ffff           call 0x6d11e0
// 006d1f9d  8bce                 mov ecx, esi
// 006d1f9f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006d1fa7  e8b418f8ff           call 0x653860
// 006d1fac  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d1fb0  64890d00000000       mov dword ptr fs:[0], ecx
// 006d1fb7  59                   pop ecx
// 006d1fb8  5e                   pop esi
// 006d1fb9  83c410               add esp, 0x10
// 006d1fbc  c3                   ret 

struct CXTPReportInplaceList {
    void sub_6D11E0(int);
    void sub_653860();
    void dtor();
};

void CXTPReportInplaceList::dtor()
{
    *(void**)this = (void*)0x7D7BD0;
    sub_6D11E0(0);
    sub_653860();
}
