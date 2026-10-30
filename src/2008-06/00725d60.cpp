// from server: 100% by auto
// roc 2008-06 00725d60  unit: CXTPRibbonBar  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00725d60
//
// 00725d60  56                   push esi
// 00725d61  8bf1                 mov esi, ecx
// 00725d63  e8a8f0f8ff           call 0x6b4e10
// 00725d68  8bc8                 mov ecx, eax
// 00725d6a  e8e1ebf7ff           call 0x6a4950
// 00725d6f  33c0                 xor eax, eax
// 00725d71  817c240888250000     cmp dword ptr [esp + 8], 0x2588
// 00725d79  8bce                 mov ecx, esi
// 00725d7b  0f94c0               sete al
// 00725d7e  50                   push eax
// 00725d7f  e82cf7ffff           call 0x7254b0
// 00725d84  5e                   pop esi
// 00725d85  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnCustomizePlaceQuickAccess@CXTPRibbonBar@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
