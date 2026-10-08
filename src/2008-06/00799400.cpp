// roc 2008-06 00799400  unit: CXTPRibbonControlTab  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00799400
//
// 00799400  8b01                 mov eax, dword ptr [ecx]
// 00799402  8b5070               mov edx, dword ptr [eax + 0x70]
// 00799405  6a01                 push 1
// 00799407  ffd2                 call edx
// 00799409  c3                   ret 
// library xtp-15.2.1/Source\Ribbon\XTPRibbonControlTab.cpp (function ?OnUnderlineActivate@CXTPRibbonControlTab@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonControlTab.cpp
