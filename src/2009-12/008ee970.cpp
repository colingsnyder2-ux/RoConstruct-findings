// roc 2009-12 008ee970  unit: CXTPRibbonScrollableBar::CControlGroupsScroll  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ee970
//
// 008ee970  56                   push esi
// 008ee971  8bf1                 mov esi, ecx
// 008ee973  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008ee979  e8125cf1ff           call 0x804590
// 008ee97e  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 008ee984  8b10                 mov edx, dword ptr [eax]
// 008ee986  8b926c010000         mov edx, dword ptr [edx + 0x16c]
// 008ee98c  51                   push ecx
// 008ee98d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ee991  56                   push esi
// 008ee992  51                   push ecx
// 008ee993  8bc8                 mov ecx, eax
// 008ee995  ffd2                 call edx
// 008ee997  5e                   pop esi
// 008ee998  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlGroupsScroll@CXTPRibbonScrollableBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp