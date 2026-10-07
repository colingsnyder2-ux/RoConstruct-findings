// roc 2008-06 00799c30  unit: CXTPRibbonControlTab  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00799c30
//
// 00799c30  8b442404             mov eax, dword ptr [esp + 4]
// 00799c34  85c0                 test eax, eax
// 00799c36  7508                 jne 0x799c40
// 00799c38  b857000780           mov eax, 0x80070057
// 00799c3d  c20400               ret 4
// 00799c40  8b89c0010000         mov ecx, dword ptr [ecx + 0x1c0]
// 00799c46  8908                 mov dword ptr [eax], ecx
// 00799c48  33c0                 xor eax, eax
// 00799c4a  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetAccessibleChildCount@CXTPRibbonControlTab@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
