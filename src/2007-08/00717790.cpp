// roc 2007-08 00717790  unit: CXTPRibbonControlTab  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00717790
//
// 00717790  56                   push esi
// 00717791  8b742418             mov esi, dword ptr [esp + 0x18]
// 00717795  8d442408             lea eax, [esp + 8]
// 00717799  50                   push eax
// 0071779a  66c7060300           mov word ptr [esi], 3
// 0071779f  e82c9cf5ff           call 0x6713d0
// 007177a4  f7d8                 neg eax
// 007177a6  1bc0                 sbb eax, eax
// 007177a8  83e0e9               and eax, 0xffffffe9
// 007177ab  83c03c               add eax, 0x3c
// 007177ae  894608               mov dword ptr [esi + 8], eax
// 007177b1  33c0                 xor eax, eax
// 007177b3  5e                   pop esi
// 007177b4  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetAccessibleRole@CXTPRibbonControlTab@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonControlTab.cpp
