// roc 2009-06 00815620  unit: CXTPRibbonControlTab  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00815620
//
// 00815620  8b442404             mov eax, dword ptr [esp + 4]
// 00815624  85c0                 test eax, eax
// 00815626  7c14                 jl 0x81563c
// 00815628  3b81e0010000         cmp eax, dword ptr [ecx + 0x1e0]
// 0081562e  7d0c                 jge 0x81563c
// 00815630  8b89dc010000         mov ecx, dword ptr [ecx + 0x1dc]
// 00815636  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00815639  c20400               ret 4
// 0081563c  33c0                 xor eax, eax
// 0081563e  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetTab@CXTPRibbonControlTab@@QBEPAVCXTPRibbonTab@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
