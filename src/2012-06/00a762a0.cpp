// roc 2012-06 00a762a0  unit: CXTPRibbonControlTab  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a762a0
//
// 00a762a0  8b442404             mov eax, dword ptr [esp + 4]
// 00a762a4  85c0                 test eax, eax
// 00a762a6  7c14                 jl 0xa762bc
// 00a762a8  3b81e0010000         cmp eax, dword ptr [ecx + 0x1e0]
// 00a762ae  7d0c                 jge 0xa762bc
// 00a762b0  8b89dc010000         mov ecx, dword ptr [ecx + 0x1dc]
// 00a762b6  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00a762b9  c20400               ret 4
// 00a762bc  33c0                 xor eax, eax
// 00a762be  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetTab@CXTPRibbonControlTab@@QBEPAVCXTPRibbonTab@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
