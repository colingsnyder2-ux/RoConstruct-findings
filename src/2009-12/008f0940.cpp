// roc 2009-12 008f0940  unit: CXTPRibbonControlTab  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0940
//
// 008f0940  8b817cffffff         mov eax, dword ptr [ecx - 0x84]
// 008f0946  85c0                 test eax, eax
// 008f0948  7412                 je 0x8f095c
// 008f094a  83782000             cmp dword ptr [eax + 0x20], 0
// 008f094e  740c                 je 0x8f095c
// 008f0950  8bc8                 mov ecx, eax
// 008f0952  8b01                 mov eax, dword ptr [ecx]
// 008f0954  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 008f095a  ffe2                 jmp edx
// 008f095c  c3                   ret 
// copied from an identical function in another client (function ?Reposition@CXTPRibbonControlTab@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp