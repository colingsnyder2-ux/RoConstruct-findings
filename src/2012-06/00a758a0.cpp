// from server: 100% by auto
// roc 2012-06 00a758a0  unit: CXTPRibbonControlTab  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a758a0
//
// 00a758a0  56                   push esi
// 00a758a1  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a758a5  8d542408             lea edx, [esp + 8]
// 00a758a9  b803000000           mov eax, 3
// 00a758ae  52                   push edx
// 00a758af  668906               mov word ptr [esi], ax
// 00a758b2  e8393ff5ff           call 0x9c97f0
// 00a758b7  f7d8                 neg eax
// 00a758b9  1bc0                 sbb eax, eax
// 00a758bb  83e0e9               and eax, 0xffffffe9
// 00a758be  83c03c               add eax, 0x3c
// 00a758c1  894608               mov dword ptr [esi + 8], eax
// 00a758c4  33c0                 xor eax, eax
// 00a758c6  5e                   pop esi
// 00a758c7  c21400               ret 0x14
// library xtp-15.2.1/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetAccessibleRole@CXTPRibbonControlTab@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonControlTab.cpp
