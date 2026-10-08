// roc 2009-06 008153e0  unit: CXTPRibbonControlTab  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008153e0
//
// 008153e0  8b442404             mov eax, dword ptr [esp + 4]
// 008153e4  85c0                 test eax, eax
// 008153e6  7508                 jne 0x8153f0
// 008153e8  b857000780           mov eax, 0x80070057
// 008153ed  c20400               ret 4
// 008153f0  8b89c0010000         mov ecx, dword ptr [ecx + 0x1c0]
// 008153f6  8908                 mov dword ptr [eax], ecx
// 008153f8  33c0                 xor eax, eax
// 008153fa  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetAccessibleChildCount@CXTPRibbonControlTab@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
