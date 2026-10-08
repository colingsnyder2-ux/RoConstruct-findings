// roc 2011-06 008fdf10  unit: CXTPRibbonControlTab  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fdf10
//
// 008fdf10  8b442404             mov eax, dword ptr [esp + 4]
// 008fdf14  85c0                 test eax, eax
// 008fdf16  7c14                 jl 0x8fdf2c
// 008fdf18  3b81e0010000         cmp eax, dword ptr [ecx + 0x1e0]
// 008fdf1e  7d0c                 jge 0x8fdf2c
// 008fdf20  8b89dc010000         mov ecx, dword ptr [ecx + 0x1dc]
// 008fdf26  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008fdf29  c20400               ret 4
// 008fdf2c  33c0                 xor eax, eax
// 008fdf2e  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetTab@CXTPRibbonControlTab@@QBEPAVCXTPRibbonTab@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
