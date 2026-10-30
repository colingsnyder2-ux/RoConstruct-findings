// roc 2011-06 008fdcd0  unit: CXTPRibbonControlTab  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fdcd0
//
// 008fdcd0  8b442404             mov eax, dword ptr [esp + 4]
// 008fdcd4  85c0                 test eax, eax
// 008fdcd6  7508                 jne 0x8fdce0
// 008fdcd8  b857000780           mov eax, 0x80070057
// 008fdcdd  c20400               ret 4
// 008fdce0  8b89c0010000         mov ecx, dword ptr [ecx + 0x1c0]
// 008fdce6  8908                 mov dword ptr [eax], ecx
// 008fdce8  33c0                 xor eax, eax
// 008fdcea  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetAccessibleChildCount@CXTPRibbonControlTab@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
