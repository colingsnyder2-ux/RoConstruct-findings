// roc 2008-06 00799630  unit: CXTPRibbonControlTab  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00799630
//
// 00799630  8b817cffffff         mov eax, dword ptr [ecx - 0x84]
// 00799636  85c0                 test eax, eax
// 00799638  7412                 je 0x79964c
// 0079963a  83782000             cmp dword ptr [eax + 0x20], 0
// 0079963e  740c                 je 0x79964c
// 00799640  8bc8                 mov ecx, eax
// 00799642  8b01                 mov eax, dword ptr [ecx]
// 00799644  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0079964a  ffe2                 jmp edx
// 0079964c  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonControlTab.cpp (function ?Reposition@CXTPRibbonControlTab@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp
