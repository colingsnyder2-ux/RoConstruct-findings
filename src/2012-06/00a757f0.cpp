// roc 2012-06 00a757f0  unit: CXTPRibbonControlTab  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a757f0
//
// 00a757f0  8b01                 mov eax, dword ptr [ecx]
// 00a757f2  8b5070               mov edx, dword ptr [eax + 0x70]
// 00a757f5  6a01                 push 1
// 00a757f7  ffd2                 call edx
// 00a757f9  c3                   ret 
// library xtp-15.2.1/Source\Ribbon\XTPRibbonControlTab.cpp (function ?OnUnderlineActivate@CXTPRibbonControlTab@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonControlTab.cpp
