// roc 2008-06 007964a0  unit: CXTPRibbonScrollableBar::CControlGroupsScroll  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007964a0
//
// 007964a0  56                   push esi
// 007964a1  8bf1                 mov esi, ecx
// 007964a3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007964a9  e822eaf1ff           call 0x6b4ed0
// 007964ae  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 007964b4  8b10                 mov edx, dword ptr [eax]
// 007964b6  8b926c010000         mov edx, dword ptr [edx + 0x16c]
// 007964bc  51                   push ecx
// 007964bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007964c1  56                   push esi
// 007964c2  51                   push ecx
// 007964c3  8bc8                 mov ecx, eax
// 007964c5  ffd2                 call edx
// 007964c7  5e                   pop esi
// 007964c8  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonPopups.cpp (function ?Draw@CControlGroupsScroll@CXTPRibbonScrollableBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp
