// roc 2009-12 008953c0  unit: CXTPRibbonBar  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008953c0
//
// 008953c0  8b8180020000         mov eax, dword ptr [ecx + 0x280]
// 008953c6  85c0                 test eax, eax
// 008953c8  740c                 je 0x8953d6
// 008953ca  83784400             cmp dword ptr [eax + 0x44], 0
// 008953ce  7406                 je 0x8953d6
// 008953d0  b801000000           mov eax, 1
// 008953d5  c3                   ret 
// 008953d6  33c0                 xor eax, eax
// 008953d8  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?IsDwmEnabled@CXTPRibbonBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
