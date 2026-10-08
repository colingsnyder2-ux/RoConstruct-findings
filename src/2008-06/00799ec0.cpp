// from server: 100% by auto
// roc 2008-06 00799ec0  unit: CXTPRibbonControlTab  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00799ec0
//
// 00799ec0  8b442404             mov eax, dword ptr [esp + 4]
// 00799ec4  85c0                 test eax, eax
// 00799ec6  7c14                 jl 0x799edc
// 00799ec8  3b81e0010000         cmp eax, dword ptr [ecx + 0x1e0]
// 00799ece  7d0c                 jge 0x799edc
// 00799ed0  8b89dc010000         mov ecx, dword ptr [ecx + 0x1dc]
// 00799ed6  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00799ed9  c20400               ret 4
// 00799edc  33c0                 xor eax, eax
// 00799ede  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetTab@CXTPRibbonControlTab@@QBEPAVCXTPRibbonTab@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
