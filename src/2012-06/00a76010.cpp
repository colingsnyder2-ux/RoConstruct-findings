// roc 2012-06 00a76010  unit: CXTPRibbonControlTab  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a76010
//
// 00a76010  8b442404             mov eax, dword ptr [esp + 4]
// 00a76014  85c0                 test eax, eax
// 00a76016  7508                 jne 0xa76020
// 00a76018  b857000780           mov eax, 0x80070057
// 00a7601d  c20400               ret 4
// 00a76020  8b89c0010000         mov ecx, dword ptr [ecx + 0x1c0]
// 00a76026  8908                 mov dword ptr [eax], ecx
// 00a76028  33c0                 xor eax, eax
// 00a7602a  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetAccessibleChildCount@CXTPRibbonControlTab@@MAEJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
