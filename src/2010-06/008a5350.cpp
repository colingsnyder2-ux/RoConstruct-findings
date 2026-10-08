// roc 2010-06 008a5350  unit: CXTPRibbonControlTab  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5350
//
// 008a5350  8b442404             mov eax, dword ptr [esp + 4]
// 008a5354  85c0                 test eax, eax
// 008a5356  7c14                 jl 0x8a536c
// 008a5358  3b81e0010000         cmp eax, dword ptr [ecx + 0x1e0]
// 008a535e  7d0c                 jge 0x8a536c
// 008a5360  8b89dc010000         mov ecx, dword ptr [ecx + 0x1dc]
// 008a5366  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008a5369  c20400               ret 4
// 008a536c  33c0                 xor eax, eax
// 008a536e  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonControlTab.cpp (function ?GetTab@CXTPRibbonControlTab@@QBEPAVCXTPRibbonTab@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonControlTab.cpp
