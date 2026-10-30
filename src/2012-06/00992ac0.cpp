// roc 2012-06 00992ac0  unit: CXTPCommandBar  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00992ac0
//
// 00992ac0  8b01                 mov eax, dword ptr [ecx]
// 00992ac2  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 00992ac8  6a00                 push 0
// 00992aca  6a01                 push 1
// 00992acc  6a00                 push 0
// 00992ace  ffd2                 call edx
// 00992ad0  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Ribbon\XTPRibbonBackstageView.cpp (function ?OnCancel@CXTPRibbonBackstageView@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Ribbon/XTPRibbonBackstageView.cpp
