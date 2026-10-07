// roc 2008-06 007994c0  unit: CXTPRibbonControlTab  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007994c0
//
// 007994c0  56                   push esi
// 007994c1  8b742418             mov esi, dword ptr [esp + 0x18]
// 007994c5  8d542408             lea edx, [esp + 8]
// 007994c9  b803000000           mov eax, 3
// 007994ce  52                   push edx
// 007994cf  668906               mov word ptr [esi], ax
// 007994d2  e8c9edf4ff           call 0x6e82a0
// 007994d7  f7d8                 neg eax
// 007994d9  1bc0                 sbb eax, eax
// 007994db  83e0e9               and eax, 0xffffffe9
// 007994de  83c03c               add eax, 0x3c
// 007994e1  894608               mov dword ptr [esi + 8], eax
// 007994e4  33c0                 xor eax, eax
// 007994e6  5e                   pop esi
// 007994e7  c21400               ret 0x14
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetAccessibleRole@CXTPRibbonControlTab@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
