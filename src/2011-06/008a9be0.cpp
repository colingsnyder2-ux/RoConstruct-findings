// from server: 100% by auto
// roc 2011-06 008a9be0  unit: CXTPRibbonBar  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a9be0
//
// 008a9be0  56                   push esi
// 008a9be1  8bf1                 mov esi, ecx
// 008a9be3  e8a80ef7ff           call 0x81aa90
// 008a9be8  8bc8                 mov ecx, eax
// 008a9bea  e8711ef8ff           call 0x82ba60
// 008a9bef  33c0                 xor eax, eax
// 008a9bf1  817c240888250000     cmp dword ptr [esp + 8], 0x2588
// 008a9bf9  8bce                 mov ecx, esi
// 008a9bfb  0f94c0               sete al
// 008a9bfe  50                   push eax
// 008a9bff  e82cf7ffff           call 0x8a9330
// 008a9c04  5e                   pop esi
// 008a9c05  c20400               ret 4
// library xtp-15.2.1/Source\Ribbon\XTPRibbonBar.cpp (function ?OnCustomizePlaceQuickAccess@CXTPRibbonBar@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonBar.cpp
