// roc 2011-06 008fd560  unit: CXTPRibbonControlTab  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fd560
//
// 008fd560  56                   push esi
// 008fd561  8b742418             mov esi, dword ptr [esp + 0x18]
// 008fd565  8d542408             lea edx, [esp + 8]
// 008fd569  b803000000           mov eax, 3
// 008fd56e  52                   push edx
// 008fd56f  668906               mov word ptr [esi], ax
// 008fd572  e8b93df5ff           call 0x851330
// 008fd577  f7d8                 neg eax
// 008fd579  1bc0                 sbb eax, eax
// 008fd57b  83e0e9               and eax, 0xffffffe9
// 008fd57e  83c03c               add eax, 0x3c
// 008fd581  894608               mov dword ptr [esi + 8], eax
// 008fd584  33c0                 xor eax, eax
// 008fd586  5e                   pop esi
// 008fd587  c21400               ret 0x14
// library xtp-15.2.1/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetAccessibleRole@CXTPRibbonControlTab@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonControlTab.cpp
