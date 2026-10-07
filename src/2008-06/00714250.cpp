// roc 2008-06 00714250  unit: CXTPPropertyGridView  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00714250
//
// 00714250  56                   push esi
// 00714251  8b742418             mov esi, dword ptr [esp + 0x18]
// 00714255  8d542408             lea edx, [esp + 8]
// 00714259  b803000000           mov eax, 3
// 0071425e  52                   push edx
// 0071425f  668906               mov word ptr [esi], ax
// 00714262  c7460800000000       mov dword ptr [esi + 8], 0
// 00714269  e83240fdff           call 0x6e82a0
// 0071426e  85c0                 test eax, eax
// 00714270  7507                 jne 0x714279
// 00714272  c7460800001000       mov dword ptr [esi + 8], 0x100000
// 00714279  33c0                 xor eax, eax
// 0071427b  5e                   pop esi
// 0071427c  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleState@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
