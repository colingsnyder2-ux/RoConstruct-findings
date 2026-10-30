// roc 2009-12 008f0f40  unit: CXTPRibbonControlTab  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0f40
//
// 008f0f40  8b442404             mov eax, dword ptr [esp + 4]
// 008f0f44  85c0                 test eax, eax
// 008f0f46  7508                 jne 0x8f0f50
// 008f0f48  b857000780           mov eax, 0x80070057
// 008f0f4d  c20400               ret 4
// 008f0f50  8b89c0010000         mov ecx, dword ptr [ecx + 0x1c0]
// 008f0f56  8908                 mov dword ptr [eax], ecx
// 008f0f58  33c0                 xor eax, eax
// 008f0f5a  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetAccessibleChildCount@CXTPRibbonControlTab@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
