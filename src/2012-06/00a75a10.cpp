// roc 2012-06 00a75a10  unit: CXTPRibbonControlTab  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a75a10
//
// 00a75a10  8b817cffffff         mov eax, dword ptr [ecx - 0x84]
// 00a75a16  85c0                 test eax, eax
// 00a75a18  7412                 je 0xa75a2c
// 00a75a1a  83782000             cmp dword ptr [eax + 0x20], 0
// 00a75a1e  740c                 je 0xa75a2c
// 00a75a20  8bc8                 mov ecx, eax
// 00a75a22  8b01                 mov eax, dword ptr [ecx]
// 00a75a24  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00a75a2a  ffe2                 jmp edx
// 00a75a2c  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Ribbon\XTPRibbonControlTab.cpp (function ?Reposition@CXTPRibbonControlTab@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp
