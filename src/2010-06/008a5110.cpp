// roc 2010-06 008a5110  unit: CXTPRibbonControlTab  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5110
//
// 008a5110  8b442404             mov eax, dword ptr [esp + 4]
// 008a5114  85c0                 test eax, eax
// 008a5116  7508                 jne 0x8a5120
// 008a5118  b857000780           mov eax, 0x80070057
// 008a511d  c20400               ret 4
// 008a5120  8b89c0010000         mov ecx, dword ptr [ecx + 0x1c0]
// 008a5126  8908                 mov dword ptr [eax], ecx
// 008a5128  33c0                 xor eax, eax
// 008a512a  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetAccessibleChildCount@CXTPRibbonControlTab@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
