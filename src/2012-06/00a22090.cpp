// roc 2012-06 00a22090  unit: CXTPRibbonBar  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a22090
//
// 00a22090  56                   push esi
// 00a22091  8bf1                 mov esi, ecx
// 00a22093  e8580cf7ff           call 0x992cf0
// 00a22098  8bc8                 mov ecx, eax
// 00a2209a  e8911ff8ff           call 0x9a4030
// 00a2209f  33c0                 xor eax, eax
// 00a220a1  817c240888250000     cmp dword ptr [esp + 8], 0x2588
// 00a220a9  8bce                 mov ecx, esi
// 00a220ab  0f94c0               sete al
// 00a220ae  50                   push eax
// 00a220af  e82cf7ffff           call 0xa217e0
// 00a220b4  5e                   pop esi
// 00a220b5  c20400               ret 4
// library xtp-15.2.1/Source\Ribbon\XTPRibbonBar.cpp (function ?OnCustomizePlaceQuickAccess@CXTPRibbonBar@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonBar.cpp
