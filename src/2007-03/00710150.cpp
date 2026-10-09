// roc 2007-03 00710150  unit: seg_00710000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00710150
//
// 00710150  56                   push esi
// 00710151  8b742418             mov esi, dword ptr [esp + 0x18]
// 00710155  8d442408             lea eax, [esp + 8]
// 00710159  50                   push eax
// 0071015a  66c7060300           mov word ptr [esi], 3
// 0071015f  e84c5ef7ff           call 0x685fb0
// 00710164  f7d8                 neg eax
// 00710166  1bc0                 sbb eax, eax
// 00710168  83e0e9               and eax, 0xffffffe9
// 0071016b  83c03c               add eax, 0x3c
// 0071016e  894608               mov dword ptr [esi + 8], eax
// 00710171  33c0                 xor eax, eax
// 00710173  5e                   pop esi
// 00710174  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetAccessibleRole@CXTPRibbonControlTab@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonControlTab.cpp
