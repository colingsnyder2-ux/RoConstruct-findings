// roc 2009-12 008f11d0  unit: CXTPRibbonControlTab  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f11d0
//
// 008f11d0  8b442404             mov eax, dword ptr [esp + 4]
// 008f11d4  85c0                 test eax, eax
// 008f11d6  7c14                 jl 0x8f11ec
// 008f11d8  3b81e0010000         cmp eax, dword ptr [ecx + 0x1e0]
// 008f11de  7d0c                 jge 0x8f11ec
// 008f11e0  8b89dc010000         mov ecx, dword ptr [ecx + 0x1dc]
// 008f11e6  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008f11e9  c20400               ret 4
// 008f11ec  33c0                 xor eax, eax
// 008f11ee  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetTab@CXTPRibbonControlTab@@QBEPAVCXTPRibbonTab@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
